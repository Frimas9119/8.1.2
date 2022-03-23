#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

char* Count(char* str, char* s)
{
	int z = 0;
	for (int i = 0; i < 102;i++) {
		if (s[z] == str[i]&& s[z+1]==str[i+1]) {
			z++;
			str[i] = '*';
			str[i+1] = '*';
		}
	}
	return str;
}

int main()
{

	char str[101];
	char s1[] = "while";
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	char* dest = new char[151];
	dest = Count(str,s1);
	cout << "Modified string : " << dest << endl;
	return 0;
}