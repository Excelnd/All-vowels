// all vowels.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i, n;
	string s;
	cin >> n >> s ;
	int countA=0, countE=0, countI=0, countO=0, countU=0;
	for (i = 0; i < n; i++)
	{
		if (s[i] == 'a')
			countA++;
		if (s[i] == 'e')
			countE++;
		if (s[i] == 'i')
			countI++;
		if (s[i] == 'o')
			countO++;
		if (s[i] == 'u')
			countU++;
	}
	if (countA > 0 && countE > 0 && countI > 0 && countO > 0 && countU > 0)
		cout << "YES";
	else
		cout << "NO" ;

    return 0;
}

