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
                cout << "Stack is empty." << endl;
            }
            
            Node *temp = top;
            top = top->next;
            cout << "Popped value: " << top->data << endl;
            delete temp;
         }

         void peek(){
            if (top == NULL)
            {
                cout << "List is empty." << endl;
            }
            else{
                Node *current = top;
                while (current != NULL){
                    cout << current->data << " " << endl;
                    current = current->next;
                }
                cout << endl;
            }
         }
         bool isEmpty(){
            return top == NULL;
         }
};

int main(){
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 4){
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
    }

    switch (choice){
        case 1:
        cout << "Enter the value to push: ";
        cin >> value;
        stack push(value);
        break;
        case 2:
        if (!stack.isEmpty())
        {
            stack.pop();
        }
        else{
            
        }
    }
}