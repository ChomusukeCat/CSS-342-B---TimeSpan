#include "TimeSpan.h"
#include <iostream>
using namespace std;
int main()
{
	//Constructor Tests
	cout << "---Constructor Tests---" << endl;
	TimeSpan full_time1(1.5, 4, -10);
	TimeSpan min_sec1(5, 5);
	TimeSpan sec1(20.5);
	TimeSpan empty;

	cout << "Full Time: " << full_time1 << endl;
	cout << "Min, Sec: " << min_sec1 << endl;
	cout << "Sec: " << sec1 << endl;
	cout << "empty: " << empty << endl;

	//getters Tests

	cout << "---Getters/Setters Tests---" << endl;
	int get_hour = full_time1.getHours();
	int get_min = full_time1.getMinutes();
	int get_sec = full_time1.getSeconds();
	TimeSpan set_time_test;
	bool set_test = set_time_test.setTime(1, 1, 1);

	cout << get_hour << endl;
	cout << get_min << endl;
	cout << get_sec << endl;
	cout << set_test << endl;
	cout << set_time_test << endl;

	//Arithmetic Op Tests
	cout << "---Arithmetic Op Tests---" << endl;
	TimeSpan unary_neg_test(-10, -10, -10);
	TimeSpan add_test_time2(2, 3);
	TimeSpan add_test_time1(1, 2, 3);
	TimeSpan add_test = add_test_time1 + add_test_time2;

	TimeSpan sub_test_time1(4, 4, 4);
	TimeSpan sub_test_time2(3, 3, 3);
	TimeSpan sub_test = sub_test_time1 - sub_test_time2;
	add_test_time1 += add_test_time2;
	sub_test_time1 -= sub_test_time2;

	cout << "Unary Neg. Full Time: " << -full_time1 << endl;
	cout << "Unary Neg. Full Time2: " << -unary_neg_test << endl;
	cout << "+= Test: " << add_test_time1 << endl;
	cout << "+ Test: " << add_test << endl;
	cout << "-= Test: " << sub_test_time1 << endl;
	cout << "- Test: " << sub_test << endl;

	//Compare Op Tests
	cout << "---Compare Op Tests---" << endl;
	TimeSpan equals_test1(7, 0, 0);
	TimeSpan equals_test2(7, 0, 0);
	TimeSpan equals_test3(7, 0, 1);
	bool e1 = equals_test1 == equals_test2;
	bool e2 = equals_test1 == equals_test3;
	TimeSpan not_equals_test1(8, 0, 0);
	TimeSpan not_equals_test2(8, 1, 1);
	TimeSpan not_equals_test3(8, 0, 0);
	bool n1 = not_equals_test1 != not_equals_test2;
	bool n2 = not_equals_test1 != not_equals_test3;

	cout << "Equals Test1: " << e1 << endl;//1
	cout << "Equals Test2: " << e2 << endl;//0
	cout << "Not Equals Test1: " << n1 << endl;//1
	cout << "Not Equals Test2: " << n2 << endl;//0

	//inStream Overload Test
	cout << "---inStream Overload Test---" << endl;
	TimeSpan in_test;
	cin >> in_test;
	cout << in_test << endl;
}