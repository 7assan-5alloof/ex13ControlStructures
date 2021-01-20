#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Press Ctrl-C to stop" << endl;

    string gender;
    cout << "Please answer the following questions to determine your needs of calcium:" << endl;
    cout << "Are you a female (y/n)? ";
    cin >> gender;

    if (gender == "y")
    {
        string pregnant;
        cout << "Are you pregnant (y/n)? ";
        cin >> pregnant;
        if (pregnant == "y")
        {
        cout << "You need 1000 mg of calcium daily." << endl;
        return 0;
        }
    }

    int age;
    cout << "Please enter your age: ";
    cin >> age;
    if ((age >= 9) && (age <= 18)) cout << "You need 1300 mg of calcium daily." << endl;
    else if ((age >= 19) && (age <= 50)) cout << "You need 1000 mg of calcium daily." << endl;
    else if ((age >= 51) && (age <= 70)) cout << "You need 1200 mg of calcium daily." << endl;
    else cout << "You're not applicable.";

    return 0;
}
