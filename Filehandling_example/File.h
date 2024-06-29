#pragma once
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<vector>
#include<iomanip>

class Runner;
class File
{
private:
	std::vector<int> eID;
	std::vector<std::string> eName;
	std::vector<float> eSalary;
	int replacerID = 109;
	std::string replacerName = "keshav";

public:
	void ReadFile();
	void BackToMenu();
	void AppendData();
	void WriteToFile();
public:

	void SelectMenu();
	void DisplayData();
	void DisplaySpecialData();
	void AddData();
	void Overwrite();
	void DeleteData();

private:
	void ClearScreen();
};

