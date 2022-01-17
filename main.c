#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world\n");

    int *alter = 18;

    printf("Alter: %d!\n", alter);

    if(alter >= 18){
        printf("Du bist Erwachsen!\n");
    } else {
        printf("Du bist leider Minderjährig!\n");
    }

    system("pause");
    return 0;
}
