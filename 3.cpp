#include <iostream>
using namespace std;

int change1_val(int p) {
	p = 3;

	return 0;
}

int change2_val(int* p) {
	*p = 3;

	return 0;	
}

//���۷����� �Լ����ڷ� �ޱ�
int change_val(int& p) {
	p = 3;

	return 0;
}

int function() {
	int a = 2;
	return a;
}


int main() {
	int number = 5;

	cout << "number : " << number << endl;
	change1_val(number);
	cout << "change1_number : " << number << endl;
	change2_val(&number);
	cout << "change2_number : " << number << endl << endl;
	// ������ C�� ���� ������ ���

	int n = 5;
	int& change_n = n;

	change_n = 3;
	cout << "n : " << n << endl;
	cout << "change_n : " << change_n << endl << endl;

	int num = 5;

	cout << "num : " << num << endl;
	change_val(num);
	cout << "changed_num : " << num << endl;

	int arr[3] = { 1, 2, 3 };
	int(&ref)[3] = arr;
	//ref�� arr�� ���� ref[0]~[2]�� arr[0]~[2]�� ���۷���
	//pointer�� �ٸ��� �迭�� ���۷��� ������ �ݵ�� �迭�� ũ�⸦ ���
	//���� ���� ũ��� �ڷ���
	
	cout << ref[0] << ref[1] << ref[2] << endl << endl;

	int b = function();

	cout << "b : " << b;


	return 0;
}

// ������ ���� ���ʿ��� *, &�� ������ �� �ִ�.
// ���۷����� �ݵ�� ���ǿ� �Բ� �ʱ�ȭ
// ���۷����� ���۷���, ���۷����� �迭, ���۷����� �����ʹ� ������ �� ����.