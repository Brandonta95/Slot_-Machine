//C++ v13.12

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "windows.h"

using namespace std;

void board(char y1, char y2, char y3, char y4, char y5, char y6, char y7, char y8, char y9);

void spin(char &y1);

int main()
{

    //data abstraction
    int value;           double money = 50;
    int bet;             int counter = 0;
    int x1, x2, x3;      char get;
    char y1, y2, y3;     char y7, y8, y9;
    char y4, y5, y6;     bool player = true;
    
    srand(time(NULL));
    
    while(money > 0)
    {
        y1 = y2 = y3 = y4 = y5 = y6 = y7 = y8 = y9 = ' ';
        system("CLS");
    cout << "$" << money << endl;
    do{
    cout << "Bet(1-3): ";
    cin >> bet;
    }while(bet < 1 || bet > 3);
    money = money - bet;

    cout << "hit enter to stop wheel" << endl;
    board(y1, y2, y3, y4, y5, y6, y7, y8, y9);

    cin.get();

   spin(y1);
      spin(y2);
         spin(y3);
            cin.get();
            system("CLS");
   board(y1, y2, y3, y4, y5, y6, y7, y8, y9);
   spin(y4);
      spin(y5);
         spin(y6);
             cin.get();
             system("CLS");
   board(y1, y2, y3, y4, y5, y6, y7, y8, y9);
   spin(y7);
      spin(y8);
         spin(y9);
            cin.get();
            system("CLS");
   board(y1, y2, y3, y4, y5, y6, y7, y8, y9);

    if(y1 == '-' && y4 == '-' && y7 == '-') {money = money + (bet * 2); cout << "  you won $" << bet * 2 << endl;}
    if(y1 == '=' && y4 == '=' && y7 == '=') {money = money + (bet * 3); cout << "  you won $" << bet * 3 << endl;}
    if(y1 == '@' && y4 == '@' && y7 == '@') {money = money + (bet * 6); cout << "  you won $" << bet * 6 << endl;}
    if(y1 == '*' && y4 == '*' && y7 == '*') {money = money + (bet * 8); cout << "  you won $" << bet * 8 << endl;}
    if(y1 == '$' && y4 == '$' && y7 == '$') {money = money + (bet * 10); cout << "  you won $" << bet * 10 << endl;}
    if(y1 == '7' && y4 == '7' && y7 == '7') {money = money + (bet * 14); cout << "  you won $" << bet * 14 << endl;}

    if(y2 == '-' && y5 == '-' && y8 == '-') {money = money + (bet * 2); cout << "  you won $" << bet * 2 << endl;}
    if(y2 == '=' && y5 == '=' && y8 == '=') {money = money + (bet * 3); cout << "  you won $" << bet * 3 << endl;}
    if(y2 == '@' && y5 == '@' && y8 == '@') {money = money + (bet * 6); cout << "  you won $" << bet * 6 << endl;}
    if(y2 == '*' && y5 == '*' && y8 == '*') {money = money + (bet * 8); cout << "  you won $" << bet * 8 << endl;}
    if(y2 == '$' && y5 == '$' && y8 == '$') {money = money + (bet * 10); cout << "  you won $" << bet * 10 << endl;}
    if(y2 == '7' && y5 == '7' && y8 == '7') {money = money + (bet * 14); cout << "  you won $" << bet * 14 << endl;}

    if(y3 == '-' && y6 == '-' && y9 == '-') {money = money + (bet * 2); cout << "  you won $" << bet * 2 << endl;}
    if(y3 == '=' && y6 == '=' && y9 == '=') {money = money + (bet * 3); cout << "  you won $" << bet * 3 << endl;}
    if(y3 == '@' && y6 == '@' && y9 == '@') {money = money + (bet * 6); cout << "  you won $" << bet * 6 << endl;}
    if(y3 == '*' && y6 == '*' && y9 == '*') {money = money + (bet * 8); cout << "  you won $" << bet * 8 << endl;}
    if(y3 == '$' && y6 == '$' && y9 == '$') {money = money + (bet * 10); cout << "  you won $" << bet * 10 << endl;}
    if(y3 == '7' && y6 == '7' && y9 == '7') {money = money + (bet * 14); cout << "  you won $" << bet * 14 << endl;}
    //add diagonals sometime or another
    cin.get();
    // or cout << string(50, '\n');
    }
    cout << "Visit the App Store for more credits" << endl;
    return 0;
}

void spin(char &y1){
    int value;
    value = (rand()%20 + 1); //add char y2 and y3 and also ajust the win conditions
    if(value >= 1 && value < 7)
    {y1 = '-';}
    else if(value >= 7 && value < 12)
    {y1 = '=';}
    else if(value >= 12 && value < 15)
    {y1 = '@';}
    else if(value >= 15 && value < 18)
    {y1 = '*';}
    else if(value >= 18 && value < 20)
    {y1 = '$';}
    else if(value == 20)
    {y1 = '7';}
}
void board(char y1, char y2, char y3, char y4, char y5, char y6, char y7, char y8, char y9)
{
    cout << "  _________________" << endl;
    cout << "  |               |" << endl;
    cout << "  |  _" << y1 << "_ _" << y4 << "_ _" << y7 << "_  |" << endl;
    cout << "  |  _" << y2 << "_ _" << y5 << "_ _" << y8 << "_  |" << endl;
    cout << "  |  _" << y3 << "_ _" << y6 << "_ _" << y9 << "_  |" << endl;
    cout << "  |_______________|" << endl;
}
