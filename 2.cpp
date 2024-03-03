#include <iostream>

int main() {
	int arr[10];
	int *parr = arr;
	int i;
	int* pi = &i;
	char c;
	double d;
	float f;

	int sum = 0;
	for (int j = 1; j <= 10; j++) {
		sum += j;
	}
	std::cout << "1부터 10까지 합은 " << sum << "입니다." << std::endl;

	int j = 1;
	sum = 0;
	while (j <= 10) {
		sum += j;
		j++;
	}

	std::cout << "1부터 10까지 합은 " << sum << "입니다." << std::endl;

	int user_input = 0;

	while (user_input >= 0) {
		std::cout << "0이상의 값을 입력하세요.(음수 입력시 종료)" << std::endl;
		std::cin >> user_input;

		if (user_input >= 10)
		{
			std::cout << "입력하신 수는 " << user_input << "이며 10보다 크거나 같습니다." << std::endl;
		}
		else if (user_input > 5)
		{
			std::cout << "입력하신 수는 " << user_input << "이며 5보다 큽니다." << std::endl;
		}
		else if (user_input >= 0)
		{
			std::cout << "입력하신 수는 " << user_input << "이며 5보다 작거나 같습니다." << std::endl;
		}
		else
		{
			std::cout << "음수를 입력하였습니다, 프로그램을 종료합니다.";
			break;
		}
	}
	

	return 0;
}