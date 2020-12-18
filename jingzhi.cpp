#include "head.h"


void jingzhi(int a,int b,int f)

{
	int c;
	int d=0;

	std::cout << f << std::endl;

	for (int i = 0; i < f; i++)

	{
		c = b % 10;
		b = b / 10;
		d = d + c * pow(a, i);


  }
	std::cout << d;
}