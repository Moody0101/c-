#include <iostream> 
#include <vector>
#include <string>
#include <fstream>
using namespace std;

// class linear {
// public:
// 	vector<string> list;
// 	linear(vector<char[]> vec) {
// 		list = vec;
// 	}

// 	add_name(string element) {
// 		list.push_back(element);
// 	}
// 	search_for_name(string element) {
// 		cout << "hzello";
// 	}
// }

// class binsearch {
// public:
// 	vector<int> vec;
// 	binsearch(vector<int> Vector) {
// 		vec = Vector;
// 	};
// 	search(int number) {
// 		int high = this->vec.size();
// 		int low = 0;
// 		while(high > low) {
// 			int mid = (high + low) * 0.5;
// 			if (this->vec[mid] == number) {
// 				return mid;
// 			}
// 			else if (number > this->vec[mid]){
// 				low = mid + 1;
// 			} else if (number < this->vec[mid]){
// 				high = mid;
// 			};
// 		};
// 		return low;
// 	};
// };

int writetofile(vector<string> content, string fileName, char MODE_) {
	fstream File;
	switch(MODE_) {
		case 'a':
			File.open(fileName, ios_base::app);
		case 'w':
			File.open(fileName, ios_base::in);
		default:
			File.open(fileName, ios_base::in);
	}
	if(File.is_open()) {
		return EXIT_SUCCESS;
	}
	return 1;
}



int main() { 
    vector<int> a;
    for (int i = 1; i <=7 ; i++){
        a.push_back(i);
        cout << i << "\n"; 
    }
    fstream File;
    File.open("stats.txt", ios_base::app);
    File.close();
    return 0;
} 
