/* 
The project for garbage collection is divided in three main components (classes). 
The first is Iter class which is in charge for creating generic type of iterator 
for our reference Container. This iterator is used for finding specific 
pointer data address, reference count and total size. The type of this reference 
container is list of PtrDetails, which are a class for pointer related details, 
such as addresses and values. Creating user defined pointers is tough task, 
because we need to mimic all operations, behaviour and the general task of classic 
pointers in C++. A big part of those tasks are implemented by operators overriding 
for these types of data. This is where we are heavily depedent on references. 
Creating various operators requires many implementations where we have input or 
return parameter passed by reference. This is done for linkage operations on 
stream, object copying etc.
*/

#include "PointerLab.cpp"

// PtrDetails method
// Overloading operator== allows two class objects to be compared.
// This is needed by the STL list class.
template <class T>
bool operator==(const PtrDetails<T> &ob1, const PtrDetails<T> &ob2) {
  return (ob1.memPtr == ob2.memPtr);
}

// Copy constructor of Pointer class
template <class T, int size>
Pointer<T, size>::Pointer(const Pointer &ob) {
  typename std::list<PtrDetails<T> >::iterator p;
  p = findPtrInfo(ob.addr);
  p->refcount++;  // increment ref count
  addr = ob.addr;
  arraySize = ob.arraySize;
  
  if (arraySize > 0)
    isArray = true;
  else
    isArray = false;
}

// Overload assignment of Pointer to Pointer. (i.e ptr = ptr)
template <class T, int size>
Pointer<T, size> &Pointer<T, size>::operator=(Pointer &rv) {
  typename std::list<PtrDetails<T> >::iterator p;
  // First, decrement the reference count
  // for the memory currently being pointed to.
  p = findPtrInfo(addr);
  p->refcount--;
  // Next, increment the reference count of
  // the new address.
  p = findPtrInfo(rv.addr);
  p->refcount++;   // increment ref count
  addr = rv.addr;  // store the address.
  return rv;
}