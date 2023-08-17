// #include<iostream>
// using namespace std;
// class A{
//     private:
//     int a;
//     protected:
//     int b;
//     public:
//     int c;
//     A(int a){
//         cout<<"ctor A\n";
//         // this-a=a;
//     }
// };
// class B: public A{

// };

// int main(){
//     B objB;
//     A objA;
//     cout<<objA.c;
//     // cout<<A objB;
    
//     return  0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int a=5;
//     int * ptr;
//     cout<<*ptr;
//     return  0;
// }

#include<iostream>
using namespace std;
class car{
    private:
    int price;
    protected:
    int seats;
    public:
    int tyres;
    car(int price){
        this->price=price;
        cout<<"ctor car\n";
    }
    void geaUp(){

    }
    void display(){
        cout<<
    }
};
class superCar: public Car{
    int nitro;
    public:
    superCar(int price, int top_gear,int nitro): car(price,top_gear){
        cout<<"ctor car\n";
    };
};

int main(){
    superCar obj(20,5,2);
    obj.dispaly;
    obj.gearup;
    
    return  0;
}