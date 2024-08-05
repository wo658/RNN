#include <iostream>
#include <fstream>
#include <string>

using namespace std;




// RNN 으로 특정 단어가 어떤 언어인지 예측하기.

// 1 . RNN Dataset 읽어 와서 각 언어별로 분류하기

// 1 - 1 . 
// 2 . RNN 구조 구축
// 2 - 1 . 

// 3 . RNN 학습 진행
// 4 . 모델 평가


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