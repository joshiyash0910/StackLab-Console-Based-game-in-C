#include <stdio.h>
#include <conio.h> // taken for getch() function
#include <stdlib.h> // taken for system("cls") function

#define n 10

struct LinkedStk{
    char data[n];
    int top;
    struct LinkedStk* next;
}; // a linked stack structure to be used in both games

int SetDifficulty() // set difficulty level of the game (both)
{
    system("cls");
    printf("Please select a difficulty level:\n");
    printf("1. Easy\n");
    printf("2. Medium\n");
    printf("3. Hard\n");
    while (1)
    {
        char c = getch();
        switch(c)
        {
            case '1':
                printf("You have selected Easy difficulty.\n");
                getch();
                return 1;
            case '2':
                printf("You have selected Medium difficulty.\n");
                getch();
                return 2;
            case '3':
                printf("You have selected Hard difficulty.\n");
                getch();
                return 3;
            default:
                printf("Invalid option. Please try again.\n");
                getch();

        }
    }
}

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
        switch(c) // placeholder
        {
            case '1':
                printf("You have selected Sort the Beads\n");
                break;
            case '2':
                printf("You have selected Tower of Hanoi\n");
                break;
            case '3':
                printf("You have selected Options\n");
                break;
            case '4':
                printf("Exiting the game...\n");
                return 0;
            default:
                printf("Invalid option. Please try again.\n");
               
        }
        getch();
    }
    
}