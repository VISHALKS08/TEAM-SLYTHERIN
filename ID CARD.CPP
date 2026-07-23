#include<iostream>
using namespace std;
class stuid
{
    string Name;
    string Department;
    int Expiry_year;
    public:
        void studetails()
        {
            cout<<"Name: ";
            cin>>Name;
            cout<<"Department: ";
            cin>>Department;
            cout<<"Expiry Date: ";
            cin>>Expiry_year;
        }
        void displaystudent()
        {
            cout<<"STUDENT ID CARD";
            cout<<"NAME: "<<Name<<endl;
            cout<<"DEPARTMENT: "<<Department<<endl;
            cout<<"EXPIRY YEAR: "<<Expiry_year<<endl;
        }
    void renewCard()
    {
        cout << "Enter New Expiry Year: ";
        cin >> Expiry_year;
        cout << "Card Renewed Successfully!" << endl;
    }
    void checkExpire()
    {
        int currentYear;
        cout << "Enter Current Year: ";
        cin >> currentYear;
        if (currentYear > Expiry_year)
            cout << "ID Card has Expired." << endl;
        else
            cout << "ID Card is Valid." << endl;
    }
};
int main()
{
    stuid ST;
    ST.studetails();
    ST.displaystudent();
    ST.renewCard();
    ST.checkExpire();
    return 0;
}
