#include <string>
#include "Student.h"
Student::Student()
{
}
Student::~Student()
{
}
void Student::set_name(std::string student_name)
{
	Student::name = student_name;
}
std::string Student::get_name()
{
	return Student::name;
}
void Student::set_scores(int scores[])
{
	for (int i = 0; i < 5; ++i) {
		Student::scores[i] = scores[i];
	}
}

void Student::set_average(double ball)
{
	Student::average = ball;
}


double Student::get_average()
{
	return Student::average;
}
