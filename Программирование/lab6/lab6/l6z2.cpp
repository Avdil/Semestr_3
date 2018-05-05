#include<iostream>
using namespace std;
const int n = 10;
int main()
{
	int A[n];
	cout << "Enter elements of array:" << endl;
	for (int i = 0; i < n; i++)
		cin >> A[i];
	int k, average_index = 0, first_index = 0, last_index = n - 1;
	cout << "Enter element which you want to find : ";
	cin >> k;
	bool flag = 1;
	int l = 0;
	while (flag)
	{
		flag = 0;
		for (int i = 0; i < n - 1 - l; i++)
		if (A[i] > A[i + 1])
		{
			int tmp = A[i];
			A[i] = A[i + 1];
			A[i + 1] = tmp;
			flag = true;
		}
	}
	l++;
	for (int i = 0; i < n; i++)
		cout << A[i] << endl;
	if (last_index == -1)
		cout << "Array is empty!";
	while (first_index < last_index)
	{
		average_index = first_index + (last_index - first_index) / 2;
		if (k <= A[average_index])
			last_index = average_index;
		else
			first_index = average_index + 1;
	}
	if (A[last_index] == k)
		cout << "Value is found " << endl << "index = " << last_index << endl;
	else
		cout << "Value is not found! " << endl;
	cin.get();
	cin.get();
}
