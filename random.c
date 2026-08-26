#include "random.h"
#include <stdlib.h>

void rand_string(char *buff, int size)
{
    char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int num_letters = 52; 

    for (int i = 0; i < size; ++i)
    {
        char letter = letters[rand() % (num_letters + 1)];
        buff[i] = letter; 
    }
    buff[size] = '\0';
}