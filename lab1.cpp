//Raymundo Ayala
#include<iostream>
#include<iomanip>

using namespace std;

bool checkWord(string word);

int main(int argc, char* argv[])
{
	string words[6] = {"a", "aardvark", "book", "fall", "abcdddddd", "test"};
	string word;
	bool check = true;
	
    do {
		if (argc > 1) {
			for (int i = 0; i < argc; i++) {
				if (strcmp(argv[i], "test")) {
					for (int i = 0; i < 6; i++) {
						bool check = checkWord(words[i]);
						if (check)
							cout << setw(10) << words[i] << setw(10) << " " << setw(10) << "-true " << endl;
						else
							cout << setw(10) << words[i] << setw(10) << " " << setw(10) << "-false " << endl;
					}
				}

			}
			break;
		}
		else {
			cout << "Please enter a word: ";
			cin >> word;
			check = checkWord(word);
			if (check)
				cout << "Word has two consecutive letters that are the same\n";
		}
	} while(!check);


	return 0;
}

bool checkWord(string word)
{
	bool hasDbl = false;

	for (int i = 0; i < word.length() - 1; i++) {
		if (word[i] == word[i + 1]) {
			hasDbl = true;
			break;
		}
	}
	return hasDbl;
}