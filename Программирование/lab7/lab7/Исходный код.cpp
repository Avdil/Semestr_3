#include<iostream>
#include<vector>
using namespace std;
void main()
{
	vector<int>v;
	int x;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter number: " << endl;
		cin >> x;
		v.push_back(x);
		cout << "Size is : " << v.size() << endl << "Capaccity is : " << v.capacity() << endl;
	}
	cin.get();
	cin.get();
}
