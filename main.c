#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MARIME 3 // SIZE of the board

int main()
{
    int i, linia=0,a=0, b=0,  pozitie, ocupied=0, menu_choise, ascii_number, random_number, you_won=0;
    char board[MARIME][MARIME], exit_validation;

    // THE MENU ---------------------------------------------------------------------------------------------
    while (1)
    {
    while (1) // Runs until the user got bored and selected a valid otption...
    {
    printf("TIC TAC TOE\n\n1. START\n2. HELP\n3. EXIT\n=======================================\n");
    printf("Select an option:\n> ");
    scanf("%d", &menu_choise);
    if (menu_choise<1 || menu_choise>3)
    {
     printf("The selected option is invalid. Press any key to try again.\n");
     getch();
     system("cls");
    }
    else break;
    }
    // MENU END ---------------------------------------------------------------------------------------------

    switch (menu_choise)
    {
    case 1: // Option 1
    system("cls");

        for (i=0, a=0, b=0; i<MARIME*MARIME ; i++) // Fills the board matrix with blank charachters
    {
                board[a][b] = ' ';
                b++;
                if (b>=MARIME) {b=0; a++;}
    }

    printf("The computer will place an O after you!\n\n");

    while (1)
    {
    for (i=0, a=0, b=0;  ; i++) { // Draws the board... -----------------------------------------------------

        if (i!=MARIME+4) {printf("-"); continue; }
        if (linia==MARIME) break;

        else  {  printf("\n");

     for (i=0; linia!=MARIME ; ) {

        if (i%2==0) {printf("|"); }
        else {
                printf("%c", board[a][b]);
                b++;
                if (b>=MARIME) {b=0; a++;}
        }

        i++;

        if (i==MARIME+4) {
            printf("\n");
            linia++;
            i = -1;
            break;
                }
            }
        }
    } // Board drawn -----------------------------------------------------------------------------------------
    linia=0;

// Checking to see if > YOU < WON the game -----------------------------------------------------------------------------------------

    // orizontal lines
    if (board[0][0]=='X' && board[0][1]=='X' && board[0][2]=='X') {printf("\n\nYOU WON!!!\nPress any key to return to the main menu\n"); getch(); system("cls"); break; you_won=1; }
    if (board[1][0]=='X' && board[1][1]=='X' && board[1][2]=='X') {printf("\n\nYOU WON!!!\nPress any key to return to the main menu\n"); getch(); system("cls"); break; you_won=1; }
    if (board[2][0]=='X' && board[2][1]=='X' && board[2][2]=='X') {printf("\n\nYOU WON!!!\nPress any key to return to the main menu\n"); getch(); system("cls"); break; you_won=1; }
    // vertical lines
    if (board[0][0]=='X' && board[1][0]=='X' && board[2][0]=='X') {printf("\n\nYOU WON!!!\nPress any key to return to the main menu\n"); getch(); system("cls"); break; you_won=1; }
    if (board[0][1]=='X' && board[1][1]=='X' && board[2][1]=='X') {printf("\n\nYOU WON!!!\nPress any key to return to the main menu\n"); getch(); system("cls"); break; you_won=1; }
    if (board[0][2]=='X' && board[1][2]=='X' && board[2][2]=='X') {printf("\n\nYOU WON!!!\nPress any key to return to the main menu\n"); getch(); system("cls"); break; you_won=1; }
    // orizontal lines
    if (board[0][0]=='X' && board[1][1]=='X' && board[2][2]=='X') {printf("\n\nYOU WON!!!\nPress any key to return to the main menu\n"); getch(); system("cls"); break; you_won=1; }
    if (board[0][2]=='X' && board[1][1]=='X' && board[2][0]=='X') {printf("\n\nYOU WON!!!\nPress any key to return to the main menu\n"); getch(); system("cls"); break; you_won=1; }

    // Checking to see if > *le COMPUTER < WON the game

    // orizontal lines
    if (board[0][0]=='O' && board[0][1]=='O' && board[0][2]=='O') {printf("\n\nYOU LOST! LMAOOOOO\nPress any key to return to the main menu\n"); getch(); system("cls"); break; }
    if (board[1][0]=='O' && board[1][1]=='O' && board[1][2]=='O') {printf("\n\nYOU LOST! LMAOOOOO\nPress any key to return to the main menu\n"); getch(); system("cls"); break; }
    if (board[2][0]=='O' && board[2][1]=='O' && board[2][2]=='O') {printf("\n\nYOU LOST! LMAOOOOO\nPress any key to return to the main menu\n"); getch(); system("cls"); break; }
    // vertical lines
    if (board[0][0]=='O' && board[1][0]=='O' && board[2][0]=='O') {printf("\n\nYOU LOST! LMAOOOOO\nPress any key to return to the main menu\n"); getch(); system("cls"); break; }
    if (board[0][1]=='O' && board[1][1]=='O' && board[2][1]=='O') {printf("\n\nYOU LOST! LMAOOOOO\nPress any key to return to the main menu\n"); getch(); system("cls"); break; }
    if (board[0][2]=='O' && board[1][2]=='O' && board[2][2]=='O') {printf("\n\nYOU LOST! LMAOOOOO\nPress any key to return to the main menu\n"); getch(); system("cls"); break; }
    // orizontal lines
    if (board[0][0]=='O' && board[1][1]=='O' && board[2][2]=='O') {printf("\n\nYOU LOST! LMAOOOOO\nPress any key to return to the main menu\n"); getch(); system("cls"); break; }
    if (board[0][2]=='O' && board[1][1]=='O' && board[2][0]=='O') {printf("\n\nYOU LOST! LMAOOOOO\nPress any key to return to the main menu\n"); getch(); system("cls"); break; }

    else if (board[0][0]!=' ' && board[0][1]!=' ' && board[0][2]!=' ' && board[1][0]!=' ' && board[1][1]!=' ' && board[1][2]!=' ' && board[2][0]!=' ' && board[2][1]!=' ' && board[2][2]!=' ')
    { printf("\n\nIT'S A DRAW!!! WOW\nPress any key to return to the main menu\n"); getch(); system("cls"); break; }
        // Placing your X... -------------------------------------------------------------------------------------

    printf("\n\nOn what positon do you want to place X?\n> ");

    while (1) // Runs until a valid position is given
    {
    if (you_won==1) break; // So it doesnt continue after you won

    scanf("%d", &pozitie);
    if (pozitie<1 || pozitie>9) printf("\nTRY AGAIN! The position must be a number from 1 to 9.\n> ");
    else break;
    }

switch (pozitie)
    {
        case 1 : if (board[0][0] == ' ') {
                     board[0][0] = 'X';  }
                    else {printf("This position is alredy occupied, press any key to continue!\n"); getch(); }
                    break;
        case 2 : if (board[0][1] == ' ') {
                     board[0][1] = 'X';  }
                    else {printf("This position is alredy occupied, press any key to continue!\n"); getch(); }
                    break;
        case 3 : if (board[0][2] == ' ') {
                     board[0][2] = 'X';  }
                    else {printf("This position is alredy occupied, press any key to continue!\n"); getch(); }
                    break;
        case 4 : if (board[1][0] == ' ') {
                     board[1][0] = 'X';  }
                    else {printf("This position is alredy occupied, press any key to continue!\n"); getch(); }
                    break;
        case 5 : if (board[1][1] == ' ') {
                     board[1][1] = 'X';  }
                    else {printf("This position is alredy occupied, press any key to continue!\n"); getch(); }
                    break;
        case 6 : if (board[1][2] == ' ') {
                     board[1][2] = 'X';  }
                    else {printf("This position is alredy occupied, press any key to continue!\n"); getch(); }
                    break;
        case 7 : if (board[2][0] == ' ') {
                     board[2][0] = 'X';  }
                    else {printf("This position is alredy occupied, press any key to continue!\n"); getch(); }
                    break;
        case 8 : if (board[2][1] == ' ') {
                     board[2][1] = 'X';  }
                    else {printf("This position is alredy occupied, press any key to continue!\n"); getch(); }
                    break;
        case 9 : if (board[2][2] == ' ') {
                     board[2][2] = 'X';  }
                    else {printf("This position is alredy occupied, press any key to continue!\n"); getch(); }
                    break;
    }

    // COMPUTER PLACES his O --------------------------------------------------------------------------------------------------------
      while (1)
      { // Runs until the computer has chosen a spot that is not alredy occupied


      if (board[1][1]==' ') random_number = 5;
      // Mis-mas orizontal
      else if (board[0][0]=='X' && board[0][1]=='X' && board[0][2]==' ') random_number = 3;
      else if (board[1][0]=='X' && board[1][1]=='X' && board[1][2]==' ') random_number = 6;
      else if (board[2][0]=='X' && board[2][1]=='X' && board[2][2]==' ') random_number = 9;
      else if (board[0][1]=='X' && board[0][2]=='X' && board[0][0]==' ') random_number = 1;
      else if (board[1][1]=='X' && board[1][2]=='X' && board[1][0]==' ') random_number = 4;
      else if (board[2][1]=='X' && board[2][2]=='X' && board[2][0]==' ') random_number = 7;
      // Mis-mass veritical
      else if (board[0][0]=='X' && board[1][0]=='X' && board[2][0]==' ') random_number = 7;
      else if (board[1][0]=='X' && board[2][0]=='X' && board[0][0]==' ') random_number = 1;
      else if (board[0][1]=='X' && board[1][1]=='X' && board[2][1]==' ') random_number = 8;
      else if (board[0][2]=='X' && board[1][2]=='X' && board[2][2]==' ') random_number = 9;
      else if (board[1][1]=='X' && board[2][1]=='X' && board[0][1]==' ') random_number = 2;
      else if (board[1][2]=='X' && board[2][2]=='X' && board[0][2]==' ') random_number = 3;
      // Mis-mas odiagonal
      else if (board[0][0]=='X' && board[1][1]=='X' && board[2][2]==' ') random_number = 9;
      else if (board[1][1]=='X' && board[2][2]=='X' && board[0][0]==' ') random_number = 1;
      else if (board[0][2]=='X' && board[1][1]=='X' && board[2][0]==' ') random_number = 7;
      else if (board[2][0]=='X' && board[1][1]=='X' && board[0][2]==' ') random_number = 3;
      // Mis-mas empty middle
      else if (board[0][0]=='X' && board[2][0]=='X' && board[1][0]==' ') random_number = 4;
      else if (board[0][2]=='X' && board[2][2]=='X' && board[1][2]==' ') random_number = 6;
      else if (board[0][0]=='X' && board[0][2]=='X' && board[0][1]==' ') random_number = 2;
      else if (board[2][0]=='X' && board[2][2]=='X' && board[2][1]==' ') random_number = 8;
      else if (board[0][0]!=' ' && board[0][1]!=' ' && board[0][2]!=' ' && board[1][0]!=' ' && board[1][1]!=' ' && board[1][2]!=' ' && board[2][0]!=' ' && board[2][1]!=' ' && board[2][2]!=' ') random_number = 10;
      else { // If there is no TACTICAL position it places it on a random place
      srand(time(0));
      random_number = rand() % 9; // random number from 1 to 10
      random_number++;
      }

        switch (random_number)
    {
        case 1 : if (board[0][0] == ' ') {
                     board[0][0] = 'O';  }
                    else {ocupied=1;}
                    break;
        case 2 : if (board[0][1] == ' ') {
                     board[0][1] = 'O';  }
                    else {ocupied=1;}
                    break;
        case 3 : if (board[0][2] == ' ') {
                     board[0][2] = 'O';  }
                    else {ocupied=1;}
                    break;
        case 4 : if (board[1][0] == ' ') {
                     board[1][0] = 'O';  }
                    else {ocupied=1;}
                    break;
        case 5 : if (board[1][1] == ' ') {
                     board[1][1] = 'O';  }
                    else {ocupied=1;}
                    break;
        case 6 : if (board[1][2] == ' ') {
                     board[1][2] = 'O';  }
                    else {ocupied=1;}
                    break;
        case 7 : if (board[2][0] == ' ') {
                     board[2][0] = 'O';  }
                    else {ocupied=1;}
                    break;
        case 8 : if (board[2][1] == ' ') {
                     board[2][1] = 'O';  }
                    else {ocupied=1;}
                    break;
        case 9 : if (board[2][2] == ' ') {
                     board[2][2] = 'O';  }
                    else {ocupied=1;}
                    break;
                case 10 :
                    break;
      }
      if (ocupied==0) { break; }
      else { ocupied=0; }

      }
      system("cls");
      if (random_number<10) printf("Computer has placed his O on position %d!\n\n", random_number);
      else printf("The computer didnt have any spot to place its number...\n\n");
    }
    break;  // GAME CODE END

    case 2: system("cls"); // HELP page --------------------------------------------------------------------------------------

    printf("Now showing the HELP:\n\n");
        for (ascii_number=49, i=0, a=0, b=0; i<MARIME*MARIME ; i++, ascii_number++) // Fills the board matrix with numbers from 1 to 9
    {
                board[a][b] = ascii_number;
                b++;
                if (b>=MARIME) {b=0; a++;}
    }

        for (i=0, a=0, b=0;  ; i++) { // Draws the board... -----------------------------------------------------

        if (i!=MARIME+4) {printf("-"); continue; }
        if (linia==MARIME) break;

        else  {  printf("\n");

     for (i=0; linia!=MARIME ; ) {

        if (i%2==0) {printf("|"); }
        else {
                printf("%c", board[a][b]);
                b++;
                if (b>=MARIME) {b=0; a++;}
        }

        i++;

        if (i==MARIME+4) {
            printf("\n");
            linia++;
            i = -1;
            break;
                }
            }
        }
    }
    printf("\n\nThe thing from above is the board for the game;\nWhile playing you will be asked where you want to place"
           " your X\nThe numbers from the board (from 1 to 9) are the exact places on the board where your X can be placed\n"
           "Just input a number from 1 to 9 and then press ENTER and an X will appear on position where the number is now.\n\n"
           "If the position is already occupied by an X or O the game will ask you for another position\n"
           "If you place 3 X in  row you won the game, if the computer placed 3 O in a row you will lose.\n\nHAVE FUN!!!\n"
           "Press any key to return to the MAIN MENU\n");
    getch();
        for (i=0, a=0, b=0; i<MARIME*MARIME ; i++) // Fills the board matrix with blank charachters again
    {
                board[a][b] = ' ';
                b++;
                if (b>=MARIME) {b=0; a++;}
    }
    linia=0;
    system("cls");
    break;

    case 3: // Exit the game --------------------------------------------------------------------------------------------------
    system("cls");
    while (1)
    {
    printf("\nAre you sure that you want to exit? Y/N\n> ");
    scanf("%c", &exit_validation);
    exit_validation = toupper(exit_validation); // Makes the letter upper case

    if (exit_validation!='Y' || exit_validation!='N') {system("cls");}
    if (exit_validation=='Y') {printf("\nThanks for playing!!!\n");  return 0;}
    if (exit_validation=='N') {system("cls"); break;}
    }

    }

    } // MENU END
    return 0;
}
