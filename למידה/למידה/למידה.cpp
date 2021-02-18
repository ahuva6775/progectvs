// למידה.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
//
//int func(unsigned long x, int n)
//{
//	if (n == 1)
//		return x & 1;
//	return func(x >> 1, --n) + (1 << n)*(x & 1);
//}
//void main()
//{
//	int x = func(0x898, 16);
//	int z = func(0xbc, 8);
//	int xx = (0xbc86, 8);
//	printf("%d %d %d %c", x, z, xx, xx);
//	char c = 0x4c;
//	printf("\n%c", func(c, 8));
//	_getwch();
//}int 
//#define G 14
//int func(int t[], int v[], int a)
//{
//	int b = 0, k = a, i, j;
//	v[a] = -1;
//	for ( i = a+1; i < G; i++)
//		if (t[i] > t[k])
//		{
//			if (v[i])
//				break;
//			v[i] = -1;
//			k = i;
//	}
//	if (i < G)
//		b = v[i];
//	for (j = i - 1; j >= a; j--)
//		if (v[j] == -1)
//			v[j] = ++b;
//	return b;
//}
//void main()
//{
//	int t[G] = { 85,124,71,147,29,44,73,27,94,48,122,97,24,128 };
//	int v[G] = { 0 }, i, j, max = 0, x;
//	for (i = 0; i < G; i++)
//		if (v[i] == 0 && func(t, v, i) > v[max])
//			max = i;
//	for(x=t[max],i=max,j=1;i<G;i++)
//		if (t[i] >= x)
//		{
//			printf("%d: %d-%d\n", j++, t[i], i);
//			x = t[i];
//		}
//	printf("max=%d", v[max]);
//	_getwch();
//}
#define SUM_OF_3(x,y,z) x+y+z
#define AVRG_OF_3(x,y,z) (x+y+z)/3
#define AVRG1_OF_3(x,y,z)  SUM_OF_3(x,y,z)/3
void main()
{
	int a = 10, b = 8, c = 7;
	printf("The average of %d %d %d is %d\n", a, b, c, AVRG_OF_3(a, b, c));
	a <<= 1;
	b >>= 1;
	c ^= 1;
	printf("The average of %d %d %d is %d\n", a, b, c, AVRG_OF_3(a, b, c));
	a >>= 1;
	b <<= 1;
	c ^= 1;
	printf("The average of %d %d %d is %d\n", a, b, c, AVRG1_OF_3(a, b, c));
	_getwch();
}