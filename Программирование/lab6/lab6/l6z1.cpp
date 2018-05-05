#include<iostream>
using namespace std;
const int n = 7;
int main()
{
	int A[n], k;
	cout << "Enter elements of array:" << endl;
	for (int i = 0; i < n; i++)
		cin >> A[i];
	cout << "Enter element which you want to find: ";
	cin >> k;
	for (int i = 0; i <= n; i++)
	{
		if (k == (i+1))
			cout << "Element [" << k << "]" << " is " << A[i];
	}
	cin.get();
	cin.get();
}

