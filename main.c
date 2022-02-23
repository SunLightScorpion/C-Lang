#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char str [120];
    int x = 8%2;

    printf("%d\n", x);

    if(x == 0){
        printf("Roman ist cool\n");
    } else {
        printf("Robin ist cool\n");
     }

    printf("F an den Gefallenen Bruder\n");

    printf("Bitte geben sie was ein:");
    fgets(str, 120, stdin);
    printf("Eingabe: %s\n", str);

    int alter = 18;

    printf("Alter: %d!\n", alter);

    if(alter >= 18){
        printf("Du bist Erwachsen!\n");
    } else {
        printf("Du bist leider nicht Erwachsen!\n");
    }

    system("pause");
    return 0;
}
