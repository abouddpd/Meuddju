#include <iostream>
#include <string>
#include <random>
using namespace std;
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
int main()
{
	srand((unsigned)time(NULL));
	int arr[100], arrlength;
	arrlength = readpositivenumber("please enter how many numbers ");
	fillarraywithrandoomnumber(arr, arrlength);
	printarray(arr, arrlength);
	cout << endl;
	int numbersearch = readpositivenumber("please enter a number to search for?");
	cout << "you are looking for is : " << numbersearch << endl;
	findnumberposition(arr, numbersearch, arrlength);
	return 0;
}