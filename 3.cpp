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

//레퍼런스를 함수인자로 받기
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
	// 기존의 C와 같은 포인터 사용

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
	//ref가 arr를 참조 ref[0]~[2]가 arr[0]~[2]의 레퍼런스
	//pointer와 다르게 배열의 레퍼런스 참조시 반드시 배열의 크기를 명시
	//따라서 같은 크기와 자료형
	
	cout << ref[0] << ref[1] << ref[2] << endl << endl;

	int b = function();

	cout << "b : " << b;


	return 0;
}

// 참조자 사용시 불필요한 *, &를 제거할 수 있다.
// 레퍼런스는 반드시 정의와 함께 초기화
// 레퍼런스의 레퍼런스, 레퍼런스의 배열, 레퍼런스의 포인터는 존재할 수 없다.