#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
	vector <int>::iterator i;
	vector<int >v;
	vector <int>v1 = { 1, 2, 3, 4, 5, 6 };
	vector <int>v2{ 1, 2, 3, 4, 5, 6 };
	int searchValue(5);
	vector< int >::iterator iter = find(v1.begin(), v1.end(), searchValue);
	if (iter != v1.end())
		v1.erase(iter);
	for (i = v2.begin(); i < v2.end(); i++)
		cout << *i << endl;
	int x;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter number: " << endl;
		cin >> x;
		v.push_back(x);
		cout << "Size is : " << v.size() << endl << "Capaccity is : " << v.capacity() << endl << "Adress is : " << &v[i] << endl;
	}
	for (int i = 0; i < 5; i++)
		cout << v[i] << " ";
	v1.erase(v1.begin(), v1.end());
	vector< int >::iterator first, last;
	first = find(v2.begin(), v2.end(), 2);
	last = find(v2.begin(), v2.end(), 6);
	// ... проверка first и last
	v2.erase(first, last);
	return 0;
	cin.get();
	cin.get();
}
