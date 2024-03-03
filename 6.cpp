#include <iostream>

class Animal {
	private:
		int food;
		int weight;

	public:
		// 객체 자신의 것이므로 그냥 food, weight 쓰면 된다.
		void set_animal(int _food, int _weight) {
			food = _food;
			weight = _weight;
		}
		void increase_food(int inc) {
			food += inc;
			weight += (inc / 3);
		}
		void view_stat() {
			std::cout << "이 동물의 food     : " << food << std::endl;
			std::cout << "이 동물의 weight   : " << weight << std::endl;
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
Animal Class 생성
food, weight의 변수
set_animal, increase_food, view_stat 이라는 함수
Animal class에서 이들을 지칭할 때 멤버 변수, 멤버 함수라고 함.

private, public : 접근 지시자
private : 객체 내에서 보호, 자기 객체 내에서만 접근 가능, 외부에서는 접근 불가
public : 외부에서 사용가능, 함수가 public가 되어있으니 함수 사용 가능
키워드 명시 없을 경우 기본적으로 private
*/