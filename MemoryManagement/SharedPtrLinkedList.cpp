#include <iostream>
#include <memory>
using namespace std;

//define a single linked list node
struct Node{
    int data;
    shared_ptr<Node> next; //keeps track of the reference count for Node
    explicit Node(const int value) : data(value), next(nullptr){  //constructor
    }
};

class LinkedList{
public:
    LinkedList(): head(nullptr){
    }
    //Insert a new node at the end of the linked list
    void insert(int val){
        const auto newNode = make_shared<Node>(val);
        if (!head){
            head = newNode;
        }
        else{
            shared_ptr<Node> current = head;
            while (current -> next){
                current = current -> next;
            }
            current -> next = newNode;
        }
    }

    //delete a node with a given value from a linked list
    void del(int val){
        if (!head){
            return;
        }
        if (head -> data == val){
            head = head -> next;
            return;
        }
        shared_ptr<Node> current = head;
        while (current -> next&& current -> next-> data != val){
            current = current -> next;
        }
        if (current -> next&& current->next-> data == val){
            current-> next = current->next->next;
        }
    }

    //Traverse and print the linked list
    void print() const{
        shared_ptr<Node> current = head;
        while (current){
            cout << current-> data << " -> ";
            current = current -> next;
        }
        cout << "Null" << endl;
    }

private:
    shared_ptr<Node> head;
};

int main(){
    LinkedList linked_list;
    //Insert nodes into the linked list
    linked_list.insert(10);
    linked_list.insert(20);
    linked_list.insert(30);

    //print the linked list
    cout << "Linked List: ";
    linked_list.print();
    //delete a node and update a linked list
    linked_list.del(10);
    cout << "Linked list after deleting 10: ";
    linked_list.print();

    return 0;
}
