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
		arr[i] = randoomnumber(1, 10);
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
		cout << randoomnumber(1, arrlength) <<endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arr2[100], arrsum[100];
	int arrlength = readpositivenumber("please enter how many element");

	cout << "array elements before shuffle : " << endl;
	printarraybeforeshufle(arrlength);
	cout << endl;
	cout << "array elements after shuffle : " << endl;
	printarrayaftershufle(arrlength);
}