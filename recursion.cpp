#include <iostream>
using namespace std;

int digitSum(int num)
{
	int sum = 0;

	if (num == 0)
	{
		return num;
	}

	sum += (num % 10) + digitSum(num / 10);

	return sum;
}

int main()
{
	cout << digitSum(99) << endl;		
	cout << digitSum(256) << endl;		
	cout << digitSum(2019) << endl;		
	cout << digitSum(666) << endl;		
	cout << digitSum(56) << endl;		
}
