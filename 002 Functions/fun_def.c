/*
 * fun_def.c
 *
 *  Created on: 30-Jul-2021
 *      Author: yellareddy
 */
#include<stdio.h>

//void function_add_numbers(int a,int b,int c);
void function_add_numbers(int ,int ,int );

int main()
{
	function_add_numbers(10,60,90);  // when you calling a function you need to pass 12 integer values..
	//The first warning is beacuse,Since prototype of the function is not found before doing it, 'Compiler assumed the
//	prototype
	function_add_numbers(-60,60,90);

	int valueA=90,valueB=70;
	function_add_numbers(valueA,valueB,90);
return 0;
}


//This is the function definition
void function_add_numbers(int a,int b,int c)  //Here,the compiler comes to know about the exact prototype of the function.
//So the second warning its says 'What I assumed conflicts with what you have written
{
	int sum;
	sum=a+b+c;
	printf("Sum=%d\n",sum); // printf is not written by us it is written by standard library code
}



