#include <iostream>
using namespace std;

class Fan
{
    string brand;
    int speed;

public:
    void getData()
    {
        cout << "Enter Fan Brand: ";
        cin >> brand;
        speed = 0;
    }

    void setSpeed(int s)
    {
        if (s >= 0 && s <= 5)
            speed = s;
        else
            cout << "Invalid Speed! Enter 0 to 5.\n";
    }

    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
    }
};

int main()
{
    Fan f;
    int s;

    f.getData();

    cout << "Enter Speed (0 to 5): ";
    cin >> s;

    f.setSpeed(s);
    f.display();

    return 0;
}
