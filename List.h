#include <iostream>
using namespace std;


class List
  {
    public:
    // TYPEDEF
      typedef int Item;                   // The data type of the items in a list.

    // CONSTRUCTORS
      List() ;          // Inline
      List(const List& source );         // Copy constructor

    // MODIFICATION MEMBER FUNCTIONS
      void make_empty ( );
      void insert ( const Item& entry );
      void remove ( const Item& target );
      void operator = ( const List& source );

    // CONSTANT MEMBER FUNCTIONS
      bool is_empty( );
      int length( );
      bool present ( const Item& target );
      Item kth (Item& k);
	  void print();

    // FRIEND FUNCTION for the List class:
      friend std::ostream& operator << ( std::ostream& out_s,
                                         const List& l );
    private:
    // DATA MEMBERS
      struct Node
      {
        Item data;
        Node *next;
      };
      Node *first;

    // PRIVATE FUNCTION
      Node* get_node ( const Item& entry, Node* link );
	  int r_length (Node *);
	  void r_write( ostream & out_s, Node * p);
	  void r_insert(Node * p, Item entry);
	  int r_kth(Item &, Node *);
	  bool r_present(const Item &, Node *);
	  void r_remove(const Item&, Node *);
	  void r_make_empty(Node *);
  };