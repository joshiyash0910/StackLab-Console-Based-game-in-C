#include <stdio.h>
#include <conio.h> // taken for getch() function
#include <stdlib.h> // taken for system("cls") function


int main()
{
    system("cls");

    printf("\t\t\t\t\t       _____ _             _    \n");
    printf("\t\t\t\t\t      / ____| |           | |   \n");
    printf("\t\t\t\t\t     | (___ | |_ __ _  ___| | __\n");
    printf("\t\t\t\t\t      \\___ \\| __/ _` |/ __| |/ /\n");
    printf("\t\t\t\t\t      ____) | || (_| | (__|   < \n");
    printf("\t\t\t\t\t     |_____/ \\__\\__,_|\\___|_|\\_\\\n");

    printf("\t\t\t\t\t\t  _       ___    ____  \n");
    printf("\t\t\t\t\t\t | |     /   |  / __ ) \n");
    printf("\t\t\t\t\t\t | |    / /| | / __  | \n");
    printf("\t\t\t\t\t\t | |___/ ___ |/ /_/ /  \n");
    printf("\t\t\t\t\t\t |_____/_/  |_/_____/  \n");

    printf("\n\n\t\t\t\t\t    created and developed by-\n");
    printf("\t\t\t\t\t\t    Yash Joshi\n");

    printf("\n\n\t\t\t\t\t\tPress Enter to Begin\n");
    
    
    getch();
    while(1)
    {
        system("cls");

        printf("MAIN MENU\n");
        printf("1. Sort the Beads\n");
        printf("2. Tower of Hanoi\n");
        printf("3. Options\n");
        printf("4. Exit\n");
        char c = getch();
    }
    




    return 0;
}