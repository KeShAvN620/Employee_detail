#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
#include <iomanip>

class File; // Forward declaration to avoid circular dependency

class BaseHandling {
private:
    std::vector<int> eID;
    std::vector<std::string> eName;
    std::vector<float> eSalary;

public:
    std::vector<int>& GetId() { return eID; }
    std::vector<std::string>& GetName() { return eName; }
    std::vector<float>& GetSalary() { return eSalary; }

public:
    void FileChecker();
    void ProjectRun();
    void ReadFile();
    void WriteToFile();
    void ClearScreen();
};
