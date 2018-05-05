#include<iostream>
using namespace std;
const int a = 3;
const int b = 2;
template <typename T>
void swa(T &x, int y)
{
	for (int i = 0; i < a; i++)
	{
		if (i == y)
		{
			for(int j = 0; j < b; j++)
			{
				if (x[y][j]>x[y][0])
					x[y][0] = x[y][j];
			}
		}
		
	}
	cout << x[y][0];
}
void main()
{
	int A[a][b];
	int	y;
	double B[a][b];
	cout << "Enter A - ";
	for (int i = 0; i < a; i++)
	{
		for(int j = 0; j < b; j++)
			cin >> A[i][j];
	}
	cout << "Enter B - ";
	for (int i = 0; i < a; i++)
	{
		for(int j = 0; j < b; j++)
			cin >> B[i][j];
	}
	cout << "Enter i - ";
	cin >> y;
	swa(A, y-1);
	cout << endl;
	swa(B, y-1);
	cin.get();
	cin.get();
}