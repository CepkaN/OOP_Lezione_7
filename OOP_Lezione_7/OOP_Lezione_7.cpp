#include<iostream>
#include<vector>
#include<string>
#include"Linked.h"


class Digit {
public:    //  надо сделать protected
	int _data;
public:
	Digit(int data) :_data(data) {}

	int operator+(Digit&digit) {
		return _data + digit._data;
	}
	/*int Foo(Digit& digit) {
		return _data + digit._data;
	}*/

	int operator-(Digit&digit) {
		//if (digit._data = 5) {
		//	std::cout << "Bebebe";
		//	return 0;
		//}
		if (_data < digit._data)
			return digit._data - _data;
		return _data - digit._data;
	}
	int operator+(int data) {
		return _data - data;
	}
	std::string operator+(std::string str) {
		return "brrrrr";
	}
};

class Digit2 :public Digit{
private:
	int _data2;
public:
	Digit2(int data2) :Digit(data2) {}

	int operator+(Digit& digit) {
		return _data2 / digit._data;
	}
};
int main() {
	setlocale(LC_ALL, "Russian");
	// Перегрузка операторов.

	Digit digit(5);
	Digit digit2(10);
	std::cout << digit.operator+(digit2) << '\n';
	std::cout << digit.operator-(digit2) << '\n';

	std::cout << digit + digit2 << '\n';// то же самое, что первый вариант
	std::cout << digit - digit2 << '\n';
	std::cout << digit.operator+(33) << '\n';   // выводит -28
	std::cout << digit + 33 << '\n';  // выводит -28
	std::cout << digit + "slovo" << '\n';  // выводит brrrrr

	Digit2 digit22(100);
	std::cout << digit22 + digit << '\n';  // -171798692 выводится если класс с другим классом

	std::cout << "\n\n";

	// Linked List
	LinkedList list;
	list.Push_back(45);
	list.Push_back(7567);
	list.Push_back(565);
	list.Push_back(98);
	list.Push_back(111);
	list.Push_back(65);
	list.Push_back(676);
	list.Push_back(120);
	list.ShowList();

	std::cout << '\n';

	std::cout << list.SearchByIndex(3)->GetData() << "\n\n";   // выводится третий элемент

	list.PushByIndex(0, 3);
	list.ShowList();




	return 0;
}