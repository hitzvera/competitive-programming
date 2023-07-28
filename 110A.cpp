#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
	string s;
	int lucky_number = 0;

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '4' || s[i] == '7')
		{
			lucky_number++;
		}
	}

	string lucky_number_string = to_string(lucky_number);

	for (int i = 0; i < lucky_number_string.length(); i++)
	{
		if (lucky_number_string[i] != '4')
		{
			if (lucky_number_string[i] != '7')
			{
				cout << "NO";
				return 0;
			}
		}
	}

	cout << "YES";
	return 0;
}
