#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <map>

using namespace std;

int main() {

	string J, S;
	map<char, int> mapping;

	int ans=0;

	cin >> J >> S;

	for (int i = 0; i < J.length(); ++i)
	{
		mapping.insert( pair<char,int>(J[i],1) );
	}

	for (int i = 0; i < S.length(); ++i)
	{
		if(mapping.find(S[i])->second == 1) 
		{
			++ ans;			
		}
	}

	cout << ans;

	return 0;
}