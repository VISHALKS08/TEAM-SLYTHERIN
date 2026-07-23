#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
string Name;
int Rollno;
int Energy;

public:
void getData()
{
cout<<"Enter Name ";
cin>>Name;

cout<<"Enter Roll Number ";
cin>>Rollno;

cout<<"Enter Energy Level(1-100) ";
cin>>Energy;

}

void AttendClass(){
Energy=Energy-20;
if(Energy<0)
Energy=0;
}

void DrinkCoffee(){
Energy=Energy+25;
if(Energy>100)
Energy=100;
}

void Sleep(){
Energy=100;
}

bool survived()
{
    return Energy > 0;
}

void displayStatus(){
cout<<"\nName: "<<Name<<endl;
cout<<"Roll Number: "<<Rollno<<endl;
cout<<"Energy: "<<Energy<<endl;
}

};

int main()
{
    Student s;

    s.getData();

cout<<"\nInitial Status: ";
s.displayStatus();

s.AttendClass();
s.AttendClass();
s.AttendClass();

cout<<"\nAfter Attending Three Classes: ";
s.displayStatus();

if(s.survived())

cout<<"\nChallege Completed!"<<endl;

else
    cout<<"Student fell asleep!"<<endl;


return 0;

}


