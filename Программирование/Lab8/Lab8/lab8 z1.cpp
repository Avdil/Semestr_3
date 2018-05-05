#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void main()
{
	vector<char> v1 = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	vector<char> v2 = { 'Z', 'Y', 'X', 'W', 'V', 'U', 'T', 'S', 'R', 'Q', 'P', 'O', 'N', 'M', 'L', 'K', 'J', 'I', 'H', 'G', 'F', 'E', 'D', 'C', 'B', 'A' };
	vector<char>::iterator j = v1.begin();
	for (int i = 1; i < v1.size(); i++)
	{
		v1.erase(v1.begin() + i);
	}
	for (vector<char>::iterator i = v1.begin(); i != v1.end(); ++i)
		cout << *i << " ";
	sort(v2.begin(), v2.end());
	cout << endl;
	for (vector<char>::iterator i = v2.begin(); i != v2.end(); ++i)
		cout << *i << " ";
	cin.get();
	cin.get();
}