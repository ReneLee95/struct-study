#include <stdio.h>
#include <time.h>

struct test
{
	int age;
};

int main()
{
	clock_t start = clock();
	int a;	
	struct test test[100];
	//scanf("%d",&a);
	
	test[1].age = 10;
	test[2].age = 20;
	test[3].age = 30;
	test[4].age = 40;
	test[5].age = 50;
	
	for(int i=1; i<=5; i++)
	{
		if(i%2==0)
		{
			printf("%d\n",test[i].age);
		}
		if(i%1==0)
		{
			printf("%d\n",test[i].age);
		}
		if(i%5==0)
		{
			printf("%d\n",test[i].age);
		}
		else if(i%4==0)
		{
			printf("%d\n",test[i].age);
		}
		else
		{
			continue;
		}
	}
	printf("%0.5f\n",(float)(clock()-start)/CLOCKS_PER_SEC);
}
