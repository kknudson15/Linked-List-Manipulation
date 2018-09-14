#include <iostream>
#include "List.h"
using namespace std;

	List:: List()
	// post condition: A list object is initialized to be empty.
	{
		first = NULL;
	}
	
	List:: List(const List & source)
	// pre condition: the source list must be a valid linked list object
	// post condition: the list is intialized as a copu of the source list.
	{
		Node * p;
		Node * last;
		
		if (source.first == NULL)
			first = NULL;
		else
		{
			first = get_node(source.first -> data , NULL);
			last = first;
			p = source.first -> next;
			
			
			while (p!= NULL)
			{
				last -> next = get_node(p->data, NULL);
				last = last -> next;
				p = p-> next;
			}
		}
	}
	
	// modification member functions 
		
		
		// change function
	void List:: make_empty() 
	// pre condition: a linked list has to exist to call this function
	// post condition: the contents of the list are deleted and an empty list is made.
	{
		r_make_empty(first);
	}
	
	
		// change function
	void List:: insert(const Item& entry)
	// pre condition: the item entry must be of type int
	// post condition: the item is added to the linked list in the correct order.
	{
		r_insert(first,entry);
	}
	
	
			// change function
	void List:: remove (const Item& target)
	// pre condition: the target must be an integer.
	// post condition: the target value is removed from the list if it is a value
	// that is in the list.
	{
		r_remove(target, first);
	}
	
	void List:: operator = (const List& source)
	// pre condition: the source list must be a valid linked list
	// post condition: the = operator is overidden so that the data members
	// of the linked list are copied over as well and not just the pointer values.
	{
		Node * p;
		Node * last;
		
		if (&source.first != NULL)
		{
			make_empty();
			
			if(source.first != NULL)
			{
				first = get_node(source.first -> data , NULL);
				last = first;
				p = source.first -> next;
			
			
				while (p!= NULL)
				{
					last -> next = get_node(p->data, NULL);
					last = last -> next;
					p = p-> next;
				}
				
			}
		}
	}
		
	void List :: print ()
	//post condition: the contents of the linked list are printed out to the terminal.
	{
		Node *cursor;

    for ( cursor=first; cursor != NULL; cursor=cursor->next )
      cout << cursor ->data << " ";
		
	cout << endl;
	}
		
	// constant member functions
	bool List :: is_empty()
	// pre condition: A link list is initialized
	// post condition: determines weather or not a list is empty.  
	// if it is empty it will return true otherwise it will return false.
	{
		if (first == NULL)
			return true;
		else 
			return false;
	}

	
	
			// change function
	 int List::length( )
	 // pre condition: a link list is initialized 
	 // post condition: returns the length of the list.
  {
		return r_length(first);
  }
  
	
			// change function
	bool List :: present(const Item& target)
	// pre condition: the target value is of the type integer.
	// post condition: If the target value is in the list true will be returned 
	// otherwise the function returns false.
	{
		return r_present(target, first);
	}
	
	
	
			// change function
	int List :: kth (Item& k)
	// pre condition: k must be an integer
	// post condition: the function returns the value of the kth number in the list.
	{
		return r_kth(k, first);
	}
	
		//change function 
	
	ostream& operator << ( ostream& out_s, const List& l )
	// pre condition: a list object is initialized and and outstream is available 
	// post condition: The contents of the list are outputted to a stream.
  {
		//r_write(out_s,l.first);
		return out_s;
  }

	//Private member functions
	List::Node* List::get_node ( const Item& entry, Node* link )
	// pre condition: entry is of the type integer and a pointer value link exists
	// post condition: returns the pointer to the specific node that the user is looking for.
  {
    Node *temp;

    temp = new Node;
    temp->data = entry;
    temp->next = link;
    return temp;
  }
  
	int List::r_length(Node * p) 
	{
		if(p==NULL)
			return 0;
		else 
			return 1 + r_length(p->next);
	}
	
	void List::r_write (ostream & out_s, Node * p) 
	{
		if (p!= NULL) 
		{
			out_s << p->data << " ";
			r_write(out_s, p->next);
		}
	}
	
	void List::r_insert(Node * p, Item entry)
	{
		if(p==NULL || entry < p->data)
			p = get_node(entry, p);
		else
			r_insert(p->next, entry);
		
	}
	
	int List :: r_kth (Item & k, Node * p)
	{
		int count = 0;
		if(k == count)
			return p -> data;
		
		else 
		{
			count++;
			return r_kth(k, p->next);
		}
	}
  
  
	bool List :: r_present(const Item& target, Node * p)
	{
		if (p== NULL) 
			return false;
		else if (p->data == target)
			return true;
		else
			r_present ( target, p -> next);	
			
	}
	
	void List :: r_remove(const Item& target, Node * p)
	{
		Node * temp = p;
		
		if (p!= NULL)
		{
			if( p -> data == target)
			{
				p = p->next;
				delete temp;
			}
		}
		
	}
	
	void List :: r_make_empty(Node * p)
	{
		Node * temp = p;
		if(p!= NULL)
		{
			p = p->next;
			delete temp;
			r_make_empty(p);
		}
	}

