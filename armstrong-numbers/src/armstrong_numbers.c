#include "armstrong_numbers.h"

bool is_armstrong_number(int candidate)
{
    if (candidate == 0)
    {
        return true;
    }
    int temp = candidate;
    int a = 0;
    while (temp != 0)
    {
        a += 1;
        temp = temp / 10;
    }
    temp = candidate;
    int num = 0;
    for (int i = 0; i < a; i++)
    {
        num += temp % 10;
        temp /= 10;
    }
    return num == candidate;
    
    
}
