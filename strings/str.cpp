#include <iostream>
#include <string>

using namespace std;

/*

- The string Methods and funcs:
consider S => a string
sizeof(S) { return "S size in bytes" }
S.length() { return "the N of chars in S"}
S[S.length() - 1] => getting the last char.
to compare two strings we use the "==" or "!=" operators as follows:
(S == S) => returns True becuase indeed they are the same
(S != S) => returns False because they are not different
S.find(key, n) => looks for a string's (key) pos starting from the nth pos,
if not supplied 0 is assumed 
S.substr(start, length) => returns a substring
S.replace(start, n, str2) => removes the content starting from the star  
S.insert(start, str2) => inserts str2 at position start within str1

*/

int main() {
	string Name = "Moody";
	string Number = "1";
	cout << Name.substr(0, 2) << endl;
	cout << Name.find("o") << endl;
	cout << Name;
	return 0;
}