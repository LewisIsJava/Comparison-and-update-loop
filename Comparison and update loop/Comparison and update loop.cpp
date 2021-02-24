// Comparison and update loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    float ageInput, maxAge = 0;
    cout << "This program will allow you to input as many student ages as you need and will find the oldest among them";
    cout << "Please input a students age: ";
    cin >> ageInput;
    while (ageInput != -1)
    {
        cout << "The age you just entered is " << ageInput << " while the max age inputed so far is " << maxAge << endl;
        cout << endl;
        if (ageInput > maxAge)
        {
            maxAge = ageInput;
           
        }
        cout << "If you would like to enter a users age just input their age, if not just type '-1': ";
        cin >> ageInput;
    }
    cout << "The oldest student has an age of " << maxAge << " years";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
