#include <iostream>
using namespace std;
class sum
{
	int a, b;
public:

	void vvod()
	{
		cout << "Enter a: ";
		cin >> a;
		cout << "Enter b: ";
		cin >> b;
	}
	int summa()
	{
		return a + b;
	}
};
void main()
{
	sum P;
	P.vvod();
	cout << "Sum is: " << P.summa();
	cin.get();
	cin.get();
}