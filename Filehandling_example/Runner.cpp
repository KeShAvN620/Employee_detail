#include "Runner.h"



void Runner::FileChecker(){
	std::ifstream fileRead;
	fileRead.open(fileName);
	if (!fileRead) {
		std::cerr << "no file found" << std::endl;
		std::ofstream outfile(fileName);
		if (!outfile) {
			std::cerr << "no file was created" << std::endl; exit(1);
		}
		std::cout << "file was created" << std::endl;
		outfile.close();
	}
	else {
		std::cout << "file was found" << std::endl<<std::endl;
	}
	fileRead.close();
	ProjectRun();
}

void Runner::ProjectRun(){
	files.ReadFile();
	files.SelectMenu();
}
