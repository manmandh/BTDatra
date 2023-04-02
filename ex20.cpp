#include <bits/stdc++.h>
using namespace std;

string SpaceString(string s) {
	string sAfterRemoveExtraSpaces;
	bool spaceCond = false;
	bool upperCond = true;
	for(int i = 0; i < s.length(); i++) {
		if (s[i] != ' ') {
			if (upperCond) {
				upperCond = false;
				sAfterRemoveExtraSpaces += toupper(s[i]);
			} else {
				sAfterRemoveExtraSpaces += toupper(s[i]);
			}
			spaceCond = true;
		} else if (spaceCond == true) {
			spaceCond = false;
			upperCond = true;
			sAfterRemoveExtraSpaces += s[i];
		}
	}
	return sAfterRemoveExtraSpaces;
}

int main() {
	string s ;
	getline(cin, s);
	cout << SpaceString(s);
}