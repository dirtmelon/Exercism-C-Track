#include "isogram.h"
#include <ctype.h>
#include <stddef.h>
#include <stdint.h>

bool is_isogram(const char phrase[]) 
{
    uint32_t bit_letters = 0;
    
    for (int i = 0; phrase[i] != '\0'; i++)
    {
        if (!isalpha(phrase[i]))
        {
            continue;
        }
        uint8_t bit_numbter = toupper(phrase[i]) - 'A';
        uint32_t bit_mask = 1 << bit_numbter;
        if ((bit_letters & bit_mask) != 0)
        {
            return false;
        }
        bit_letters |= bit_mask;
        
    }
    return true;
}
