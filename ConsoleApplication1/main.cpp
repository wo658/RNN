#include <iostream>
#include <fstream>
#include <string>

using namespace std;




// RNN ���� Ư�� �ܾ � ������� �����ϱ�.

// 1 . RNN Dataset �о� �ͼ� �� ���� �з��ϱ�

// 1 - 1 . 
// 2 . RNN ���� ����
// 2 - 1 . 

// 3 . RNN �н� ����
// 4 . �� ��


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