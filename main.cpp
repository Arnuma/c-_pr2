#include <stdio.h>


// https://github.com/Arnuma/c-_pr2


main()
{
    int a = 12;
    int b = 44;
    if(a>b)
    {
        printf("Больше");
    }
    else 
    {
        if(a<b)
        {
            printf("Меньше");
        }
        else
        {
            printf("Равно");
        }
    }
}