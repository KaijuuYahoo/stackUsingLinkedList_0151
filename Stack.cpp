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
};