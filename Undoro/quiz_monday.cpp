#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>

void printA();
void printB();
void printC();

int main()
{
	/*printf("a ");
	printA();
	printf("\n");*/

	printf("b ");
	printB();
	printf("\n");
	/*
	printf("c");
	printC();
	printf("\n");*/

	getchar();
}

void printA()
{
	FILE * fptr = fopen("data.txt", "r");

	int i = 0;
	int j = 0;
	int a[5][6];

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			fscanf(fptr, "%d", &a[i][j]);
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("%d", a[i][j]);
		}
	}
	fclose(fptr);
}

void printB()
{
	FILE * fptr = fopen("data.txt", "r");

	int i = 0;
	int * b = (int *)malloc(sizeof(int) * 5 * 6);

	for (i = 0; i < 30; i++)
	{
		fscanf(fptr, "%d", &b[i]);
	}
	for (i = 0; i < 30; i++)
	{
		printf("%d", b[i]);
	}
	fclose(fptr);
}

void printC()
{
	FILE * fptr = fopen("data.txt", "r");

	int i = 0;
	int j = 0;
	int ** c = (int **)malloc(sizeof(int*) * 5);

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			fscanf(fptr, "%d", &c[i][j]);
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("%d", c[i][j]);
		}
	}
	fclose(fptr);
}