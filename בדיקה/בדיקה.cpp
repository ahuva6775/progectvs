// בדיקה.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define t(x) x*x
#define f(x,y) x=x+y
#define g(x,y) x=x*y
#include "pch.h"
#include <iostream>
#include <stdio.h>


int main()
{
	int a, b;
	int *c;
	a = b = 2;
	g(b,(f(a, b)));
	printf("%d\n", b);

	return 0;
    
}

