#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include <windows.h>
#include <time.h>


using namespace std;

char l[] = "ººººº";
int i;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoxy(int x, int y) {

  CursorPosition.X = x;
  CursorPosition.Y = y;
  SetConsoleCursorPosition(console, CursorPosition);
  
}

void printBorder() {
  for (i = 2; i <= 79; i++) {
    gotoxy(i, 1);
    cout << '-';
    gotoxy(i, 25);
    cout << '-';
  }

  for (i = 1; i <= 25; i++) {
    gotoxy(2, i);
    cout << '|';
    gotoxy(79, i);
    cout << '|';
  }
}