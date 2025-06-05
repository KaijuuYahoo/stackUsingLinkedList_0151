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
            newNode -> data = value;
            newNode -> next = top;
            top = newNode;
            cout <<  "Push Value : "<< value<<endl;
            return value;
        }
};