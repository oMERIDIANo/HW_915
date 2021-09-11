// W1_915.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

using namespace std;

#include <iostream>

void isDivisibleByNumber(int a, int b)
{
    for (int i = 0; i < 1000; i++)
    {
        if ((i % a) == 0 && (i % b) == 0)
        {
            cout << i << endl;
        }
        else
        {

        }
    }
}

void reverseString(string s)
{
    for (int i = s.length(); i >= 0; i--) {
        cout << s[i];
    }
}

void removeStringVowels(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            cout << s[i];
        }
    }
}

int main()
{
    isDivisibleByNumber(2, 6);

    reverseString("hello world");

    cout << "" << endl;

    removeStringVowels("the cake is a lie");

    return 0;
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
