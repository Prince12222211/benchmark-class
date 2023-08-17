#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }

};

int main(){
    node*head=new node(5);
    cout<<head->data<<"\n";
    // cout<<(*head).data;
    node*one=new node(1);
    node*two=new node(2);
    node*three=new node(4);
    head->next=one;
    one->next=two;
    one->next->next=three;
    cout<<head->data<<"->"<<head->next->data<<"->"<<head->next;





    
    return  0;
}