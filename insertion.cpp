#include<iostream>
#define MAX_SIZE 1000
using namespace std;
int array[MAX_SIZE],top=-1,data;
char choice1;
 bool push(){
if(top>=(MAX_SIZE-1)){
  cout<<"Stack Overflow";
  cout<<endl<<"FIX: Free up some space deleting element from stack";
   return false;}
   else{
     cout<<"Enter the data to be inserted in stack: ";
     cin>>data;
     top=top+1;
     array[top]=data;
     return true;
   }

}
void pop(){
     if(top<=-1){
       cout<<"Stack Underflow"<<endl;
       cout<<"Fix: Enter some elements to stack";
     }
     else{
       cout<<"Element pop out of stack: "<<array[top];
       top=top-1;
     }
   }
   void display(){
     for(int i=0;i<=top;i++){
       cout<<array[i]<<" ";
     }
   }

  int main(){
    int choice;
    cout<<"Following are the functions that can be performed in stack using array:"<<endl;
    cout<<"1.Push element in stack";//insert an element inside the stack
    cout<<endl<<"2.Pop element out of stack";//get element on the top position of Stack
    cout<<endl<<"3.Display elements of stack";//display all the elements inside stack
cout<<endl<<"4.Exit Program";
do{
    cout<<endl<<"Select any one:"<<endl;
    cin>>choice;
    switch(choice){
      case 1: push();

break;
      case 2:pop();
      break;
      case 3:display();
break;
      case 4:cout<<"exit";
break;
    default: cout<<"Invalid Choice";
  }
}while(choice!=4);


    return 0;
  }
