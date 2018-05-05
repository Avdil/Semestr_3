#include<iostream> 
#include<vector> 
#include<algorithm> 
#include<string> 
#include<fstream> 
using namespace std;
struct book
{
	string name;
	string autor;
	string publish;
	int year;
	int key;
	int amaount_of_page;
};
book input(book &x);
void save(book y);
void print(book a);
void comparison(book &k);
vector<book> Sort(book a, book b);
int Count(vector<book> v1);
//int Del(vector<book> v1); 
void main()
{
	int x;
	book a, b;
	vector <book> v1;
	input(a);
	input(b);
	comparison(a);
	comparison(b);
	save(a);
	v1 = Sort(a, b);
	for (int i = 0; i < v1.size(); i++)
		print(v1[i]);
	cout << "Amount of book: " << Count(v1);
	cin.get();
	cin.get();
}
book input(book &x)
{
	cout << "Enter the book autor: " << endl;
	cin >> x.autor;
	cout << "Enter name of the book: " << endl;
	cin >> x.name;
	cout << "Enter publish of the book: " << endl;
	cin >> x.publish;
	cout << "Enter year of publishing: " << endl;
	cin >> x.year;
	cout << "Enter the shifr: " << endl;
	cin >> x.key;
	cout << "Enter amount of page of the book: " << endl;
	cin >> x.amaount_of_page;
	return x;
}
void save(book y)
{

	int id;
	ofstream fl("Information.txt");
	cout << "Enter the id: " << endl;
	cin >> id;
	if (id == y.key)
	{
		fl << y.name << ' ' << y.autor << ' ' << y.year << ' ' << y.amaount_of_page << ' ' << y.publish << endl;
		fl.close();
	}
}
void print(book a)
{
	cout << a.name << ' ' << a.autor << ' ' << a.year << ' ' << a.key << endl;
}
vector<book> Sort(book a, book b)
{
	vector<book> v1;
	if (a.year > b.year)
	{
		v1.push_back(a);
		v1.push_back(b);
	}
	else {
		v1.push_back(b);
		v1.push_back(a);
	}
	return v1;
}
void comparison(book &k)
{
	if (k.name[0] >= 'a' && k.name[0] <= 'z')
		k.name[0] += 'A' - 'a';
	if (k.autor[0] >= 'a' && k.autor[0] <= 'z')
		k.autor[0] += 'A' - 'a';
}
int Count(vector<book> v1) {
	string autor1;
	int count1 = 0;
	cout << "Enter author: " << endl;
	cin >> autor1;
	for (int i = 0; i < v1.size(); i++)
	{
		if (autor1 == v1[i].autor)
			count1++;
	}
	return count1;

}




























//int Del(vector<book> v1){ 
// string publish1; 
// cout << "Enter publish: " << endl; 
// cin >> publish1; 
// for (int i = 0; i < v1.size(); i++) 
// { 
// if (publish1 == v1[i].publish) 
// v1[i].erase(v1.begin(), v1.end()); 
// } 
// 
//}