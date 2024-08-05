#include <iostream>
#include <fstream>
#include <string>

using namespace std;




// RNN 으로 특정 단어가 어떤 언어인지 예측하기.




int main()
{
	string line;
	ifstream file("C:\\Users\\ecmdev\\Documents\\visual studio 2015\\Projects\\RNN\\names\\Arabic.txt");

	if (file.is_open()) {
		while (getline(file, line)) {
			cout << line << endl;
		}
		file.close();
	}
	else {
		cout << " XX ";
		return 1;

	}
	return 0;




}