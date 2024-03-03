#include <iostream>

class Date {
    int year_;
    int month_;  // 1 부터 12 까지.
    int day_;    // 1 부터 31 까지.

public:
    void ShowDate();
    
    //기본 생성자
    Date() {
        std::cout << "기본 생성자 호출!" << std::endl;
        year_ = 2024;
        month_ = 3;
        day_ = 3;
    }
    //생성자
    Date(int year, int month, int day) {
        std::cout << "인자 3 개인 생성자 호출!" << std::endl;
        year_ = year;
        month_ = month;
        day_ = day;
    }
};

void Date::ShowDate() {
    std::cout << "오늘은 " << year_ << " 년 " << month_ << " 월 " << day_
        << " 일 입니다 " << std::endl;
}
int main() {
    Date day = Date();
    Date day2(2012, 10, 31);

    day.ShowDate();
    day2.ShowDate();

    return 0;
}