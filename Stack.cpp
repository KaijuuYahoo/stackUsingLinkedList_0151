#include <iostream>
using namespace std;

class node {
    public:
        int data;
        node *next;

    node(){
        next = NULL;
    }
};

class Stack{
    private:
        node *top; //Pointer to the top node of the stack
    public :
        Stack(){
            top = NULL;// Initialize the stack with a null top pointer
        }

        //Push Operation : Insert an element onto the top of the stack
        int push(int value){
            node *newNode = new node();//1.Allocate memory for the new node
            newNode -> data = value;//2. Assign value
            newNode -> next = top;
            top = newNode;
            cout <<  "Push Value : "<< value<<endl;
            return value;
        }
        //isEmpty operation : Check if stack is empty
        bool isEmpty(){
            return top = NULL;
        }

        //Pop operation : Remove the topmost element from the stack
        void pop(){
            if (isEmpty()){
                cout << "Stack is empty"<<endl ;
                return; //If stack is empty, print message and return
            }
            cout << "Popped value : " << top ->data <<endl;
            top = top->next;
        }
        //peek/top operation : Retrieve the value of the topmost element without removing
        V
};