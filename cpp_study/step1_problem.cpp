#include <iostream>

int main(void) {

	int val1[100];
	int result = 0;

	std::cout << "1번째 정수 입력: \n";
	std::cin >> val1[0];
	std::cout << "2번째 정수 입력: \n";
	std::cin >> val1[1];
	std::cout << "3번째 정수 입력: \n";
	std::cin >> val1[2];
	std::cout << "4번째 정수 입력: \n";
	std::cin >> val1[3];
	std::cout << "5번째 정수 입력: \n";
	std::cin >> val1[4];

	for (int i = 0; i < 5; i++) {
		result += val1[i];
	}
	std::cout << "합계: " << result << std::endl;
	

}