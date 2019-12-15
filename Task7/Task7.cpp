#include <iostream>
#include <string>
#include <sstream>
#include <Windows.h>

std::string Input(std::string str);
int Amount(std::stringstream& str);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string str;
	std::stringstream words(Input(str));
	std::cout << "Количество слов с одной буквой в начале и в конце: " << Amount(words) << std::endl;
	system("PAUSE");
	return 0;
}

std::string Input(std::string str) {
	std::cout << "Введите текст: ";
	std::getline(std::cin, str);
	return str;
}

int Amount(std::stringstream& str) {
	int amount = 0;
	std::string word;
	while (str >> word) {
		if (word[0] == word[word.size() - 1])
			amount++;
	}
	return amount;
}