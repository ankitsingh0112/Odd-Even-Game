#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

int result(char e_o)
{
    int user_decision;
    int pc_decision;
    printf("\t\t\tChoose a number b/w 1 to 5 : ");
    scanf("%d", &user_decision);
    // generating a random number b/w 1 to 5 for computer
    srand(time(0));
    pc_decision = rand() % 5 + 1;
    printf("\n\n\t\t\tComputer Choose : %d\n", pc_decision);
    // logic of the game
    if (e_o == 'e' || e_o == 'E')
    {
        if ((user_decision + pc_decision) % 2 == 0)
            return 1;
        else
            return 0;
    }
    else if (e_o == 'o' || e_o == 'O')
    {
        if ((user_decision + pc_decision) % 2 != 0)
            return 1;
        else
            return 0;
    }
}

void odd_even_game()
{
    char e_o;
    int game_result;
    int user_decision;
    printf("\n\n\t\t\t-----------------------------------------------\n");
    printf("\t\t\t\t<<<<<Let the FUN begin>>>>>\n");
    printf("\t\t\t-----------------------------------------------\n\n");
    printf("\t\t\tWhat do you want to choose even or odd : \n\t\t\t 1. EVEN(E/e)\t2. ODD(O/o)");
    printf("\n\n\t\t\tInput your choice : ");
    fflush(stdin);
    scanf("%c", &e_o);
    if(e_o != 'e' && e_o != 'o' && e_o != 'E' && e_o != 'O')
    {
        printf("\n\n\t\t\t---------------------------------------------------\n");
        printf("\t\t\t\tYour choice is so bad \n\t\t\tThis game is not made for you :/ Get out of here!!!\n");
        printf("\t\t\t---------------------------------------------------\n");
    }
    else
    {
        game_result = result(e_o);
        // Design of the end part
        printf("\n\n\t\t\t---------------------------------------------------\n");
        if (game_result == 1)
            printf("\t\t\t\tConguratulation :) You won the game!!!\n");
        else if (game_result == 0)
            printf("\t\t\t\tComputer won the game!!!\n\t\t\t\t\tYOU lOSE :(\n");
        printf("\t\t\t---------------------------------------------------\n\n");
    }
}

int main()
{
    // Front-look of the game
    int choice;
    printf("\n\n\t\t\t-----------------------------------------------\n");
    printf("\t\t\t\tWelecome to the ODD EVEN GAME\n");
    printf("\t\t\t-----------------------------------------------\n\n");
    printf("\t\t\t1. START\n");
    printf("\t\t\t2. RULE OF THE GAME\n");
    printf("\t\t\t3. CREDITS\n");
    printf("\t\t\t4. EXIT\n");
    printf("\n\t\t\tInput your choice :- ");
    scanf("%d", &choice);
    if (choice == 1)
        odd_even_game();
    getch();
    return 0;
}