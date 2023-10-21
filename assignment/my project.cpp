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


void getrandoomchar()
{
	cout << char(randoomnumber(65, 90));
}
string generateword()
{
	string word = "";
	for (int i = 0; i < 4; i++)
	{
		word += char(randoomnumber(65, 90));

	}
	return word;
}

string generatekey()
{
	string fullkey = "";
	fullkey = generateword() + "-" + generateword() + "-" + generateword() + "-" + generateword();
	return fullkey;
}
void printresult(int arr[100], int arrlength)
{
	for (int i=0;i<arrlength;i++)
	{
		cout << "ARRAY[" << i << "]"<< ":" << generatekey();
		cout << endl;
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
	cout << "you are looking for is : " <<  numbersearch << endl;

	return 0;
}