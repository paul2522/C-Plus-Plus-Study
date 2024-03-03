#include <iostream>

class Marine {
	int hp;
	int coord_x, coord_y;
	int damage;
	bool is_dead;

	public:
		Marine();
		Marine(int x, int y);

		int attack();
		void be_attacked(int damaged_earn);
		void move(int x, int y);

		void show_status();
};
//생성자
Marine::Marine() {
	hp = 50;
	coord_x = 0;
	coord_y = 0;
	damage = 5;
	is_dead = false;
}
//좌표 인자 넣은 생성자
Marine::Marine(int x, int y) {
	coord_x = x;
	coord_y = y;
	hp = 50;
	damage = 5;
	is_dead = false;
}
void Marine::move(int x, int y) {
	coord_x = x;
	coord_y = y;
}
int Marine::attack() {
	return damage;
}
void Marine::be_attacked(int damage_earn) {
	hp -= damage_earn;
	if (hp <= 0) is_dead = true;
}
void Marine::show_status() {
	std::cout << " *** Marine *** " << std::endl;
	std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) " << std::endl;
	std::cout << " HP : " << hp << std::endl;
}

int main() {
  //Marine marine1(2, 3);
  //Marine marine2(3, 5);

  //marine1.show_status();
  //marine2.show_status();

  //std::cout << std::endl << "마린 1 이 마린 2 를 공격! " << std::endl;
  //marine2.be_attacked(marine1.attack());

  //marine1.show_status();
  //marine2.show_status();

	Marine* marines[100];

	marines[0] = new Marine(2, 3);
	marines[1] = new Marine(3, 5);

	marines[0]->show_status();
	marines[1]->show_status();

	std::cout << std::endl << "마린 1 이 마린 2 를 공격! " << std::endl;

	marines[0]->be_attacked(marines[1]->attack());

	marines[0]->show_status();
	marines[1]->show_status();

	delete marines[0];
	delete marines[1];
}

