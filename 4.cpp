#include <iostream>

int main() {
	int* p = new int;
	*p = 10;

	std::cout << *p << std::endl;

	delete p;

	int arr_size;
	std::cout << "�迭 ũ�� �Է� : ";
	std::cin >> arr_size;
	int* arr_list = new int[arr_size];
	std::cout << "�迭�� ������ �Է� : ";
	for (int i = 0; i < arr_size; i++) {
		std::cin >> arr_list[i];
	}
	//���
	for (int i = 0; i < arr_size; i++) {
		std::cout << "�迭�� " << i << "��° ���� " << arr_list[i] << std::endl;
	}

	delete[] arr_list;

	return 0;
}

//C����� malloc�� free�� ������ �ϴ� new, delete