#include <iostream>
#include<string>
using namespace std;
const int n = 4;
const int z = 5;
int Max(int a, int b);
int Max(int k, int l,int  m);
double Max(double c, double d);
string Max(string ch, string ch1);
int Max(int A[], int n);
char Max(char *B, int m);
void main()
{
	int a, b, k, l, m, A[n] = { 4, 12, -23, 11 };
	char B[z] = { 'a', '!', '.', 'c' ,'x'};
	string ch, ch1;
	double c=21.4, d=12.5;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout <<"Max is: "<< Max(a, b)<<endl;
	cout << "Enter k: ";
	cin >> k;
	cout << "Enter l: ";
	cin >> l;
	cout << "Enter m: ";
	cin >> m;
	cout << "Max with three numbers: " << Max(k, l, m)<<endl;
	cout << "Max is: " << Max(c, d)<<endl;
	cout << "Enter first string: ";
	cin >> ch;
	cout << "Enter second string: ";
	cin >> ch1;
	cout << " Max is : " << Max(ch, ch1)<<endl;
	cout<<"Max is: " << Max(A, n)<<endl;
	cout << "Max is : " << Max(B, m);
	cin.get();
	cin.get();
}
int Max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
int Max(int k, int l, int m){
	if (k > l){
		if (k > m)
			return k;
	}
	else{
		if (m > l)
			return m;
		else
			return l;
	}
	
}
double Max(double c, double d){
	if (c>d)
		return c;
	else
		return d;
}
string Max(string ch, string ch1){
	if (ch.size() > ch1.size())
		return ch;
	else
		return ch1;
}
int Max(int A[], int n){
	int max = A[0];
	for (int i = 0; i < n; i++)
	{
		if (A[i]>max)
			max = A[i];
	}
	return max;
}
char Max(char *B, int z){
	char max = B[0];
	for (int i = 0; i < z; i++)
	{
		if (B[i]> max)
			max = B[i];
}
	return max;

}