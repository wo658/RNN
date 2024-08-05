
#include "getFile.h"


std::vector<std::vector<std::wstring>> getTxtFilesInDirectory(const std::wstring& directory) {
	std::vector<std::vector<std::wstring>> txtFiles;
	std::wstring searchPath = directory + L"\\*.txt";
	WIN32_FIND_DATAW findFileData;
	HANDLE hFind = FindFirstFileW(searchPath.c_str(), &findFileData);

	if (hFind == INVALID_HANDLE_VALUE) {
		std::wcerr << L"Error: Unable to open directory " << directory << std::endl;
		return txtFiles;
	}

	do {
		const std::wstring fileName = findFileData.cFileName;
		if (!(findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
			std::wstring fullPath = directory + L"\\" + fileName;
			std::wifstream inFile(fullPath);
			if (!inFile) {
				std::wcerr << L"Error: Unable to open file " << fullPath << std::endl;
				continue;
			}

			std::vector<std::wstring> fileData;
			fileData.push_back(fileName);

			std::wstring line;
			while (std::getline(inFile, line)) {
				fileData.push_back(line);
			}
			inFile.close();

			txtFiles.push_back(fileData);
		}
	} while (FindNextFileW(hFind, &findFileData) != 0);

	FindClose(hFind);
	return txtFiles;
}