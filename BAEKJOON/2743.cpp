#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	char str[101];
	int i = 0;
	scanf("%s", str);

	while (str[i++] != '\0');

	cout << i - 1;

	return 0;
}