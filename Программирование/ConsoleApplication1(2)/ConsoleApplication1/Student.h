#pragma once
#include<string>
class Student
{
private:
	int scores[5];
	double average;
	std::string name;
public:
	Student();
	void set_name(std::string);
	std::string get_name();
	void set_scores(int[]);
	void set_average(double);
	double get_average();
	~Student();
};