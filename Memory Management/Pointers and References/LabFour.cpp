#include <iostream>

/*
1.  Create namespace custom
2.  In this namespace design class list
3.  This class needs to have node structure which will represent elemental object
    of list
4.  In this structure we are going to implement: value store attribute, pointer
    to same structure type which we will use to store data about previous and next
    element.
5.  Besides that, implementation of constructor which will handle initializations
    of attriute is required
6.  Second attribute of class list is going to be structure type pointer called
    head, which is representing pointer to the beginning of the list
7.  Third attribute is tail pointer, which is in charge of showing to the end of
    the list
8.  Implement default constructor for initial declaration of new lists
9.  Define and implement destructor to prevent memory leakage of our class
    instances
10. Destructor needs to remove every object in a list
11. Use head pointer to delete every linked list member
12. Implement push_front for adding new nodes on the beginning of the list
13. Implement push_back ( same principle)
14. Implement pop back and pop front which will we based on same logic as push
    method, but instead of adding elements, they will delete values
15. Implement print method logic which will use instance of list object to print
    stored values
16. Protect every method logic from empty lists
*/

namespace custom {

  template <typename T>
  class list {
    struct node {
      T value;
      node* prev;
      node* next;
      node(T val, node* _prev, node* _next)
          : value(val), prev(_prev), next(_next) {}
    };
    node* head;
    node* tail;

  public:
    list() : head(NULL), tail(NULL) {}
    ~list();
    void push_front(T);
    void push_back(T);
    T pop_back();
    T pop_front();
    bool empty() const { return (!head || !tail); }
    void print();
  };

  template <typename T>
  void list<T>::push_front(T value) {
    head = new node(value, NULL, head);

    if (head->next) {
      head->next->prev = head;
    }

    if (list<T>::empty()) {
      tail = head;
    }
  }

  template <typename T>
  void list<T>::push_back(T val) {
    list::tail = new node(val, list::tail, NULL);

    if (list::tail->prev) {
      list::tail->prev->next = tail;
    }

    if (list::empty()) {
      list::head = list::tail;
    }
  }

  template <typename T>
  list<T>::~list() {
    while (head) {
      node* temp(head);
      head = head->next;
      delete temp;
    }
  }

  template <typename T>
  T list<T>::pop_back() {
    if (list::empty()) {
      throw("list : list empty");
    }

    node* temp(list::tail);
    T value = (list::tail->value);
    list::tail = list::tail->prev;

    if (list::tail) {
      list::tail->next = NULL;
    } 
    else {
      list::head = NULL;
    }

    delete temp;
    return value;
  }

  template <typename T>
  T list<T>::pop_front() {
    if (list::empty()) {
      throw("list : list empty");
    }

    node* temp(list::head);
    T value = (list::head->value);
    list::head = list::head->next;

    if (list::head) {
      list::head->prev = NULL;
    } 
    else {
      list::tail = NULL;
    }

    delete temp;
    return value;
  }

  template <typename T>
  void list<T>::print() {
    node* ptr(list::head);

    while (ptr != NULL) {
      std::cout << ptr->value << " ";
      ptr = ptr->next;
    }
    
    std::cout << std::endl;
  }
}  // namespace custom

int main() {
  custom::list<int> list;
  list.push_back(9);
  list.print();
  return 0;
}