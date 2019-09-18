#include <stdio.h>

struct care
{
	int num;
	double a;
};

int main()
{
	struct care c1;
	
	c1.num = 10;
	c1.a = 10.03;
	
	printf("%d %.2f",c1.num,c1.a);
}
