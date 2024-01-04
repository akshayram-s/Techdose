#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};
struct node* top=NULL;
void push(int val) {
   struct node* t=(struct node*)malloc(sizeof(struct node));
   t->next=top;
   t->data=val;
   top=t;
}

void pop() {
   if(top==NULL){
       cout<<"Stack Underflow"<<endl;
   }
   else{
       cout<<"Popped element : "<<top->data<<endl;
       top=top->next;
   }
}
void display() {
   struct node* ptr=top;
   if(top==NULL){
       cout<<"Stack is empty"<<endl;
   }
   else{
       cout<<"Elements in Stack are : ";
       while(ptr!=NULL){
           cout<<ptr->data<<" ";
           ptr=ptr->next;
       }
   }
}


int main() {
    push(10);
    push(20);
    push(30);
    pop();
    display();
    return 0;
}