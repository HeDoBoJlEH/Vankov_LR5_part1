#include "Vankov_MathTask.h"

int main()
{
    int length = 0, width = 0;

    EnterNum(length, "Enter length of rectangle: ");
    EnterNum(width, "Enter width of rectangle: ");

    int area = GetRectangleArea(length, width);

    cout << "Area of rectangle is " << area << endl;
}