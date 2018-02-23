/* Author:Steven Gonzalez SSID: 009387092
 *
 * C program to test whether a given string is a palinfrome 
 * 49C Test2 Problem 6.31.c
 */
#include <stdio.h>

//function declaration 
int testPalidrome(char s[], int m, int e, int l);

// main function
int main()	{
	//local variable declarations
	char string[100];
	int middle;
	int end;
	int length = 0;

	//get string to check 
	printf("Enter a sting to check if palinfrome: ");
	fgets(string, sizeof(string), stdin);
	
	//get length of entered string
	while(string[length] != '\n')	{
		length = length + 1;
	} // end while loop
	
	//set end and middle indexs relative to length
	end = length - 1;
	middle = length / 2;
	
	//call to test if palindrone
	int result = testPalidrome(string, middle, end, length);
	printf("%d\n", result);	//print results
} //end main function

//test if is palndrome function
int testPalidrome(char s[], int m, int e, int l)	{
	int b;	
	
	//compare begining and end indexe, begining++, end--
	for(b = 0; b < m; b++)	{
		if(s[b] != s[e])	{
		//not palindrone, return 0
			return 0;
		} // end if statement
		//else decrement e to evaluate with next b
		e--;
	} // end for loop 
	
	//if m - 1 and m are the same return 1;
	if(b = m)	{
		return 1;
	} // end if statement
} // end testPalindrome function
