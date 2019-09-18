#include <stdio.h>

struct vision
{
	double left;
	double right;
};

struct vision exchange(struct vision);

int main(void)
{
	struct vision v1;
	
	printf("input : ");
	scanf("%1f %1f",&(v1.left),&(v1.right));
	v1 = exchange(v1);
	printf("change : %.1lf, %.1lf\n",v1.left,v1.right);
	
	return 0;
}

struct vision exchange(struct vision v1)
{
	double temp;
	
	temp = v1.left;
	v1.left = v1.right;
	v1.right = temp;
	
	return v1;
}
