#pragma once
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<vector>
#include"File.h"


extern const char* fileName;

class Runner
{
private:
	File files;
public:
	void FileChecker();
	void ProjectRun();
};

