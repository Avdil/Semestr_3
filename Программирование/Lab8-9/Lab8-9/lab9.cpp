#include<iostream> 
#include<vector> 
#include<deque> 
#include<list> 
#include<stack> 
#include<queue> 
#include<iterator> 
#include<algorithm>  
using namespace std;
void main()
{
	char number;
	vector <int > ::iterator i;
	deque<int>::iterator j;
	vector<int> v{ 2, 5, -2, 11 };
	deque<int> d{ 4, 67, -2, 55, 1 };
	list<int >l;
	stack < int, vector<int>>s;
	queue<int, deque<int>> qq;
	priority_queue<int> qqq;
	do {
		cout << "1. Vector " << endl;
		cout << "2. Deque " << endl;
		cout << "3. List " << endl;
		cout << "4. Stack " << endl;
		cout << "5. Queue " << endl;
		cout << "6. Heap " << endl;
		cout << "0. Exit " << endl;
		cout << "Enter number of command: ";
		cin >> number;
		switch (number) {
		case '1':
			cout << "Our vector is: " << endl;
			for (i = v.begin(); i < v.end(); i++)
				cout << *i << " ";
			cout << endl;
			v.push_back(100);
			cout << "Our vector after adding new element: " << endl;
			for (i = v.begin(); i < v.end(); i++)
				cout << *i << " ";
			cout << endl;
			v.pop_back();
			cout << "We remove last element: " << endl;
			for (i = v.begin(); i < v.end(); i++)
				cout << *i << " ";
			cout << endl;
			cout << "Size of vector is: " << v.size() << endl;;
			cout << endl << endl;
			break;
		case '2':
			cout << "Our deque is: " << endl;
			for (j = d.begin(); j < d.end(); j++)
				cout << *j << " ";
			d.push_back(111);
			d.push_front(0);
			cout << endl;
			cout << "We add to begin and end new elements: " << endl;
			for (j = d.begin(); j < d.end(); j++)
				cout << *j << " ";
			cout << endl;
			d.pop_back();
			d.pop_front();
			cout << "We remove first and last element: " << endl;
			for (j = d.begin(); j < d.end(); j++)
				cout << *j << " ";
			cout << endl;
			cout << "Size of deque is: " << d.size() << endl;
			cout << endl << endl;
			break;
		case '3':
			for (int i = 0; i < 5; i++)
				l.push_back(i);
			cout << "Elements of list is: " << endl;
			copy(l.begin(), l.end(), ostream_iterator<int>(cout, " "));
			cout << endl;
			l.pop_back();
			cout << "We remove last element: " << endl;
			copy(l.begin(), l.end(), ostream_iterator<int>(cout, " "));
			cout << endl;
			cout << "Size of list is: " << l.size() << endl;
			cout << endl << endl;
			break;
		case '4':
			for (int i = 0; i < 7; i++)
				s.push(i);
			int x;
			x = s.top();
			cout << "Element at the top is : " << x << endl;
			cout << "Size of stack is: " << s.size() << endl;
			cout << "Element of our stack is: " << endl;
			while (!s.empty())
			{
				cout << s.top() << " ";
				s.pop();
			}
			cout << endl << endl;
			break;
		case '5':
			for (int i = 0; i < 5; i++)
				qq.push(i);
			cout << "After adding first element is : " << qq.front() << ", last element is: " << qq.back() << endl;
			qq.pop();
			cout << "Size of queue is : " << qq.size() << endl;
			cout << endl << endl;
			break;
		case '6':
			qqq.push(12);
			qqq.push(111);
			qqq.push(-3);
			int y;
			y = qqq.top();
			cout << "Element at the top is : " << y << endl;
			cout << "Size of priority queue is : " << qqq.size() << endl;
			while (!qqq.empty()) {
				cout << qqq.top() << " ";
				qqq.pop();
			}
			cout << endl << endl;
			break;
		case '0': break;
		default: cout << endl << "Error!" << endl;
			break;
		}
	} while (number != '0');
	cin.get();
	cin.get();
}