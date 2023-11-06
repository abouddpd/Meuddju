#include <iostream>
#include <string>
#include <random>
using namespace std;
enum enprimenotprime { prime = 1, notprime = 2 };
int readpositivenumber(string massage)
{
	int number = 0;
	do
	{

		cout << massage << endl;
		cin >> number;
	} while (number < 0);
	return number;
}
int randoomnumber(int from, int to)
{
	int random = rand() % (to - from + 1) + from;
	return random;
}
void fillarraywithrandoomnumber(int arr[100], int arrlength)
{


	for (int i = 0; i <= arrlength - 1; i++)
	{
		arr[i] = randoomnumber(1, 100);
	}
}
void printarray(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << " ";
	}
}
void addarrayelement(int number, int arr[100], int& arrlength)
{
	arrlength++;
	arr[arrlength - 1] = number;
}
enprimenotprime checkprime(int number)
{
	int m = round(number / 2);
	for (int counter = 2; counter <= m; counter++)
	{
		if (number % counter == 0)
		{
			return enprimenotprime::notprime;
		}
		
	}
	return enprimenotprime::prime;
}
void copyprimenumber(int arr1[100], int arr2[100], int arrlength1, int& arrlength2)
{
	for (int i = 0; i < arrlength1; i++)
	{
		if (checkprime(arr1[i]) == enprimenotprime::prime)
		{
			addarrayelement(arr1[i], arr2, arrlength2);
		}
	}
}





int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arr2[100], arrlength2 = 0, arrlength = readpositivenumber("please enter  element number");
	fillarraywithrandoomnumber(arr, arrlength);
	cout << "array 1 element : \n";
	printarray(arr, arrlength);
	cout << endl;
	copyprimenumber(arr, arr2, arrlength, arrlength2);
	cout << " prime number :\n";
	printarray(arr2, arrlength);


	return 0;
}