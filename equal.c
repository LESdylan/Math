#include <stdio.h>
#include <stdbool.h>

bool equal(char *value, char *val)
{
    int i = 0;
    
    // Compare each character
    while(value[i] != '\0' && val[i] != '\0')
    {
        if(value[i] != val[i])
            return false;
        i++; // Increment i to move to the next character
    }
    if(value[i] == '\0' && val[i] == '\0')
        return true;
    return false;
}

int main(void)
{
    char str1[] = "hello";
    char str2[] = "hello";
    char str3[] = "world";

    if(equal(str1, str2))
        printf("str1 and str2 are equal.\n");
    else
        printf("str1 and str2 are not equal.\n");

    if(equal(str1, str3))
        printf("str1 and str3 are equal.\n");
    else
        printf("str1 and str3 are not equal.\n");

    return 0;
}

