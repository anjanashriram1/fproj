#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
if (argc != 4)
{
	printf("%s: Please input 3 values\n", argv[0]);
}

else if (argc == 4)
{
float a = 60.05;
float b = 127.9;
float c = 83.45;
char input[256];
char answer;
float number;
float mass;
int lowerrange;
int upperrange;
	answer = *argv[1];
	lowerrange = atof(argv[2]);
	upperrange = atof(argv[3]);

	printf("The lowerrange is %d\n", lowerrange); 
	printf("The upperrange is %d\n", upperrange);
{
	if(answer == 'a')
{
	for(int i = lowerrange; i <= upperrange; i++)
{
	mass = a * i;
	printf("The mass of the compound is %f\n", mass);
}
}
	else if(answer == 'b')
{
	for(int i = lowerrange; i <= upperrange; i++)
	
	{mass = b * i;
	printf("The mass of the compound is %f\n", mass);}
}
	
	else if(answer == 'c')
{
	for(int i = lowerrange; i <= upperrange; i++)
	{mass = c * i;
	printf("The mass of the compound is %f\n", mass);}
}


}
}
}

