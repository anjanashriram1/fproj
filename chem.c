#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//float atomicmass(float hatom, int numberh, char polyion, int numberion)
//{
//	float mass;
//	for (int > a; int <= e, int++)
	
//	mass = hatom * numberh + polyion * numberion;
//	return mass;
//}

int main(int argc, char* argv[])
{
if (argc != 3)
{
	printf("%s: Please input 2 values\n", argv[0]);
}

else if (argc == 3)
{
float a = 60.05;
float b = 127.9;
float c = 83.45;
char input[256];
char polyion;
int numberion;
char answer;
float number;
float mass;
	answer = *argv[1];
	number = atof(argv[2]);
	if(answer == 'a')
{
	mass = a * number;
}
	else if(answer == 'b')
{
	mass = b * number;
}
	else if(answer == 'c')
{
	mass = c * number;
}
printf("The mass is %f\n", mass);



}
}

