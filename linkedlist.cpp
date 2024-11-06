#include<iostream>
using namespace std;
struct Node {
int data;
Node*next; // syntax while declaring a pointer inside structureStructure_name*pointer name
};
void linkedlistTraversal(Node*ptr){
    // syntax for declaring a pointer : data_type * pointer_name
    //data_type is the type of data that the pointer will point to
    while(ptr!=NULL) {
        cout<<"ELEMENT : "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
int main() {
    Node*head=nullptr;  // a null pointer, meaning it doesn't point to any memory location.
    Node*second=nullptr;
    Node*third=nullptr;

    //Allocation memory for nodes in the linked list in Heap 
    head=new Node;
    second=new Node;
    third=new Node;
    // Link first and second node 
    head->data = 7 ;
    head->next = second ;

    // Link second node to the third node 
    second->data = 11 ;
    second->next = third ;

    // Terminate the list at the third node 
    third->data = 66 ;
    third->next = nullptr ;
    linkedlistTraversal(head);
    
    // Freeing the allocated memory
    delete head;
    delete second;
    delete third;
    
    return 0 ;
}
