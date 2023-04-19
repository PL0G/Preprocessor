#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Foo.h"



#define PI 3.14
#define E 2.71

#define forever for (int fori =0;;fori++)
#define begin {
#define end }

#define sum(a, b) a + b
#define print_arr(arr,len) std::cout<<'[';\
for(int i=0;i<len;i++)\
	std::cout<< arr[i]<<", ";\
std::cout<<"\b\b]\n"


#define num 0

#if num < 0

void func() {
	std::cout << "Hello world!\n";
}

#elif num > 0
void func() {
	std::cout << "WOW!\n";
}


#else
void func() {
	std::cout << "Bye world!\n";
}
#endif


#ifndef num
int L = 10;
#else 
int L = 20;
#endif












int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;
	//Объекты препроцессора
	/*
	std::cout << "PI = " << PI << "\n";
	std::cout << "E = " << E << "\n";
	forever{
		std::cout << '.';
		if (fori >= 10)
			break;
	}
	*/

	//Макросы препроцессора
	/*
	std::cout << "Введите два числа ->";
	std::cin >> n >> m;
	std::cout << n << " + " << m << " = " << sum(n, m) << "\n";

	const int size = 5;
	int arr[size]{ 10,20,30,40,50 };
	print_arr(arr, size);

	std::cout << PI << '\n';

#undef PI
	
	//std::cout << PI << '\n';//Ошибка, т.к. имя PI освобождено
#define PI 3
	std::cout << PI << '\n';
	*/



	func();

	std::cout << L << '\n';
	return 0;
}