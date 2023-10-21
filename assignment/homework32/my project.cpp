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
void fillarraywithrandoomnumber(int arr[100], int &arrlength)
{
	cout << "please enter how many element : " << endl;
	cin >> arrlength;
	for (int i=0;i<=arrlength-1;i++)
	{
		arr[i] = randoomnumber(1, 100);
	}
}
void printarray(int arr[100],int arrlength)
{
	for (int i=0;i<arrlength;i++)
	{
		cout << arr[i] << " ";
	}
}
void printarraybeforeshufle(int arrlength)
{
	for (int i=1;i<=arrlength;i++)
	{
		cout << i << " ";
	}
}
void printarrayaftershufle(int arrlength)
{
	for (int i=0;i<arrlength;i++)
	{
		cout << randoomnumber(1, arrlength) << " ";
	}
}
int reversenumber(int arr[100],int arrlength)
{
	int remainder = 0, number = 0, number2 = 0;
	for (int i=0;i<arrlength;i++)
	{
		remainder = arr[i] % 10;
		number = arr[i] / 10;
		number2 = arr[i] * 10 + remainder;
	}
	return number2;
}
void copyarray(int arr[100], int arr2[100], int arrlength)
{
	for (int i=0;i<arrlength;i++)
	{
		arr2[i] = arr[i];
	}
}
void copyarrayeithreverseorder(int arr[100],int arr2[100], int arrlength)
{
	for (int i=0;i<arrlength;i++)
	{
		arr2[i] = arr[arrlength - 1 - i];
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int arr1[100], arrlength;
	fillarraywithrandoomnumber(arr1, arrlength);
	int arr2[100];
	copyarrayeithreverseorder(arr1, arr2, arrlength);

	cout << "\narray 1 elements : \n";
	printarray(arr1, arrlength);
	cout << endl;
	cout << "array 2 elements : \n";
	printarray(arr2, arrlength);




	return 0;
}