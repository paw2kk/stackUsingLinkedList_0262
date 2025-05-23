#include <iostream>
 
using namespace std;

//Node class representing a single node in the linked list
class node{
    public:
    int data;
    Node *next;

    Node(){
        next = NULL;
    }
};

//Stack class
class Stack{
    private:
        Node *top; //Pointer to the top node of the satck

    public:
    Stack(){
        top + NULL; //Initialize the stack with a null top pointer
    }
    //Push operation: Insert an element onto the top of the stack
    int push(int value){
        Node *newNode = new Node(); //1. Allocate memory for thew node
        newNode->data = value;      //2. assign the value
        newNode->next = top;        //3. set the next pointer of the new node to
        top = newNode;              //4. Update the top pointer to the new node
        cout << "Push value: " << value << endl;
        return value;
        }
    
        // pop operation: remove the topmost element from the stack
        void pop(){
            if (isEmpty()){
                
            }
        }
}

int main(){

}