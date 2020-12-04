/*
Makhmud Makhmudov - 11/7/20 - 
CS3100 - Professor Liu
Assignment_3
*/

#include "LinkedNode.h"
#include "LinkedSortedList.h"
#include <iostream>
#include <fstream>

int main(){

	

	LinkedSortedList testList; // My Linked List
	cout << endl;
	testList.insert("aaa"); // Insert Largest String
	testList.insert("aa");
	testList.insert("a"); // Insert Smallest String
	testList.print();

	cout << "SORTING LIST" << endl;
	testList.sortList(testList.getHead()); // Sorted List should read ; [a, aa, aaa]
	testList.print();
	cout << endl;

	cout << "CLEARING LIST...";
	testList.clear();
	cout << "LIST CLEARED: PRINTING REMAINS: ";
	testList.print();


	cout << "PRINT FUNCTION" << endl;
	testList.print(); // PRINT Function Prints All Elements From LinkedList

	LinkedSortedList intList;

	intList.insert("3"); // Insert Largest 
	intList.insert("2");
	intList.insert("1"); // Insert Smallest 
	intList.print();
	cout << endl;



	cout << "SORT FUNCTION" << endl;
	intList.sortList(intList.getHead()); // Should Read ; [1,2,3]
	intList.print();
	cout << endl;
	

	ifstream inputFile("all.last.txt"); // Input File


	cout << "-----------------------------------------------------------------------" << endl;
	cout << "FROM FILE..." << endl;

	LinkedSortedList nameList;
	cout << endl;

	

	for (int i = 0; i < 20; i++) // Reading Names From txt File (20 names)
	{
		string readLine;
		getline(inputFile, readLine);
		nameList.insert(readLine); // INSERT Function inserts to List
	}

	nameList.print(); // Print List of Names
	cout << endl;

	cout << "GET Head: ";
	cout << nameList.getHead()->value; cout << endl;// GETHEAD Function Gets the Head of the Linked List

	cout << "GET Tail: ";
	string tail;
	nameList.getlast(tail); cout << endl;// GETLAST Function Gets the Tail of the Linked List


	cout << "Size: ";
	nameList.size(); cout << endl;// SIZE Function Gets the Size of the Linked List

	cout << "Nth Element: ";
	string removedElement;
	nameList.remove_nth_element_from_end(removedElement, 10); cout << endl; // REMOVE-NTH-ELEMENT Function Gets the Nth Element
																			// & Removes of the Linked List
	

	cout << "SORTING NAME LIST..." << endl;
	nameList.sortList(nameList.getHead()); // Sorted Name List
	
	nameList.print();

	cout << endl;
	cout << "MERGING TWO LISTS" << endl;

	// MERGING TWO SORTED LISTS
	cout << endl;
	LinkedSortedList list1;
	LinkedSortedList list2;
	cout << endl;

	ifstream inputFile1("all.last.txt"); // Input File
	for (int i = 0; i < 20; i++) // Reading Names From txt File (20 names)
	{
		string readLine;
		getline(inputFile1, readLine);
		list1.insert(readLine); // INSERT Function inserts to List
	}
	list1.sortList(list1.getHead());

	
	for (int i = 0; i < 40; i++) // Reading Names From txt File (20 names)
	{
		if (i > 20)
		{
			string readLine;
			getline(inputFile1, readLine);
			list2.insert(readLine); // INSERT Function inserts to List
		}
		
	}

	list2.sortList(list2.getHead()); 

	inputFile1.close(); // Close File
	
	MergeLinkedSortedList(list1.getHead(), list2.getHead());
	
	inputFile.close(); // Close File


	


	

}
