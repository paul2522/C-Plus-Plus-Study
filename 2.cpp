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
	std::cout << "1���� 10���� ���� " << sum << "�Դϴ�." << std::endl;

	int j = 1;
	sum = 0;
	while (j <= 10) {
		sum += j;
		j++;
	}

	std::cout << "1���� 10���� ���� " << sum << "�Դϴ�." << std::endl;

	int user_input = 0;

	while (user_input >= 0) {
		std::cout << "0�̻��� ���� �Է��ϼ���.(���� �Է½� ����)" << std::endl;
		std::cin >> user_input;

		if (user_input >= 10)
		{
			std::cout << "�Է��Ͻ� ���� " << user_input << "�̸� 10���� ũ�ų� �����ϴ�." << std::endl;
		}
		else if (user_input > 5)
		{
			std::cout << "�Է��Ͻ� ���� " << user_input << "�̸� 5���� Ů�ϴ�." << std::endl;
		}
		else if (user_input >= 0)
		{
			std::cout << "�Է��Ͻ� ���� " << user_input << "�̸� 5���� �۰ų� �����ϴ�." << std::endl;
		}
		else
		{
			std::cout << "������ �Է��Ͽ����ϴ�, ���α׷��� �����մϴ�.";
			break;
		}
	}
	

	return 0;
}