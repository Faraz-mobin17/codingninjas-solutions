#include <iostream>
#include <cstring>
using namespace std;
void removeDuplicatesEl(char str[])
{
	int i = 0, j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == str[i + 1])
		{
			i++;
		}
		else
		{
			str[j] = str[i];
			i++;
			j++;
		}
	}
	str[j] = '\0';
}
int main()
{
	int size = 1e6;
	char str[size];
	cin >> str;
	removeDuplicatesEl(str);
	cout << str;
	return 0;
}
