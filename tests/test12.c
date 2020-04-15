#include <stdio.h>
int func(char a)
{
	return a;
}

int main()
{
	int z = 5, ll;
	//int m = 6;
	ll = func(z);
	printf("%d", ll);
}