#include <iostream>

class Animal {
	private:
		int food;
		int weight;

	public:
		// ��ü �ڽ��� ���̹Ƿ� �׳� food, weight ���� �ȴ�.
		void set_animal(int _food, int _weight) {
			food = _food;
			weight = _weight;
		}
		void increase_food(int inc) {
			food += inc;
			weight += (inc / 3);
		}
		void view_stat() {
			std::cout << "�� ������ food     : " << food << std::endl;
			std::cout << "�� ������ weight   : " << weight << std::endl;
		}
};

int main() {
	Animal animal;
	animal.set_animal(100, 50);
	animal.increase_food(30);

	animal.view_stat();
	return 0;
}

/*
Animal Class ����
food, weight�� ����
set_animal, increase_food, view_stat �̶�� �Լ�
Animal class���� �̵��� ��Ī�� �� ��� ����, ��� �Լ���� ��.

private, public : ���� ������
private : ��ü ������ ��ȣ, �ڱ� ��ü �������� ���� ����, �ܺο����� ���� �Ұ�
public : �ܺο��� ��밡��, �Լ��� public�� �Ǿ������� �Լ� ��� ����
Ű���� ��� ���� ��� �⺻������ private
*/