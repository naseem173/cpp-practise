#include<iostream>
#include<cstring>
using namespace std;
//blue print
class Car{
    public:
        char name[100];
        int price, model, seats;
    void print(){
            cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Model: " << model << endl;
        cout << "Seats: " << seats << endl;
        cout << endl;
    }

    Car(char *n,int p,int s){
        cout << "I am Parameterised constructor!" << endl;
        strcpy(name, n);
        
    }
};

//BLUE Print

int
main()
{
   

    Car A; //A is obj of class car
    strcpy(A.name, "TESLA");
    A.price = 100;
    A.model = 2020;
    A.seats = 4;

       

    Car B;

    strcpy(B.name, "Audi");
    B.price = 200;
    B.model = 2022;
    B.seats = 6;

    A.print();
    B.print();

    return 0;
}