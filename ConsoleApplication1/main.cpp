#include "getFile.h"





// RNN ���� Ư�� �ܾ � ������� �����ϱ�.

// 1 . RNN Dataset �о� �ͼ� �� ���� �з��ϱ�

// 1 - 1 . <String > Vector  txtFiles < ---- String �ڷ��� ���� ( Ư�� ���丮 �� File.txt ��� ) O
// 1 - 2 �� ���� ���丮�� ���ڵ� ���
// 2 . RNN ���� ����
// 2 - 1 . 

// 3 . RNN �н� ����
// 4 . �� ��


int main()
{
	wstring directory = L"C:\\Users\\ecmdev\\Documents\\Visual Studio 2015\\Projects\\RNN\\names";
	std::vector<std::vector<std::wstring>> txtFiles = getTxtFilesInDirectory(directory);


	/*
	for (auto e : txtFiles.at(0))
		wcout << e << endl;
	*/

	wcout << txtFiles.size();

	for (auto e : txtFiles)
		wcout << e.at(0) << endl;

	// fileList = 18���� ���� �� �ؽ�Ʈ ����
	// ������ ù ������ categori -> ���� data





	return 0;




}