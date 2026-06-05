#include <stdio.h>
#include <conio.h> // taken for getch() function
#include <stdlib.h> // taken for system("cls") function

#define n 10

struct LinkedStk{
    char data[n];
    int top;
    struct LinkedStk* next;
}; // a linked stack structure to be used in both games


// Function declarations
void getInstructions(int num);
int SetDifficulty();
void printCredits();
struct LinkedStk* createStack(int difficulty);
void printlist(struct LinkedStk* head, int numStacks);
struct LinkedStk* fillrand(struct LinkedStk* head, int difficulty);


struct LinkedStk* createStack(int difficulty) //input difficulty and make 5 7 10 stack for beads game and return head
{
    struct LinkedStk* head = NULL;
    struct LinkedStk* current = NULL;
    int numStacks;

    if(difficulty == 1) // easy - 5 stacks
    {
        numStacks = 5;
    }
    else if(difficulty == 2) // medium - 7 stacks
    {
        numStacks = 7;
    }
    else if(difficulty == 3) // hard - 10 stacks
    {
        numStacks = 10;
    }

    for(int i = 0; i < numStacks; i++)
    {
        struct LinkedStk* newStack = (struct LinkedStk*)malloc(sizeof(struct LinkedStk));
        newStack->top = -1;
        newStack->next = NULL;

        if(head == NULL)
        {
            head = newStack;
            current = newStack;
        }
        else
        {
            current->next = newStack;
            current = newStack;
        }
    }

    return head;
}

void printlist(struct LinkedStk* head, int numStacks)
{
    for(int i = n-1 ; i > -1; i--)
    {
        struct LinkedStk* current = head;
        while(current != NULL)
        {
            if(current->top >= i)
            {
                printf("| %c | ", current->data[i]);
            }
            else
            {
                printf("|   | ");
            }
            current = current->next;
        }
        printf("\n");
    }
    for(int i =0;i < numStacks; i++) printf("===");
    printf("\n");
    for(int i =0;i < numStacks; i++) printf("  %d  ", (i+1)%10);//as on keyboard 0 comes after 9 so we use (i+1)%10 to print 1-9 and then 0
    printf("\n");
}

struct LinkedStk* fillrand(struct LinkedStk* head, int difficulty)
{
    char arr[] = "AAAAAAAAAABBBBBBBBBBCCCCCCCCCCDDDDDDDDDDEEEEEEEEEEFFFFFFFFFFGGGGGGGGGGHHHHHHHHHHIIIIIIIIIIJJJJJJJJJJ";
    int numStacks;

    if(difficulty == 1) numStacks = 5;
    else if(difficulty == 2) numStacks = 7;
    else if(difficulty == 3) numStacks = 10;
    else numStacks = 10;

    //WE SCARMBLE USING FISHER YATES SHUFFLE ALGORITHM
     for(int i = numStacks * n - 1; i > 0; i--)
     {
        int j = rand() % (i + 1); //taken a random index from 0 to i
        
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp; //swap
     }
     
     //now we fill each stack with n beads from the scrambled array
     struct LinkedStk* current = head;
     int i = numStacks * n - 1;
     while(current != NULL)
     {
        for(int j = 0; j < n; j++)
        {
            current->data[j] = arr[--i]; //fill the stack with n beads from the scrambled array
        }
        current->top = n - 1; //set top to n-1 as we have filled n beads
        current = current->next;
     }
        return head;
}





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

void printCredits()
{
    system("cls");
    printf("=== CREDITS ===\n\n");
    printf("Created and Developed by:\n");
    printf("Yash Joshi\n\n");
    printf("About StackLab:\n");
    printf("StackLab is a console-based game featuring classic data structure puzzles.\n");
    printf("Test your problem-solving skills with Sort the Beads and Tower of Hanoi!\n\n");
    printf("Thank you for playing!\n\n");
    printf("Press any key to return...");
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
        printf("3. Credits\n");
        printf("4. Exit\n");
        char c = getch();
        system("cls");
        while(1)
        {
            system("cls");
            if(c == '1')
            {
                printf("==SORT THE BEADS==\n");
                printf("1. Instructions\n");
                printf("2. Start Game\n");
                printf("3. Back to Main Menu\n");
                char option = getch();
                if(option == '1')
                {
                    getInstructions(1);
                }
                else if(option == '2')
                {
                    int difficulty = SetDifficulty();
                
                }
                else if(option == '3')
                {
                    break; // go back to main menu
                }
            }
            else if(c == '2')
            {
                printf("==TOWER OF HANOI==\n");
                printf("1. Instructions\n");
                printf("2. Start Game\n");
                printf("3. Back to Main Menu\n");
                char option = getch();
                if(option == '1')
                {
                    getInstructions(2);
                }
                else if(option == '2')
                {
                    int difficulty = SetDifficulty();
                    
                }
                else if(option == '3')
                {
                    break; // go back to main menu
                }
            }
            else if(c == '3')
            {
                printCredits();
                break; // go back to main menu
            }
            else if(c == '4')
            {
                printf("Thank you for playing! Goodbye!\n");
                return 0; // exit the program
                
            }
        }
        
        getch();
    }
    
}