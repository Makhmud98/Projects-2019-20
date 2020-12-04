#include "LinkedSortedList.h"
#include "LinkedNode.h"

#include <iostream>
#include <cstdlib>


/*
Makhmud Makhmudov
CS3100 - Professor Liu
Assignment_3
*/


using namespace std;


void LinkedSortedList::sortList(LinkedNode* head) { // Sort Function

	LinkedNode* currentPtr = head;
	LinkedNode* secondaryPtr = head;
	// For my sort function I used a bubble sort

		for (int i = 0; i < nodeCount; i++) {
			for (int j = 0; j < nodeCount - 1; j++) {


				// If Current ptr value is less than Secondary Pointer
				if (currentPtr->value < secondaryPtr->value ) {
					// We set temporary pointer to current pointer value
					string temp = currentPtr->value;
					// Set current ptr value to secondary pointers value
					currentPtr->value = secondaryPtr->value;
					// Set secondary ptr value to temp
					secondaryPtr->value = temp;

				}
				// Else we set secondary ptr to Secondary ptr.next
				secondaryPtr = secondaryPtr->next;
			}

			secondaryPtr = head;
			currentPtr = head->next;

			// For loop sets Current pointer to the next pointer
			for (int x= 0; x < i; x++) {
				currentPtr = currentPtr->next;
			}
		}

		cout << "List Has Been Sorted..." << endl;
		cout << endl;
	
}

LinkedSortedList::LinkedSortedList() {

	cout << "Constructed Node" << endl;
	head = nullptr; // Set head to Null
	nodeCount = 0; // Set size to 0
	cout << endl;
}

LinkedSortedList::~LinkedSortedList() {


}

int LinkedSortedList::size() const{
	return nodeCount; // Simply return the number of nodes counted
}

void LinkedSortedList::clear()  {

	if (head == 0)
	{
		cout << "Already Empty!" << endl;
	}
	else {
		while (head != 0)
		{
			head = head->next;
		}
	}

	nodeCount = 0;
}

bool LinkedSortedList::insert(string lName) {

	LinkedNode* temporary = new LinkedNode(); // Temp node to traverse

	temporary->value = lName; // Set the value to the name
	temporary->next = nullptr; // Set next pointer to null


	if (nodeCount >= 1) { // If we already have a head pointer
		tail->next = temporary;
		tail = temporary;
		
		nodeCount++; // add to node count after inserting
	}

	if (nodeCount == 0) // If there is no head then we set it to the head
	{

		head = temporary;
		tail = temporary;
		
		nodeCount++; // add to node count after inserting
	}
	return true;
}

bool LinkedSortedList::remove_nth_element_from_end(string& returnvalue, int n) {

	LinkedNode* temporary = new LinkedNode(); // Use temp node to traverse 


	if (n >= nodeCount) // Check if N value is greater than # of Items
	{
		cout << " Cannot Remove Element Greater Than Total Count";
		return false; // If so Return False
	}

	int nthNode = nodeCount - n; // Else get the nth node from end using subtraction
	temporary = head;

	for (int i = 1; i < nthNode; i++)
	{
		temporary = temporary->next; // Traverse through tempnode N times
	}

	temporary->print(); // Print out Nth Element
	cout << " Was Removed From List @ Index : " << nthNode << endl;
	temporary = head;

	if (n == nodeCount - 1) // If Nth element we return head
	{
		head = head->next;
		nodeCount--; // remove from count
		return true;
	}
	else {
		for (int x = 1; x < nthNode - 1; x++)
		{
			temporary = temporary->next;
		}
		// Below I link the node before the nth element with the node after 
		temporary->next = temporary->next->next;

		// Remove element from count
		nodeCount--;
		return true;
	}

}

bool LinkedSortedList::getlast(string& lastvalue) {

	LinkedNode* tempNode = new LinkedNode(); // Temp node to traverse through list
	tempNode = tail;

	while (tempNode != nullptr) // While our tempnode does not equal Null
	{
		if (tempNode->next == nullptr) // If the next element equals null it means we are at end
		{
			cout << "Value: " << tempNode->value << endl; // print last value
			break;
		}
		tempNode->next;	
	}
	nodeCount--; // since we removed element we decrease size of list
	return true;
}

void LinkedSortedList::print() const {
	

	LinkedNode* tempNode = new LinkedNode(); // Again, a temporary node to traverse
	tempNode = head;

	if (tempNode == nullptr) // Check to see if empty
	{
		cout << "EMTPY LIST!" << endl;
	}

	while (tempNode != NULL) // While not empty print all elements
	{
		tempNode->print();

		tempNode = tempNode->next;

		cout << endl;
	}
}

LinkedNode* LinkedSortedList::getHead() const  {

	//LinkedNode* tempNode = new LinkedNode(); // Temp node to traverse
	//cout << "Head Of List : " << head->value << endl; 
	return head; // Simply Return head 
}

LinkedNode* MergeLinkedSortedList(LinkedNode* head1, LinkedNode* head2)
{
	LinkedNode* newResult = 0; // New Result will hold the pointer to the merged list

	if (head1 == NULL) { // If there is nothing in first list then return second
		return head2;
	} if (head2 == NULL) { // If there is nothing in second return the first
		return head1;
	}
	
	if (head1->value < head2->value) {

		newResult = head1;
		newResult->next = MergeLinkedSortedList(head1->next, head2);

	}  else {
		newResult = head2;
		newResult->next = MergeLinkedSortedList(head1, head2->next);
	}
	

	newResult->print();
	cout << "\n";


	return newResult;
}