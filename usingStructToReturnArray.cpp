//Sup nerds?
//Code applications: Inputting arrays, array computations, returning arrays back to main and passing by refrence to other functions


#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#define MAX 12

using namespace std;

struct p {
	int arr[MAX];
};


struct p input(int n)
{
	struct p arr2; //defining input array

	cout << "Enter " << n << " values (can only be 0 or 1) with spaces between each number and press Enter " << endl;

	for (int i = 0; i < n; i++) 	//looping n times
	{
		scanf("%d", &arr2.arr[i]); //receiving input and placing into array formt to be returned
	}
	return arr2; //returning the array!
}

struct p result(struct p arr2, int n)
{
	struct p arr3;


	//Manipulating the inputted string to show that this works.
	//XORing the string to a bitstring of all 1's
	//Do whatever you want here

	int otherString[12] = { 1,1,1,1,1,1,1,1,1,1,1,1 };


	for (int i = 0; i < n; i++)
	{
		arr3.arr[i] = ((arr2.arr[i]) ^ (otherString[i])); //XOR the two strings
	}


	return arr3;

}


int main(void) {

	struct p a;
	int n; //size of array
	cout << "Enter the size of the array (input 12 for this to work properly): " << endl;
	scanf("%d", &n); //Inputted integer of size of array. Must be passed by refrence 
					 //An array needs a constant size (it can't be randomly changed within the code)

	a = input(n); //passing the value size of the array to input function

	struct p arr3 = result(a, n); //returning result of XOR

	cout << "New array is: " << endl;
	for (int i = 0; i < n; i++) //printing encoded result!
	{
		cout << arr3.arr[i] << " ";
	}

	cout << endl;
	system("pause");
	return 0;
}
