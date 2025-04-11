#ifndef _VANKOV_MATHTASK_H_
#define _VANKOV_MATHTASK_H_

#include <iostream>
#include <string>

using namespace std;

bool CanStoi(string& input)
{
    if (input.empty()) return false;

    try
    {
        int number = stoi(input);
    }
    catch (...) { return false; }

    return true;
}

void EnterNum(int& num, string message)
{
    string input;

    do
    {
        cout << message;
        getline(cin, input);
    } while (!CanStoi(input)); 
    
    num = stoi(input);
}

int GetRectangleArea(int length, int width)
{
    return length * width;
}

#endif