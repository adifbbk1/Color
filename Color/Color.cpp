// Color.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<Windows.h>
#include<iostream>

int main()
{ 
	int i;
	for (i = 0; i <= 255; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);
		std::cout << i;
		printf(" no is this text\n", i);
	}
    return 0;
}

