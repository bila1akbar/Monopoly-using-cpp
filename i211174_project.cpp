#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <fstream>
using namespace std;

enum // class of colors
{
    black,
    blue,
    green,
    cyan,
    red,
    magenta,
    yellow,
    white,
    gray,
    lightblue,
    lightgreen,
    lightcyan,
    lightred,
    lightmagenta,
    lightyellow,
    lightwhite
};

void gotoxy(int x, int y) // presenting the coorodinates for the moving materials
{
    COORD coord; // coordinates of screen
    coord.X = x;
    coord.Y = y;                                                      // set value of x and y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // take cursor to that position
}
void setColor(int textColor, int bgColor) // colors handling
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (textColor + (bgColor * 16)));
}
int dice() // function for dice
{
    int x = (rand() % 6) + 1;
    return x;
}
void board() // Hard coding the monopoly board
{
    setColor(blue, black);

    cout << "\t********************************************************************\n";
    cout << "\t*                                                                  *\n";
    setColor(blue, black);
    cout << "\t*";
    setColor(red, black);
    cout << " Go  to ";
    setColor(green, black);
    cout << " Toronto   New-York ";
    setColor(lightwhite, black);
    cout << "  Rest ";
    setColor(cyan, black);
    cout << "   Mexico-City  Lahore ";
    setColor(lightred, black);
    cout << "  Start";
    setColor(blue, black);
    cout << " *\n";
    setColor(blue, black);
    cout << "\t*";
    setColor(red, black);
    cout << "  Jail  ";
    setColor(green, black);
    cout << " Rs-1500   Rs-1000 ";
    setColor(lightwhite, black);
    cout << "   *** ";
    setColor(cyan, black);
    cout << "     Rs-2000    Rs-2500    ";
    setColor(lightred, black);
    cout << "/-> ";
    setColor(blue, black);
    cout << " *\n";
    setColor(blue, black);
    cout << "\t*                                                                  *\n";
    cout << "\t********************************************************************\n";
    cout << "\t************                                             ***********\n";
    setColor(blue, black);
    cout << "\t*";
    setColor(magenta, black);
    cout << "  London  ";
    setColor(blue, black);
    cout << "*                                             *";
    setColor(yellow, black);
    cout << "  Tokyo  ";
    setColor(blue, black);
    cout << "*\n";
    setColor(blue, black);
    cout << "\t*";
    setColor(magenta, black);
    cout << "  Rs-1200 ";
    setColor(blue, black);
    cout << "*                                             *";
    setColor(yellow, black);
    cout << "  Rs-350 ";
    setColor(blue, black);
    cout << "*\n";
    cout << "\t*          *                                             *         *\n";
    cout << "\t************                                             ***********\n";
    setColor(blue, black);
    cout << "\t*";
    setColor(magenta, black);
    cout << "  Berlin  ";
    setColor(blue, black);
    cout << "*                                             *";
    setColor(yellow, black);
    cout << "  Seoul ";
    setColor(blue, black);
    cout << " *\n";
    setColor(blue, black);
    cout << "\t*";
    setColor(magenta, black);
    cout << "  Rs-1700 ";
    setColor(blue, black);
    cout << "*                                             *";
    setColor(yellow, black);
    cout << "  Rs-500 ";
    setColor(blue, black);
    cout << "*\n";
    cout << "\t*          *                                             *         *\n";
    cout << "\t************                                             ***********\n";
    setColor(blue, black);
    cout << "\t*";
    setColor(gray, black);
    cout << " Airport-2";
    setColor(blue, black);
    cout << "*                                             *";
    setColor(white, black);
    cout << "   Fine ";
    setColor(blue, black);
    cout << " *\n";
    setColor(blue, black);
    cout << "\t*";
    setColor(gray, black);
    cout << "  Rs-1000 ";
    setColor(blue, black);
    cout << "*                                             *";
    setColor(white, black);
    cout << "  Rs-500 ";
    setColor(blue, black);
    cout << "*\n";
    cout << "\t*          *                                             *         *\n";
    cout << "\t************                                             ***********\n";
    setColor(blue, black);
    cout << "\t*";
    setColor(lightcyan, black);
    cout << "  Paris   ";
    setColor(blue, black);
    cout << "*                                             *";
    setColor(lightgreen, black);
    cout << "  Tapei ";
    setColor(blue, black);
    cout << " *\n";
    setColor(blue, black);
    cout << "\t*";
    setColor(lightcyan, black);
    cout << "  Rs-1100 ";
    setColor(blue, black);
    cout << "*                                             *";
    setColor(lightgreen, black);
    cout << " Rs-1000 ";
    setColor(blue, black);
    cout << "*\n";
    cout << "\t*          *                                             *         *\n";
    cout << "\t************                                             ***********\n";
    setColor(blue, black);
    cout << "\t*";
    setColor(lightcyan, black);
    cout << "  Rome    ";
    setColor(blue, black);
    cout << "*                                             *";
    setColor(lightgreen, black);
    cout << "  Sydney";
    setColor(blue, black);
    cout << " *\n";
    setColor(blue, black);
    cout << "\t*";
    setColor(lightcyan, black);
    cout << "  Rs-700  ";
    setColor(blue, black);
    cout << "*                                             *";
    setColor(lightgreen, black);
    cout << " RS-1000 ";
    setColor(blue, black);
    cout << "*\n";

    cout << "\t*          *                                             *         *\n";
    cout << "\t************                                             ***********\n";
    cout << "\t********************************************************************\n";
    cout << "\t*                                                                  *\n";
    setColor(blue, black);
    cout << "\t*";
    setColor(lightred, black);
    cout << "  Free  ";
    setColor(lightyellow, black);
    cout << "  Athens  Islamabad";
    setColor(gray, black);
    cout << "  Airport ";
    setColor(lightblue, black);
    cout << "   Dubai      Karachi ";
    setColor(red, black);
    cout << "  Jail";
    setColor(blue, black);
    cout << " *\n";
    setColor(blue, black);
    cout << "\t*";
    setColor(lightred, black);
    cout << " Parking ";
    setColor(lightyellow, black);
    cout << " Rs-700   Rs-1500  ";
    setColor(gray, black);
    cout << " Rs-1000   ";
    setColor(lightblue, black);
    cout << " Rs-1000    Rs-700    ";
    setColor(red, black);
    cout << "xxxx ";
    setColor(blue, black);
    cout << "*\n";
    cout << "\t*                                                                  *\n";
    cout << "\t********************************************************************\n";
}
int positioncheck(int player1position, int player2position)
{
    setColor(magenta, black);
    if (player1position == 0)
        gotoxy(69, (4 * player1position) + 4);
    else if (player1position <= 5)
        gotoxy(69, (4 * player1position) + 5);
    else if (player1position == 6)
        gotoxy(69, (4 * player1position) + 4);
    else if (player1position > 6 && player1position < 12)
        gotoxy((72 - (player1position - 6) * 10), 28);
    else if (player1position == 12)
        gotoxy(12, 28);
    else if (player1position == 13)
        gotoxy(12, 28 - 3);
    else if (player1position == 14)
        gotoxy(12, 28 - 7);
    else if (player1position == 15)
        gotoxy(12, 28 - 11);
    else if (player1position == 16)
        gotoxy(12, 28 - 15);
    else if (player1position == 17)
        gotoxy(12, 28 - 19);
    else if (player1position == 18)
        gotoxy(12, 28 - 24);
    else if (player1position == 19)
        gotoxy(12 + 10, 4);
    else if (player1position == 20)
        gotoxy(12 + 20, 4);
    else if (player1position == 21)
        gotoxy(12 + 27, 4);
    else if (player1position == 22)
        gotoxy(12 + 40, 4);
    else if (player1position == 23)
        gotoxy(12 + 47, 4);
    cout << "P1";
    setColor(lightgreen, black);
    if (player2position == 0)
        gotoxy(72, (4 * player2position) + 4);
    else if (player2position <= 5)
        gotoxy(72, (4 * player2position) + 5);
    else if (player2position == 6)
        gotoxy(72, (4 * player2position) + 7);
    else if (player2position > 6 && player2position <= 12)
        gotoxy(72 - ((player2position - 6) * 10), 31);
    else if (player2position == 12)
        gotoxy(15, 28);
    else if (player2position == 13)
        gotoxy(15, 28 - 3);
    else if (player2position == 14)
        gotoxy(15, 28 - 7);
    else if (player2position == 15)
        gotoxy(15, 28 - 11);
    else if (player2position == 16)
        gotoxy(15, 28 - 15);
    else if (player2position == 17)
        gotoxy(15, 28 - 19);
    else if (player2position == 18)
        gotoxy(15, 28 - 24);
    else if (player2position == 19)
        gotoxy(15 + 7, 4);
    else if (player2position == 20)
        gotoxy(15 + 17, 4);
    else if (player2position == 21)
        gotoxy(15 + 27, 4);
    else if (player2position == 22)
        gotoxy(15 + 40, 4);
    else if (player2position == 23)
        gotoxy(15 + 47, 4);
    cout << "P2";
    return 0;
}
void fileoutputting()
{ // rules for the game
    char x;
    ifstream rules;
    rules.open("rules.txt");
    while (!rules.eof())
    {
        rules.get(x);

        cout << x;
    }
    rules.close();
    cout << endl;
}
int main()
{
    setColor(lightcyan, black);

    srand(time(0));
    cout << "*************** Starting your game **************\n";
    Sleep(1000); // For pausing the screen
    string playername[2];
    cout << "Enter the name of the first player : ";
    cin >> playername[0];
    cout << "Enter the name of the Secound player : ";
    cin >> playername[1];
    cout << "   **** NOTE ***** \n";
    cout << playername[0] << " WILL BE REPRESENTED AS (P1 ON THE BOARD)\n";
    cout << playername[1] << " WILL BE REPRESENTED AS (P2 ON THE BOARD)\n";
    // Name of the properties
    string position[24] = {"Start", "Tokyo", "Seoul", "Fine", "Tapei", "Sydeny", "Jail", "Karachi", "Dubai", "Airport", "Islamabad", "Athens", "Free Paking", "Rome", "Paris", "Airport(2)", "Berlin", "London", "Go to Jail", "Toronto", "NewYork", "Rest", "Mexico-City", "Lahore"};
    int propertyprices[24] = {-1, 350, 500, 500, 1000, 1100, -1, 700, 1000, 1000, 1500, 700, 0, 700, 1100, 1000, 1700, 1200, -1, 1500, 1000, -1, 2000, 2500}; // prices of the properties
    int propertyrent[24] = {-1, 50, 100, 500, 200, 250, 500, 150, 200, 300, 350, 150, -1, 150, 200, 300, 400, 300, -1, 400, 250, -1, 500, 550};               // rent on the properties
    int playerbalance[2];                                                                                                                                     // Balacne of Players in the bank
    cout << "Enter the bank balance for the players : ";
    cin >> playerbalance[0];             // Balance fo player1
    playerbalance[1] = playerbalance[0]; // Balance fo player2
    int rolldice[2];                     // Dice rolling for the 2 players
    float j = 0;                         // to keep the count of turn number
    int choose = 0;                      // for swithces
    char choice;                         // for user choice of buying the property
    int playerposition[2] = {0, 0};      // updating the positions
    int p1 = 0;                          // presenting the position for player1properties
    int p2 = 0;                          // presenting the position for player2properties
    string player1properties[24];        // storing the properties of p1
    string player2properties[24];        // storing the porperties of p2
    bool propertycheck = true;
    bool ownedpropertycheck = true; // for checking the owned properties on the player whoes turn is going on
    cout << " Loading . . . . . \n";
    Sleep(2000);
    while (playerbalance[0] > 0 && playerbalance[1] > 0)
    {
        rolldice[0] = 1;
        rolldice[1] = 1;
        system("CLS");
        board();
        positioncheck(playerposition[0], playerposition[1]);
        setColor(lightcyan, black);

        gotoxy(10, 35);
        if (j == 0)
        {
            setColor(yellow, black);

            cout << "\n\t" << playername[0] << " is currently at " << position[0] << endl;
            cout << "\t" << playername[0] << "'s current balance is " << playerbalance[0] << endl
                 << endl;
            cout << "\t" << playername[1] << " is currently at " << position[0] << endl;
            cout << "\t" << playername[1] << "'s current balance is " << playerbalance[1] << endl
                 << endl;
        }
        else if (j > 0)
        {
            setColor(yellow, black);

            cout << "\n\t " << playername[0] << " is currently at " << position[playerposition[0]] << endl;
            cout << "\t" << playername[0] << "'s current balance is " << playerbalance[0] << endl
                 << endl;
            cout << "\t" << playername[1] << " is currently at " << position[playerposition[1]] << endl;
            cout << "\t" << playername[1] << "'s current balance is " << playerbalance[1] << endl
                 << endl;
        }
        setColor(lightcyan, black);
        while (choose != 5 || rolldice[0] != 0)
        {
            if (j == 0)
                cout << "As per the code of the game player1 aka " << playername[0] << " will roll FIRST\n";
            cout << "\t ************* " << playername[0] << "'s TURN ***********" << endl;
            setColor(green, black);
            cout << "\tCHOOSE FROM THE MENU :-\n\n\t1.Roll Dice \n\t2.Check Balance \n\t3.Rules \n\t4.Owned Property\n\t5.End your turn \n\n";
            setColor(lightcyan, black);
            cout << "Type (the number)and then Press ENTER : ";
            cin >> choose;

            switch (choose)
            {
            case 1:
            {
                setColor(cyan, black);
                if (rolldice[0] != 0)
                {
                    cout << "Rolling dice . . .\n";
                    Sleep(200);
                    rolldice[0] = dice();
                    setColor(white, black);
                    cout << "\tThe number after rolling for " << playername[0] << " is " << rolldice[0] << endl;
                    setColor(cyan, black);
                    playerposition[0] = playerposition[0] + rolldice[0];
                    if (playerposition[0] > 23)
                    {
                        playerposition[0] = playerposition[0] - 23;
                        cout << "\tAs " << playername[0] << " has passed go awarding Rs-500\n";
                        playerbalance[0] = playerbalance[0] + 500;
                    }
                    rolldice[0] = 0;
                }
            }
            break;
            case 2:
            {
                setColor(white, black);

                cout << "The current BALANCE of " << playername[0] << " is " << playerbalance[0] << endl;
                setColor(lightcyan, black);
            }
            break;
            case 3:
            {
                cout << endl;
                setColor(white, black);
                fileoutputting();
                setColor(lightcyan, black);
                cout << endl;
            }
            break;
            case 4:
            {
                setColor(white, black);
                cout << "Current properties of " << playername[0] << " are : ";
                for (int i = 0; i < p1; i++)
                {
                    cout << player1properties[i] << " , ";
                }
                cout << endl;
                cout << "Current properties of " << playername[1] << " are : ";
                for (int i = 0; i < p2; i++)
                {
                    cout << player2properties[i] << " , ";
                }
                cout << endl;
                setColor(lightcyan, black);
            }
            break;
            case 5:
                break;
            default:
            {
                setColor(red, black);
                cout << " Not choosing from the menu, Choose again" << endl;
                setColor(lightcyan, black);
            }
            break;
            }
        }
        choose = 0;
        setColor(lightcyan, black);
        cout << "\n\t----" << playername[0] << " is now on the " << position[playerposition[0]] << "----\n";

        for (int i = 0; i <= p1; i++)
        {
            if (position[playerposition[0]] == player2properties[i])
            {
                setColor(red, black);
                cout << "\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
                cout << "\nAs " << playername[1] << " owned " << position[playerposition[0]] << " you pay the rent of " << propertyrent[playerposition[0]] << endl;
                cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";

                setColor(lightcyan, black);
                cout << "\n\t And " << playername[1] << " balance has increase by " << propertyrent[playerposition[0]] << '\n';

                playerbalance[0] = playerbalance[0] - propertyrent[playerposition[0]];
                playerbalance[1] = playerbalance[1] + propertyrent[playerposition[0]];
                propertycheck = false;
            }
            else if (position[playerposition[0]] == player1properties[i])
            {
                ownedpropertycheck = false;
            }
        }

        if (playerposition[0] == 18)
        {
            setColor(red, black);
            cout << "nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
            cout << "\nAs you are on " << position[playerposition[0]] << " Going to jain\n";
            cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
            playerposition[0] = 6;
            setColor(lightcyan, black);
        }
        if (playerposition[0] == 6)
        {
            setColor(red, black);
            cout << "\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
            cout << "\nAs you are on " << position[playerposition[0]] << " Deducting RS-500\n";
            cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
            setColor(lightcyan, black);
            playerbalance[0] = playerbalance[0] - 500;
            cout << "\nYour current balance is " << playerbalance[0];
        }
        else if (playerposition[0] == 3)
        {
            setColor(red, black);
            cout << "\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
            cout << "\nAs you are on " << position[playerposition[0]] << " Deducting Fine of Rs-500 \n";
            cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
            setColor(lightcyan, black);
            playerbalance[0] = playerbalance[0] - 500;
            cout << "\n\tYour current balance is " << playerbalance[0];
        }
        else if (propertyprices[playerposition[0]] > 0 && propertycheck && ownedpropertycheck)
        {
            setColor(lightyellow, black);
            cout << "\n\tYour current balance is " << playerbalance[0];
            cout << "\n\tThe price for this location is " << propertyprices[playerposition[0]];
            cout << "\n\tThe rent for this location is " << propertyrent[playerposition[0]];
            cout << "\n\tDo you want to buy the property (y/n)? : ";
            cin >> choice;
            if (choice == 'y')
            {
                player1properties[p1] = position[playerposition[0]];
                p1++;
                playerbalance[0] = playerbalance[0] - propertyprices[playerposition[0]];
            }
            cout << "player 1 (" << playername[0] << ") balance is " << playerbalance[0];
        }
        else if (ownedpropertycheck == false)
        {
            cout << "\n As " << playername[0] << " already owned the property, so moving on ...\n";
        }
        setColor(lightcyan, black);
        propertycheck = true;
        ownedpropertycheck = true;

        cout << endl
             << "        *******************************************      " << endl;
        Sleep(3000);
        system("CLS");
        board();
        positioncheck(playerposition[0], playerposition[1]);
        gotoxy(10, 35);
        setColor(lightcyan, black);
        while (choose != 5 || rolldice[1] != 0)
        {
            cout << "\t*********** " << playername[1] << "'s TURN ***********" << endl;
            setColor(lightgreen, black);
            cout << "\tCHOOSE FROM THE MENU :-\n\n\t1.Roll Dice \n\t2.Check Balance \n\t3.Rules \n\t4.Owned Property\n\t5.End your turn\n\n";
            cout << "Type (the number)and then Press ENTER : ";
            cin >> choose;
            setColor(lightcyan, black);
            switch (choose)
            {
            case 1:
            {
                if (rolldice[1] != 0)
                {
                    setColor(cyan, black);
                    cout << "Rolling dice . . .\n";
                    Sleep(200);
                    rolldice[1] = dice();
                    setColor(white, black);
                    cout << "\tThe number after rolling for " << playername[1] << " is " << rolldice[1] << '\n';
                    setColor(cyan, black);
                    playerposition[1] = playerposition[1] + rolldice[1];
                    if (playerposition[1] > 23)
                    {
                        playerposition[1] = playerposition[1] - 23;
                        cout << "\tAs " << playername[1] << " has passed go awarding Rs-500\n";
                        playerbalance[1] = playerbalance[1] + 500;
                    }
                    rolldice[1] = 0;
                }
                setColor(lightcyan, black);
            }
            break;
            case 2:
            {
                cout << endl;
                setColor(white, black);
                cout << "The current BALANCE of " << playername[1] << " is " << playerbalance[1] << endl;
                setColor(lightcyan, black);
                cout << endl;
            }
            break;
            case 4:
            {
                setColor(white, black);
                cout << "Current properties of " << playername[1] << " are : ";
                for (int i = 0; i < p2; i++)
                {
                    cout << player2properties[i] << " , ";
                }
                cout << endl
                     << "Value of p2" << p2;
                cout << endl;
                cout << "Current properties of " << playername[0] << " are : ";
                for (int i = 0; i < p1; i++)
                {
                    cout << player1properties[i] << " , ";
                }
                cout << endl
                     << "Value of p1" << p1;
                cout << endl;
                setColor(lightcyan, black);
            }
            break;
            case 3:
            {
                setColor(white, black);
                fileoutputting();
                setColor(lightcyan, black);
            }
            break;
            case 5:
                break;
            default:
            {
                setColor(red, black);
                cout << " Not choosing from the menu, Choose again" << endl;
                setColor(lightcyan, black);
            }
            break;
            }
            j++;
        }
        choose = 0;

        cout << "\n\t----" << playername[1] << " is now on the " << position[playerposition[1]] << "----\n";
        for (int i = 0; i <= p2; i++)
        {
            if (position[playerposition[1]] == player1properties[i])
            {
                setColor(red, black);
                cout << "\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
                cout << "\nAs " << playername[0] << " owned " << position[playerposition[1]] << " you pay the rent of " << propertyrent[playerposition[1]] << endl;
                cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
                cout << "\n\t And " << playername[0] << " balance has increase by " << propertyrent[playerposition[1]] << '\n';
                playerbalance[1] = playerbalance[1] - propertyrent[playerposition[1]];
                playerbalance[0] = playerbalance[0] + propertyrent[playerposition[1]];
                propertycheck = false;
                setColor(lightcyan, black);
            }
            else if (position[playerposition[1]] == player2properties[i])
            {
                ownedpropertycheck = false;
            }
        }
        if (playerposition[1] == 18)
        {
            setColor(red, black);
            cout << "\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
            cout << "\nAs you are on " << position[playerposition[1]] << " Going to jail\n";
            cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
            setColor(lightcyan, black);

            playerposition[1] = 6;
        }
        if (playerposition[1] == 6)
        {
            setColor(red, black);
            cout << "\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
            cout << "\nAs you are on " << position[playerposition[1]] << " Deducting RS-500\n";
            cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";

            playerbalance[1] = playerbalance[1] - 500;
            cout << "\nYour current balance is " << playerbalance[1];
            setColor(lightcyan, black);
        }
        else if (playerposition[1] == 3)
        {
            setColor(red, black);
            cout << "\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
            cout << "\nAs you are on " << position[playerposition[1]] << " Deducting Fine of Rs-500 \n";
            cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
            playerbalance[1] = playerbalance[1] - 500;
            cout << "\n\tYour current balance is " << playerbalance[1];
            setColor(lightcyan, black);
        }

        else if (propertyprices[playerposition[1]] > 0 && propertycheck && ownedpropertycheck)
        {
            setColor(lightyellow, black);
            cout << "\n\tYour current balance is " << playerbalance[1];
            cout << "\n\tThe price for this location is " << propertyprices[playerposition[1]];
            cout << "\n\tThe rent for this location is " << propertyrent[playerposition[1]];
            cout << "\n\tDo you want to buy the property (y/n)? : ";
            cin >> choice;
            if (choice == 'y')
            {
                player2properties[p2] = position[playerposition[1]];
                p2++;
                playerbalance[1] = playerbalance[1] - propertyprices[playerposition[1]];
            }
            cout << "player 2 (" << playername[1] << ") balance is " << playerbalance[1];
        }
        else if (ownedpropertycheck == false)
        {
            cout << "\n As " << playername[1] << " already owned the property, so moving on \n";
        }
        propertycheck = true;
        setColor(lightcyan, black);
        ownedpropertycheck = true;
        Sleep(3000);
        cout << "\n  ************ Moving on ************";
    }
    if (playerbalance[0] > 0)
    {
        setColor(lightgreen, black);
        cout << "\n\nAs " << playername[1] << " ran out of money\n";
        cout << "\nHoorah! " << playername[0] << " Is The winner \n";
    }
    else
    {
        setColor(lightgreen, black);
        cout << "\n\nAs " << playername[0] << " ran out of money\n";
        cout << "\nHoorah! " << playername[1] << " Is The winner \n";
    }
    setColor(white, black);
    return 0;
}