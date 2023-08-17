// #include<iostream>
// using namespace std;
// class student{
//     int age;
//     string name;
//     char section;
//     public:
//     student(){
//         cout<<"Inside the 0 ctor\n";

//     }
//     void set(int a, string n, char c){
//         age=a;
//         name=n;
//         section=c;

//     }
//     void display(){
//         cout<<"My name is "<<name<<"\n i am "<<age<<"year old \n"<<"i study in "<<section<<"\n___\n";

//     }
// };

// int main(){
//     // student obj("prince verma",'E');
//     // obj.display();
// }

// #include<iostream>
// #include<assert.h>
// using namespace std;
// class employee{
//     int age;
//     string Ename;
//     float salary;
//     public:
//     employee(){
//         cout<<"inside default constructor"<<endl;

//     }
// };



// 12
// 12219034 - Aman kumar
// 8:52 PM
// #include <iostream>
// #include <string>
// using namespace std;
// class TelephoneNumber {
// public:
// TelephoneNumber(string number) {
// this->number = number;
// }
// bool validate() {
// if (number.length() != 10) {
// return false;
// }

// if (number[0] != '1') {
// return false;
// }
// for (int i = 1; i < number.length(); i++) {
// if (!isdigit(number[i])) {
// return false;
// }
// }

// return true;
// }
// string get_validated_phone_number() {
// return number;
// }
// private:
// string number;
// };
// int main() {
// string number;
// cout << "Enter a phone number: ";
// cin >> number;

// TelephoneNumber tn(number);
// if (tn.validate()) {
// cout << "The phone number is valid." << endl;
// } else {
// cout << "The phone number is invalid." << endl;
// }
// return 0;
// }
// #include<iostream>
// using namespace std;
// class Bank{
//     public:
//     int no_of_employee(){
//         cout<<231;
//     }
// }

// int main(){
//     Bank obj;
//     obj.no_of_employee();
    
//     // return  0;
// }


/*---------------OOPS----------------*/
/*encapsulation inheritence polymorphism abstraction*/
// #include<iostream>
// using namespace std;
// class animal{
//     public:
//    virtual void speak()=0; /*this function is called pure virtual  function*/
// };

// int main(){

    
//     return  0;
// }

// #include<iostream>
// using namespace std;
// class car{
//     public: /*Public protected*/
//     int seats;
//     string colour;
//     int tyres;

// };
// class Audi : public car{
//     public:
//     void display(){
//         cout<<seats<<" "<<colour<<" "<<tyres<<"\n";
//     }

// };

// int main(){
//     Audi obj;
//     obj.display();
    
//     return  0;
// }


/*public ----- iniside the class----outiside the class---- inside the child class| child class PUBLIC
protected------ inside the class------NA------------------  inside the child class | child class PRIVATE
privat------ inside the class ------NA----- ----NA----- | can nit acces the inside the class

*/

// #include<iostream>
// using namespace std;
// class car{
//     public:
//     int seats;
//     string colour;
//     int current_speed;
//     bool is_Engine_is_on;
//     int topspeed;
//     int gear;
// class BMW:
// public car{
// public:
// void display(){
//     cout
    
// }
// }

// };

// int main(){
    
//     return  0;
// }
#include <iostream>

// Node class for a singly linked list
class Node {
public:
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr) {}
};

// Linked list class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Insert a new node at the end of the list
    void append(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }

    // Display the linked list
    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList list;
    list.append(10);
    list.append(20);
    list.append(30);
    
    std::cout << "Linked List: ";
    list.display();
    
    return 0;
}
