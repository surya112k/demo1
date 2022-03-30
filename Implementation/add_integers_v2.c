#include "stdio.h"
#include "unity.h"
int add_integers(int param1, int param2)
{
    int Sum = param1 + param2;   
    return Sum;
}

void manual_test_add_integers()
{
    if(0 == add_integers(0, 0))
        printf("Add function works\n");
    else 
        printf("Add function is not working\n");

    if(20 == add_integers(10, 20))
        printf("Add function works for positive numbers\n");
    else 
        printf("Add function is not working for positive numbers\n");

    if(-10 == add_integers(10, -20))
        printf("Add function works for positive numbers\n");
    else 
        printf("Add function is not working for positive numbers\n");

}

/*
void main()
{
    test_add_integers();
        TEST_ASSERT_EQUAL(0,add_integers(0,0));
        TEST_ASSERT_EQUAL(30,add_integers(10,20));
        TEST_ASSERT_EQUAL(21,add_integers(1,20));
}

*/