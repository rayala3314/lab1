//Raymundo Ayala
#include<iostream>
#include<iomanip>

using namespace std;

bool checkWord(string word);

int main()
{
	string words[6] = {"a", "aardvark", "book", "fall", "abcdddddd", "test"};
	string word;
	bool check = true;
	
    do {
    	cout << "Enter 'test' to test the program";
		cout << "\nPlease enter a word: ";
		cin >> word;
		check = checkWord(word);
	
        if (check)
			cout << "Word has two consecutive letters that are the same\n";
		if (word == "test") {

			for (int i = 0; i < 6; i++) {
				bool check = checkWord(words[i]);
				if (check)
					cout << setw(10) << words[i] << setw(10) << " " << setw(10) << "-true " << endl;
				else
					cout << setw(10) << words[i] << setw(10) << " " << setw(10) << "-false " << endl;
			}
			break;
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