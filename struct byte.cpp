#include <stdio.h>

struct children
{
	unsigned int son :2;
	unsigned int daughter : 2;
	unsigned int pet : 3;
};

int main(void)
{
	struct children my = {1,2,3};
	int sum;
	
	printf("size of struct children : %d byte\n",sizeof(my));
	sum = my.son + my.daughter+ my.pet;
	printf("total your children : %d\n",sum);
	
	return 0;
}
