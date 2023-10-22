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
void findnumberposition(int arr[100], int number, int arrlength)
{
	bool numbertosearch = false;
	for (int i=0;i<arrlength;i++)
	{
		if (arr[i]==number)
		{
			numbertosearch = true;
			cout << "the number find in postion " << i << endl;
			cout << "the number found in order " << i + 1 << endl;
			break;
   	    }
		
	}
	 if (!numbertosearch)
	{
		cout << "the number not found :-(";
	}
}





int main()
{
	srand((unsigned)time(NULL));
	int arr[100], arrlength = readpositivenumber("please enter how many element");
	fillarraywithrandoomnumber(arr, arrlength);
	cout << "array 1 element " << endl;
	printarray(arr, arrlength);
	cout << endl;
	int numbertosearch = readpositivenumber("please enter the number to search");
	cout << endl;
	cout << "you are looking for " << numbertosearch << endl;
	cout << endl;
	findnumberposition(arr, numbertosearch, arrlength);


	return 0;
}