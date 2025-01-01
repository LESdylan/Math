#include <stdio.h>
#include <stdbool.h>

bool unequal(char *value, char *val)
{
    int i = 0;
    
    // Compare each character
    while(value[i] != '\0' && val[i] != '\0')
    {
        if(value[i] != val[i])
            return true;
        i++; // Increment i to move to the next character
    }

    // If both strings end (null-terminated) at the same time, they are equal
    if(value[i] == '\0' && val[i] == '\0')
        return false;
    
    // If one string ends before the other, they are not equal
    return true;
}

int main(void)
{
    char str1[] = "hello";
    char str2[] = "hello";
    char str3[] = "world";

    if(unequal(str1, str2))
        printf("str1 and str2 are equal.\n");
    else
        printf("str1 and str2 are not equal.\n");

    if(unequal(str1, str3))
        printf("str1 and str3 are equal.\n");
    else
        printf("str1 and str3 are not equal.\n");

    return 0;
}

