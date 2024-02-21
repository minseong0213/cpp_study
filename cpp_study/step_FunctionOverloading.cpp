#include <iostream>

//함수 오버로딩
void MyFunc(void) {
	std::cout << "MYFUNC(void) called" << std::endl;
}
void MyFunc(char c) {
	std::cout << "MYFUNC(char c) called" << std::endl;

}
void MyFunc(int a, int b) {
	std::cout << "MyFunc(int a, int b) called" << std::endl;

}


int main(void) {
	MyFunc();
	MyFunc('a');
	MyFunc(12, 13);
	return 0;

}

