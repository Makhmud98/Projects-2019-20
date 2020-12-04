// LinkedNode.h

// This is the definition for a linked list node that  stores an employee object.  


/*
Makhmud Makhmudov
CS3100 - Professor Liu
Assignment_3
*/



#ifndef _LinkedNodeClass_
#define _LinkedNodeClass_

#include <iostream>
using namespace std;

class LinkedNode {


public:

  string value;			// The data value
  LinkedNode *next;		// Pointer to the next node

  // Simple inline constructor:  initialize values
  LinkedNode(string newval = " ", LinkedNode* newptr = NULL)
      {value = newval; next = newptr;} 

  // Inline print function:  print the node's value
  void print() {cout << value;}

};

#endif
