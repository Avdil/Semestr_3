#include<iostream>
#include<conio.h>
#include<string>
#include "Student.h"

using namespace std;
int main()
{
	Student obj;
	string name;
	int s;
	cout << "Enter amount student: ";
	cin >> s;
	for (int i = 0; i < s; i++)
	{
		cout << "Name is : ";
		cin >> name;
		obj.set_name(name);
		int scores[5];
		int sum = 0;
		for (int i = 0; i < 5; i++)
		{
			cout << "Score " << i + 1 << ":";
			cin >> scores[i];
			sum = sum + scores[i];
		}
		obj.set_scores(scores);
		double average = sum / 5.0;
		obj.set_average(average);
		cout << "Average for " << obj.get_name() << " is  " << obj.get_average() << endl;
	}
	_getch();
	return 0;
}
