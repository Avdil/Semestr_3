#include<iostream>
#include<deque>
#include<iterator>
#include<string>
#include<algorithm>
using namespace std;
void main()
{
	int n, m;
	cout << "Enter amount of friends of Anton: ";
	cin >> n;
	cout << "Enter amount of friends of Vika: ";
	cin >> m;
	deque<string> myDeq1(n);
	deque<string> myDeq2(m);
	deque<string> myDeq3;
	cout << "Friends of Anton : " << endl;
	for (int i = 0; i < n; i++)
		cin >> myDeq1[i];
	cout << "Friends of Vika : " << endl;
	for (int i = 0; i < m; i++)
		cin >> myDeq2[i];
	deque<string>::iterator it;
	sort(myDeq1.begin(), myDeq1.end());
	cout << "Friends of Anton is: " << endl;
	for (it = myDeq1.begin(); it < myDeq1.end(); it++)
		cout << *it << endl;
	cout << endl << endl;
	sort(myDeq2.begin(), myDeq2.end());
	cout << "Friends of Vika is: " << endl;
	for (it = myDeq2.begin(); it < myDeq2.end(); it++)
		cout << *it << endl;
	cout << endl << endl;
	merge(myDeq1.begin(), myDeq1.end(), myDeq2.begin(), myDeq2.end(), back_inserter(myDeq3));
	auto last = unique(myDeq3.begin(), myDeq3.end());
	myDeq3.erase(last, myDeq3.end());
	cout << "Common list of friends: " << endl;
	for (it = myDeq3.begin(); it < myDeq3.end(); it++)
		cout << *it << endl;
	cin.get();
	cin.get();
}
