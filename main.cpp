/*
Kyle Knudson
CSCI 591 - Sections 1
cs301188
February 26, 2018
Project 27
This project uses a menu driven system to have the user perform operations on a linked list.
The menu will be displayed initially and then the operations will continued to be performed 
until the user quits out of the program.  The use is able to insert values to a list, remove values from 
a list, check to see if the list is empty, see what the length of the list is, check to see if a value is present, 
report back a value in a specific position in the list and re initialize a list to be empty.  All of these operations
will be continued until the user selects the quit option on the menu marked as 'q' or 'Q'.  There is error 
checking for the cases of the letters that the user enters for the operations.  The back end of the program 
utilizes recursive functions to manipulate the ordered list.
*/
#include "List.h"
#include <cstdlib>
#include <iostream>
using namespace std;


int main()
{
  char choice;
  int value;
	List L1;

	cout << " List Menu " << endl;
	cout << " e -- Re-Initialize the list to be empty. " << endl;
	cout << " i v -- Insert the value v into the list. " << endl;
	cout << " r v -- Remove the value v from the list. " << endl;
	cout << " m -- Is the list empty? " << endl;
	cout << " l -- Report the length of the list " << endl;
	cout << " p v -- Is the value v present in the list? " << endl;
	cout << " k k1 -- Report the k1th value in the list. " << endl;
	cout << " w -- Write out the list. " << endl;
	cout << " h -- See this menu. " << endl;
	cout << " q -- Quit " << endl;
	
	cin >> choice;
		
	while (choice != 'q')
	{
		
			

		
		switch (choice) 
		{
			case 'e':   // Re-initialize the list to be empty.	
			{
				L1.make_empty();
				cin >> choice;
				break;	
			}
			case 'E':
			{
				L1.make_empty();
				cin >> choice;
				break;
			}
			case 'i':   // i v Insert the value v into the list.
			{
				cin >> value;
				L1.insert(value);
				
				cin >> choice;
				break;
			}
			case 'I':
			{
				cin >> value;
				L1.insert(value);
				
				cin >> choice;
				break;
			}
			case 'r':   // r v Remove the value v from the list.
			{
				cin >> value;
				L1.remove(value);
				
				cin >> choice;
				break;
			}
			case 'R':
			{
				cin >> value;
				L1.remove(value);
				
				cin >> choice;
				break;
			}
			case 'm':  // Is the list empty?
			{
				if (L1.is_empty() == true)
					cout << " The list is empty " << endl;
				else
					cout << " The list is not empty " << endl;
				
				cin >> choice;
				break;
			}
			case 'M':
			{
				if (L1.is_empty() == true)
					cout << " The list is empty " << endl;
				else
					cout << " The list is not empty " << endl;
				
				cin >> choice;
				break;
			}
			case 'l':  // Report the length of the list.
			{
				cout << " The Length of the list is: " << L1.length() << endl;
				
				cin >> choice;
				break;
			}
			case 'L':
			{
				cout << " THe Length of the list is: " << L1.length() << endl;
				
				cin >> choice;
				break;
			}
			case 'p':  // p v Is the value v present in the list
			{
				cin >> value;
				if (L1.present(value) == true)
					cout << " The value is in the list " << endl;
				else
					cout << " The value is not in the list " << endl;
				
				cin >> choice;
				break;
			}
			case 'P':
			{
				cin >> value;
				if (L1.present(value) == true)
					cout << " The value is in the list " << endl;
				else
					cout << " The value is not in the list " << endl;
				
				cin >> choice;
				break;
			}
			case 'k':   // k k1 Report the k1th value in the list.
			{
				cin >> value;
				cout << " THe " << value << "th element of the list is " << L1.kth(value) << endl;
				
				cin >> choice;
				break;
			}
			case 'K':
			{
				cin >> value;
				cout << " THe " << value << "th element of the list is " << L1.kth(value) << endl;
				
				cin >> choice;
				break;
			}
			case 'w':  // write out the list.
			{
				cout << L1 << ' ';
				
				cout << endl;
				cin >> choice;
				break;
			}
			case 'W':
			{
				cout << L1 << ' ';
				
				cout << endl;
				cin >> choice;
				break;
			}
			case 'h':  // See this menu.  
			{
				cout << " List Menu " << endl;
				cout << " e -- Re-Initialize the list to be empty. " << endl;
				cout << " i v -- Insert the value v into the list. " << endl;
				cout << " r v -- Remove the value v from the list. " << endl;
				cout << " m -- Is the list empty? " << endl;
				cout << " l -- Report the length of the list " << endl;
				cout << " p v -- Is the value v present in the list? " << endl;
				cout << " k k1 -- Report the k1th value in the list. " << endl;
				cout << " w -- Write out the list. " << endl;
				cout << " h -- See this menu. " << endl;
				cout << " q -- Quit " << endl;
				
				cin >> choice;
			
			break;
			}
			case 'H':
			{
				cout << " List Menu " << endl;
				cout << " e -- Re-Initialize the list to be empty. " << endl;
				cout << " i v -- Insert the value v into the list. " << endl;
				cout << " r v -- Remove the value v from the list. " << endl;
				cout << " m -- Is the list empty? " << endl;
				cout << " l -- Report the length of the list " << endl;
				cout << " p v -- Is the value v present in the list? " << endl;
				cout << " k k1 -- Report the k1th value in the list. " << endl;
				cout << " w -- Write out the list. " << endl;
				cout << " h -- See this menu. " << endl;
				cout << " q -- Quit " << endl;
				
				cin >> choice;
			
			break;
			}
			case 'q':  // Quit 
			{
				choice = 'q';
			break;
			}
			case 'Q':
				choice = 'q';
			break;
		}
		
	}
	
	cout << " The end" << endl;
	
	

}



