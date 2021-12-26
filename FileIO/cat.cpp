#include <iostream>
#include <fstream>
#include <string>
#include <vector>


// std::vector<char>* Readtovec() {
// 	File.std::vector<char> v;
// 	if (FILE *fp = fopen("filename", "r"))
// 	{
// 		char buf[1024];
// 		while (size_t len = fread(buf, 1, sizeof(buf), fp))
// 			v.insert(v.end(), buf, buf + len);
// 		fclose(fp);
// 	}
// }

int main(const int argvlen, const char** argv) {
	std::fstream File;
	char BUFFER[1024];
	if (argvlen == 2) {
		std::cout << "File : " << argv[1] << " was opened" << std::endl;
		File.open(argv[1], std::ios_base::in);
		while(File)
			File >> BUFFER;
			File += 1;
		std::cout << BUFFER;
		File.close();
	}
}
