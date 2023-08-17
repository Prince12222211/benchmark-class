#include <bits/stdc++.h>
using namespace std;

class Car
{
int seats;
public:

Car(int seats)
{
this->seats = seats;
cout << "Inside Base Class\n";
}

void display(){
cout << "Inside Display of PARENT CLASS\n";
}
};

class Audi : public Car
{
int nitro;
public:
Audi(int nitro, int seats) : Car(seats)
{
cout << "Inside Derived Class \n";
this->nitro = nitro;
}

void display(){
cout << "Inside Display of DERIVED CLASS\n";
}

};

class Skoda : public Car
{
int abs;
public:
Skoda(int abs, int seats) : Car(seats)
{
cout << "Inside Derived Class \n";
this->abs = abs;
}

void display(){
cout << "Inside Display of DERIVED CLASS\n";
}

};

class Hybrid : public Skoda, public Audi {

public:
Hybrid(int seats, int abs, int nitro) : Skoda(abs, seats) , Audi(nitro, seats) {
cout << "Inside Hybrid CTOR\n";
}
};

int main()
{
    

Hybrid *obj = new Hybrid(3,4,6);
// obj->seats
// cout<<(*obj)
// cout<<obj-seats;





}