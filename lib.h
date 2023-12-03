#ifndef lib_h
#define lib_h

#include <iostream>
#include <Windows.h>
#include <iostream>

using namespace std;


void setcursor(bool visible, DWORD size); /*DWORD - Double Word  it is a 32 bit unsigned integer data type*/
void gotoxy(int x, int y);

void show_border(int x, int y);

#endif 