#include <iostream>
#include "header1.h"
#include "header2.h"

//namespace header1 {
//	int func() {
//		foo();			//header1�� foo
//		header2::foo();	//header2�� foo
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
// header1�� foo�� �� ���̴�.

using namespace header1;
using namespace std;

int main()
{
	cout << "Practice start" << endl;
	bar(); // using�� ���ؼ� header 1�� �ִ� �Լ��� ȣ��
	
	header2::bar(); // header2�� foo

	return 0;
}