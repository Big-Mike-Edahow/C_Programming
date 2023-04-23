// menu.c

#include <stdio.h>

void menu();
void action(int option);

int main()
{
	menu();

	return 0;
}

void menu() {
	int option;

	printf("\nWhat would you like to do?");
	printf("\n1. Square a number");
	printf("\n2. Multiply two numbers");
	printf("\n3. Exit\n");

	scanf("%d", &option);
	action(option);
}