#include <iostream>
#include "header1.h"
#include "header2.h"

//namespace header1 {
//	int func() {
//		foo();			//header1의 foo
//		header2::foo();	//header2의 foo
//		return 0;
//	}
//}
//
//int func2()
//{
//	header1::foo();
//	return 0;
//}

//using header1::foo;
// header1의 foo만 쓸 것이다.

using namespace header1;
using namespace std;

int main()
{
	cout << "Practice start" << endl;
	bar(); // using을 통해서 header 1에 있는 함수를 호출
	
	header2::bar(); // header2의 foo

	return 0;
}