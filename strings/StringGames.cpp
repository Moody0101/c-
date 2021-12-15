#include <iostream>
#include <string>
#include <vector>
using namespace std;

class guessingGame {
private:
	string word = "Maverick";
	int counter = 0;
public:
	string name;
	string guess;
	guessingGame(string Name) {
		name = Name;
		cout << "Okay mr " << Name << " You have got only, 5 tries to guess" << endl;
	};
	play() {
		cout << "still have only " << 5 - counter << " Tries" << endl;
		cout << "What is the name I am thinking of : ";	
		cin >> guess;
		if(guess != word && counter < 4) {
			counter++;
			this->play();
		}
			
		else if (counter < 5)
			cout << "You won, " << this->name;
		else
			cout << "You lost, " << this->name;
	}
};



int main() {
	string name;
	cout << "What is you name! : ";	
	cin >> name;
	guessingGame firstGame = guessingGame(name);
	firstGame.play();
	// vector<int> x = {
	// 	1, 2, 4, 8, 9, 10, 19, 30
	// };
	// binsearch bin = binsearch(x);
	// bin.search(4);
	return 0;
}