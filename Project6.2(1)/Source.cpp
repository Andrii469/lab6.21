#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std; 
#define n 10

void max(int arr[n])
{
cout << endl;
int max = 0;
for (int i=0; i < n;i++)
{
	if (arr[i] > max)
	{
		max = arr[i];
	}
}
cout << "Max " << max << endl;
}
void min(int arr[n])
{
	cout << endl;
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min= arr[i];
		}
	}
	cout << "Min "<< min<<endl;
}
void main()
{
	cout << endl;
	srand(time(NULL));
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << endl;
	max(arr);
	min(arr);
	cout << endl;
}