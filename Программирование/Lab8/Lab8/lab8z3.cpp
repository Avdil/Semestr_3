#include<iostream> 
#include <vector>
#include<algorithm> 
using namespace std;
void main()
{
	int mas[]{ 1, 1, 1, 2, 2, 3, 1, 4, 4, 2 };
	vector<int> v(mas, mas + 10);
	sort(v.begin(), v.end());
	for (vector<int>::iterator i = v.begin(); i != v.end(); ++i)
		cout « *i « " ";
	cout « endl;
	v.erase(unique(v.begin(), v.end()), v.end());
	for (vector<int>::iterator i = v.begin(); i != v.end(); ++i)
		cout « *i«" ";
	cin.get();
	cin.get();
}
