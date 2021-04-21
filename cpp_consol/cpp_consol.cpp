// cpp_consol.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<thread>

using namespace std;

void f1();

void foo()
{
	for (int i = 0; i < 100; i++)
	{
		cout << "i = " << i << "\n";
	}
}

void foo2()
{
	for (int i = 0; i < 100; i++)
	{
		cout << "b = " << i << "\n";
	}
}


int main()
{
	int n;
	std::cout << "Hello C++\n";

	std::thread first(foo);
	std::thread sec(foo2);


	first.join();
	sec.join();


	f1();


    return 0;
}

void f1()
{
	cout << "f1 - start"<<"\n";
}