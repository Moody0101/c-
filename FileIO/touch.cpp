#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int touch(string NAME) {
	fstream File;
	if(File) {
		File.open(NAME, ios_base::out);
		File.write(" ", 1);
		cout << "[*] The file " << NAME << " Was successfully created!";
		return 0;
	};
	cout << "[!] The file was not created!!!";
	File.close();
	return 1;
}

int main(const int arglen, const char** argv) {
	if (arglen < 2) {
		cout << "\n";
		cout << "==> Command to create files \n";
		cout << "==> USAGE: touch <FILENAME> or touch <FILENAME>\n";
	}
	if(arglen == 2) {
		if((string) argv[1] == "--help" || (string) argv[1] == "-h" || (string) argv[1] == "help") {
			cout << "\n";
			cout << "==> Command to create files \n";
			cout << "==> USAGE: touch <FILENAME> or touch <FILENAME>\n";
		}
		else {
			touch(argv[1]);
		}
		
	}
	else {
		for(int i = 1; i < arglen;i++) {
			touch(argv[i]);
		}
	}
	return 0;
}