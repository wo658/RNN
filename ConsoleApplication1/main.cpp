#include "getFile.h"





// RNN 으로 특정 단어가 어떤 언어인지 예측하기.

// 1 . RNN Dataset 읽어 와서 각 언어별로 분류하기

// 1 - 1 . <String > Vector  txtFiles < ---- String 자료형 벡터 ( 특정 디렉토리 내 File.txt 목록 ) O
// 1 - 2 각 파일 디렉토리내 문자들 담기
// 2 . RNN 구조 구축
// 2 - 1 . 소프트맥스 회귀 구조 사용
// 2 - 2	출력층 18   -> 그럼 입력층은? 단어를 가지고 언어를 예측
// 3 . RNN 학습 진행
// 4 . 모델 평가

// 소프트 맥스 함수  =  모든 y 변수의 확률값을 계산해서 가장 높은 확률값을 가지는 Y로 분류하는 함수
// 모든 카테고리에 대한 확률을 구하고 그 확률값의 합이 1이 되어야 한다.
//분류하고자 하는 클래스가 k개일 때, k차원의 벡터를 입력받아서 모든 벡터 원소의 값을 0과 1사이의 값으로 값을 변경하여 다시 k차원의 벡터를 반환한다
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