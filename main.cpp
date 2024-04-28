#include <iostream>
using namespace std;

// цикл do while

int main()
{
	//тут цикл в любом случае сработает хоть один раз
	int a = 0;
	do 
	{
		cout << a << endl;
	} while (++a<=10);
}