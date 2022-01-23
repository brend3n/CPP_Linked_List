#include <iostream>
using namespace std;

// Simple node class for a linked list
class ListNode{
    public:
        int val;
        ListNode *next;
        
        ListNode(){
            val = 0;
            next = nullptr;
        }

        ListNode(int data){
            this->val = data;
            this->next = nullptr;
        }
};


// Simple LinkedList class that contains the head of the list.
class LinkedList{
    public:
        ListNode* head;

        LinkedList(){
            this->head = nullptr;
        }
        
        // Inserts a value into the linked list at the front of the list.
        void push(int);

        // Inserts a value at the end of the linked list.
        void append(int);

        // Inserts the data at a given position in the list.
        void insert_at_pos(int data, int pos);

        // Delete the first node that contains the data.
        void delete_node(int data);
        
        // Removes all nodes from the linked list.
        void clear();

        // Prints the contents of the linked list starting from the head.
        void print();
};

void LinkedList::push(int data){
    /*
     *  1) Create a new node for the data
     *  2) Have this new node's next pointer point to the head
     * */

    ListNode* node = new ListNode(data);
    node->next = this->head;
    this->head = node;

}

void LinkedList::append(int data){
    /* 
     * 1) Traverse the list until end curr->next == NULL
     * 2) Make new node and set curr->next to the new node.
     * 3) Ensure the new node's next is null
     * */
}


void LinkedList::insert_at_pos(int data, int pos){
    /*
     * 1) Traverse to the position
     * 2) Insert node between nodes
     * */

} 

void LinkedList::delete_node(int data){
    /*
     * 1) Traverse through the list
     * 2) Delete the first node that has the value of data
     * */
}

void LinkedList::clear(){
    /*
     * 1) Start at head
     * 2) While node is not null
     * 3) delete the node
     * 4) go to the next node
     * */
}

void LinkedList::print(){
    /* 1) Prints the contents of the list
     * */
    
    ListNode* temp = this->head;
    cout << "List: ";
    while(temp != nullptr){
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;

}


int main(){
    LinkedList listy;         
    listy.push(3);
    listy.push(10);
    listy.push(9);
    listy.push(24);
    listy.push(999);

    listy.print();


    return 0;
}
