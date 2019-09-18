#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct profile
{
	char name[20];
	int age;
	double height;
	char *intro;
};

int main(void)
{
	struct profile p1;
	
	strcpy(p1.name, "name");
	p1.age = 10;
	p1.height = 10.03;
	
	p1.intro = (char *)malloc(80);
	printf("input : ");
	gets(p1.intro);
	
	printf("name : \n",p1.name);
	printf("age : \n",p1.age);
	printf("height : \n",p1.height);
	printf("intro : \n",p1.intro);
	
	free(p1.intro);
	
	return 0;
}
