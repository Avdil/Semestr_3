#include<iostream>
#include<string>
#include<deque>
#include<algorithm>
using namespace std;
void main()
{
	deque<string> str = { "What "," is "," your "," name","?"};
	string my_name = { "Salika" };
	for (deque<string>::iterator i = str.begin(); i != str.end(); ++i)
		cout << *i;
	str.push_back("!");
	str.erase(str.end() - 2);
	swap(str[1], str[3]);
	for (int i = 0; i < str.size(); i++)
		cout << str[i];
	str.erase(str.begin());
	str.erase(str.begin()+1);
	str.push_front("My ");
	str.insert(str.begin() + 3, 1, my_name);
	for (int i = 0; i < str.size(); i++)
		cout << str[i];
	cin.get();
	cin.get();
}