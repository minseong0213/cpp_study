#include <iostream>

int main(void) {
	//출력 std::cout << 
	int num = 20;
	std::cout << "Hello world!" << std::endl;
	std::cout << "Hello" << "world!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	std::cout << 1 << 2 << 3 << 4 << 5;
	std::cout << 6 << 7 << 8;

	//입력 std::cin >>
	double val1;
	std::cout << "첫 번째 숫자입력: ";
	std::cin >> val1;

	double val2;
	std::cout << "두 번째 숫자입력: ";
	std::cin >> val2;

	double result = val1 + val2;
	std::cout << "덧셈결과: " << result << std::endl;
	int val1 , val2;
	int result = 0;
	std::cout << "두개의 숫자입력:";
	std::cin >> val1 >> val2;

	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++)
			result += i;
		
	}
	else {
		for (int i = val2 + 1; i < val1; i++) 
			result += i;
	}
	std::cout << "두 수 사이의 정수 합: " << result << std::endl;

	//배열 기반의 문자열 입출력
	char name[100];
	char lang[200];

	std::cout << "이름은 무엇입니까? ";
	std::cin >> name;

	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요? ";
	std::cin >> lang;

	std::cout << "내 이름은 " << name << "입니다.\n";
	std::cout << "제일 좋아하는 언어는 " << lang << "입니다. " << std::endl;

	

	return 0;
}