#include<iostream>
#include<cstring>
using namespace std;
//blue print
class Car{
    public:
        char name[100];
        int price, model, seats;
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

    cout << "Name: " << A.name << endl;
    cout << "Price: " << A.price << endl;
    cout << "Model: " << A.model << endl;
    cout << "Seats: " << A.seats << endl;

    Car B;

    strcpy(B.name, "Audi");
    B.price = 200;
    B.model = 2022;
    B.seats = 6;

    cout << "Name: " << B.name << endl;
    cout << "Price: " << B.price << endl;
    cout << "Model: " << B.model << endl;
    cout << "Seats: " << B.seats << endl;


    return 0;
}