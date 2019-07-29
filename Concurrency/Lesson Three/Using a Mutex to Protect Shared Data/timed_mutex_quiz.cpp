#include <future>
#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

/*
Please adapt the code from the previous example (example_2.cpp) in a way that a
timed_mutex is used. Also, in the function pushBack, please use the method
try_lock_for instead of lock, which should be executed until a maximum number of
attempts is reached (e.g. 3 times) or until it succeeds. When an attempt fails,
you should print an error message to the console that also contains the
respective vehicle id and then put the thread to sleep for an amount of time
before the next attempt is trief. Also, to expose the timing issues in this
example, please introduce a call to sleep_for with a delay of several
milliseconds before releasing the lock on the mutex. When done, experiment with
the timing parameters to see how many vehicles will be added to the vector in
the end.
 */

class Vehicle {
  public:
    Vehicle(int id) : _id(id) {}
    int getID() { return _id; }

  private:
    int _id;
};

class WaitingVehicles {
  public:
    WaitingVehicles() {}

    // getters / setters
    void printSize() {
      _mutex.lock();
      std::cout << "#vehicles = " << _vehicles.size() << std::endl;
      _mutex.unlock();
    }

    // typical behaviour methods
    void pushBack(Vehicle &&v) {
      for (size_t i = 0; i < 3; ++i) {
        if (_mutex.try_lock_for(std::chrono::milliseconds(100))) {
          _vehicles.emplace_back(std::move(v));
          std::this_thread::sleep_for(std::chrono::milliseconds(10));
          _mutex.unlock();
          break;
        } 
        else {
          std::cout << "Error! Vehicle #" << v.getID()
                    << " could not be added to the vector" << std::endl;
          std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
      }
    }

  private:
    std::vector<Vehicle>
      _vehicles;  // list of all vehicles waiting to enter this intersection
    std::timed_mutex _mutex;
};

int main() {
  std::shared_ptr<WaitingVehicles> queue(new WaitingVehicles);
  std::vector<std::future<void>> futures;

  for (int i = 0; i < 1000; ++i) {
    Vehicle v(i);
    futures.emplace_back(std::async(
        std::launch::async, &WaitingVehicles::pushBack, queue, std::move(v)));
  }

  for (std::future<void> &ftr : futures) {
    ftr.wait();
  }

  queue->printSize();

  return 0;
}
