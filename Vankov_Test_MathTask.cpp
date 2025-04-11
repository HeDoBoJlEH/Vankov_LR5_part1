#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"
#include "Vankov_MathTask.h"

using namespace cute;

void testGetRectangleArea()
{
    int length = 13;
    int width = 14;
    int expected = 182;

    int actual = GetRectangleArea(length, width);

    ASSERT_EQUAL(expected, actual);
}

void testCanStoi_Empty()
{
    string str = "";
    bool expected = false;

    bool actual = CanStoi(str);

    ASSERT_EQUAL(expected, actual);
}

void testCanStoi_Letter()
{
    string str = "a";
    bool expected = false;

    bool actual = CanStoi(str);

    ASSERT_EQUAL(expected, actual);
}

void testCanStoi_MixedValue()
{
    string str = "5a";
    bool expected = false;

    bool actual = CanStoi(str);

    ASSERT_EQUAL(expected, actual);
}

void testCanStoi_NegativeValue()
{
    string str = "-5";
    bool expected = false;

    bool actual = CanStoi(str);

    ASSERT_EQUAL(expected, actual);
}

int main()
{
    suite s;
    
    s.push_back(CUTE(testGetRectangleArea));
    s.push_back(CUTE(testCanStoi_Empty));
    s.push_back(CUTE(testCanStoi_Letter));
    s.push_back(CUTE(testCanStoi_MixedValue));
    s.push_back(CUTE(testCanStoi_NegativeValue));

    ide_listener<> listener;
    makeRunner(listener)(s, "Test GetRectangleArea");

    return 0;
}