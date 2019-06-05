/*
1.  Create class called binary_tree
2.  Create structure called node
3.  Declare 4 attributes in structure: integer data, two pointers to the same
    type of structure, called left and right
4.  Declare main pointer to structure node type called root
5.  This pointer is attribute of class binary_tree
6.  This pointer is going to contain all data related to binary tree trought
    connecting nodes
7.  Declare two methods called add and search
8.  Add needs to have logic which will be dependent from data attribute and
    check for its place of creation on left or right side
9.  Search needs to be implemented as recursive function
10. Check for nullptr in search and call it again on fulfilled condition(< or >)
11. First function doesn't have return type
12. Second function indicates its success by sending boolean values
13. Both class methods are wrappers for two private class method which are going
    to be implemented recursively for easier usage.
14. Private functions are using another input parameter -> node pointer
15. This is designed like this for passage of pointers ( left, right)
16. Declare two constructors and destructors
17. One of the constructor - destructor pair is going to be part of node
    structure
18. Second pair is going to be of class
19. Constructors in structure is used to declare new node (Pointers are NULL,
    data is set)
20. Constructor in class is esentially wrapper for stucture constructor
21. Structure destructor deletes left and right pointers
22. Class destructor deletes root pointer
23. Test everything in main
*/

#include <iostream>
#include "LeakTester.h"

class binary_tree {
  private:
    struct node {
      int data;
      node *left;
      node *right;
      node(int _data, node *_left, node *_right)
          : data(_data), left(_left), right(_right) {}
      ~node() {
        if (left) delete left;
        if (right) delete right;
      }
    };

    node *root;

    void add(int val, node *ptr) {
      if (val > ptr->data) {
        if (ptr->left != NULL)
          add(val, ptr->left);
        else
          ptr->left = new node(val, NULL, NULL);
      } 
      else if (val <= ptr->data) {
        if (ptr->right != NULL)
          add(val, ptr->right);
        else
          ptr->right = new node(val, NULL, NULL);
      }
    }

    bool search(int item, node *ptr) {
      if (!ptr->left && !ptr->right) {
        if (ptr->data == item) {
          return true;
        }
        return false;
      }
      if (ptr->data < item && ptr->left) {
        search(item, ptr->left);
      } else if (ptr->data > item && ptr->right) {
        search(item, ptr->right);
      }
    }

  public:
    binary_tree(int data) { 
      binary_tree::root = new node(data, NULL, NULL); 
    }

    ~binary_tree() { 
      delete binary_tree::root; 
    }

    void addData(int new_data) { 
      binary_tree::add(new_data, binary_tree::root); 
    }
    
    bool searchItem(int item) {
      return binary_tree::search(item, binary_tree::root);
    }
};

int main() {
  binary_tree tree(2);
  tree.addData(10);
  tree.addData(1);
  tree.addData(20);
  tree.addData(0);

  std::cout << tree.searchItem(0) << std::endl;
  std::cout << tree.searchItem(9) << std::endl;
  tree.addData(11);
  std::cout << tree.searchItem(11) << std::endl;
  /* OUTPUT:
      1
      0
      1
  */
  return 0;
}