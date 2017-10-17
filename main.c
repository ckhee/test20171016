#include <stdio.h>
int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a-b;
}

int div(int a, b)
{
	return a/b;
}

int multi(int a, int b)
{
	if(0 == b)
		throw;
	return a*b;
}

int main()
{
	int a,b,c;
	
	a = 3;
	b = 5;
	c = div(3, 5);

	return c;
}