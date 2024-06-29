#include "BaseHandling.h"
#include "File.h"

void BaseHandling::FileChecker() {
    std::ifstream fileRead;
    fileRead.open(fileName);
    if (!fileRead) {
        std::cerr << "no file found" << std::endl;
        std::ofstream outfile(fileName);
        if (!outfile) {
            std::cerr << "no file was created" << std::endl;
            exit(1);
        }
        std::cout << "file was created" << std::endl;
        outfile.close();
    }
    else {
        std::cout << "file was found" << std::endl << std::endl;
    }
    fileRead.close();
    ProjectRun();
}

void BaseHandling::ProjectRun() {
    ReadFile();
    Pass.datasheet.SelectMenu();
}

void BaseHandling::ReadFile() {
    std::ifstream fileRead;
    fileRead.open(fileName);
    std::string line;
    int eid;
    float salary;
    while (!fileRead.eof()) {
        fileRead >> eid >> line >> salary;
        eID.push_back(eid);
        eName.push_back(line);
        eSalary.push_back(salary);
    }
    fileRead.close();
}

void BaseHandling::AppendData() {
    // Implementation
}

void BaseHandling::WriteToFile() {
    // Implementation
}

void BaseHandling::ClearScreen() {
#if defined(_WIN32) || defined(_WIN64)
    system("cls");  // Clear the screen on Windows
#elif defined(__linux__) || defined(__unix__) || defined(__APPLE__) && defined(__MACH__)
    system("clear");  // Clear the screen on Linux/Unix/macOS
#else
    std::cerr << "Unsupported platform for screen clearing." << std::endl;
#endif
}
