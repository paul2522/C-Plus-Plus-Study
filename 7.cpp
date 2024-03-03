/*
	함수의 오버로딩
	같은 함수(이름)라도 인자가 다르면 사용가능
*/

#include <iostream>

void print(int x) {
	std::cout << "int : " << x << std::endl;
}
void print(char x) {
	std::cout << "chear : " << x << std::endl;
}
void print(double x) {
	std::cout << "double : " << x << std::endl;
}
void print(int x, int y) {
	std::cout << "int : " << x << " int : " << y << std::endl;
}


int main() {
	int a = 0, b = 1;
	char c = 'c';
	double d = 3.2;

	print(a);
	print(a, b);
	print(c);
	print(d);

	return 0;
}