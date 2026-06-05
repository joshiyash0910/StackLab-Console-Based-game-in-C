#include <stdio.h>
#include <conio.h> // taken for getch() function
#include <stdlib.h> // taken for system("cls") function

#define n 10

struct LinkedStk{
    char data[n];
    int top;
    struct LinkedStk* next;
}; // a linked stack structure to be used in both games


void getInstructions(int num);
int SetDifficulty();


void getInstructions(int num) //1 = Sort the Beads, 2 = Tower of Hanoi
{
    system("cls");

    if(num == 1)
    {
        printf("=== SORT THE BEADS ===\n\n");
        printf("Objective:\n");
        printf("Sort all beads so that each stack contains beads of only one Alphabet.\n\n");

        printf("Rules:\n");
        printf("1. You may hold only one bead at a time.\n");
        printf("2. Select a stack by pressing its corresponding number key.\n");
        printf("3. A bead can only be placed into a stack that has free space.\n");
        printf("4. Continue moving beads until all colors are grouped together.\n\n");

        printf("Tips:\n");
        printf("- Plan your moves carefully.\n");
        printf("- Use empty spaces as temporary storage.\n");
        printf("- Fewer moves and less time means a better score.\n");
    }
    else if(num == 2)
    {
        printf("=== TOWER OF HANOI ===\n\n");
        printf("Objective:\n");
        printf("Move all disks from the leftmost peg to the rightmost peg.\n\n");

        printf("Rules:\n");
        printf("1. Only one disk may be moved at a time.\n");
        printf("2. Only the top disk of a peg can be moved.\n");
        printf("3. A larger disk can never be placed on top of a smaller disk.\n");
        printf("4. Disks may be moved between any of the three pegs.\n");
        printf("5. The puzzle is solved when all disks reach the rightmost peg.\n\n");

        printf("Tips:\n");
        printf("- Think recursively.\n");
        printf("- Use the middle peg as temporary storage.\n");
        printf("- Try to solve the puzzle in the minimum number of moves.\n");
    }

    printf("\nPress any key to return...");
    getch();
}

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
                printf("===Sort the Beads===\n");
                printf("1. Instructions\n");
                printf("2. Start Game\n");
                while(1)
                {
                    char c2 = getch();
                    switch(c2)
                    {
                        case '1':
                            getInstructions(1);
                            break;
                        case '2':
                            printf("Starting Sort the Beads game...\n");
                            getch();
                            // call the function to start the game here
                            break;
                        default:
                            printf("Invalid option. Please try again.\n");
                            getch();
                    }
                }
                break;
            case '2':
                printf("===Tower of Hanoi===\n");
                printf("1. Instructions\n");
                printf("2. Start Game\n");
                while(1)
                {
                    char c2 = getch();
                    switch(c2)
                    {
                        case '1':
                            getInstructions(2);
                            break;
                        case '2':
                            printf("Starting Tower of Hanoi game...\n");
                            getch();
                            // call the function to start the game here
                            break;
                        default:
                            printf("Invalid option. Please try again.\n");
                            getch();
                    }
                }
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