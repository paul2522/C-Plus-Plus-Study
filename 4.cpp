#include <iostream>

int main() {
	int* p = new int;
	*p = 10;

	std::cout << *p << std::endl;

	delete p;

	int arr_size;
	std::cout << "배열 크기 입력 : ";
	std::cin >> arr_size;
	int* arr_list = new int[arr_size];
	std::cout << "배열의 데이터 입력 : ";
	for (int i = 0; i < arr_size; i++) {
		std::cin >> arr_list[i];
	}
	//출력
	for (int i = 0; i < arr_size; i++) {
		std::cout << "배열의 " << i << "번째 값은 " << arr_list[i] << std::endl;
	}

	delete[] arr_list;

	return 0;
}

//C언어의 malloc과 free의 역할을 하는 new, delete