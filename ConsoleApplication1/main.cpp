#include "getFile.h"





// RNN 으로 특정 단어가 어떤 언어인지 예측하기.

// 1 . RNN Dataset 읽어 와서 각 언어별로 분류하기

// 1 - 1 . <String > Vector  txtFiles < ---- String 자료형 벡터 ( 특정 디렉토리 내 File.txt 목록 ) O
// 1 - 2 각 파일 디렉토리내 문자들 담기
// 2 . RNN 구조 구축
// 2 - 1 . 

// 3 . RNN 학습 진행
// 4 . 모델 평가


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

	// fileList = 18개의 언어로 된 텍스트 모음
	// 벡터의 첫 차원에 categori -> 이후 data





	return 0;




}