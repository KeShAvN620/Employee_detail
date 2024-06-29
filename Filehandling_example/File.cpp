#include "File.h"
#include"Runner.h"

void File::ReadFile(){
	std::ifstream fileRead;
	fileRead.open(fileName);
	std::string line; int eid; float salary;
	while (!fileRead.eof()) {
		fileRead >> eid >> line >> salary;
		eID.push_back(eid); eName.push_back(line); eSalary.push_back(salary);
	}
	fileRead.close();
}

void File::SelectMenu(){
	ClearScreen();						  // clear window
	 unsigned int menuChoose;
	std::cout << "Which Operation you want to operate \n"
		<< "1. Display total data \n"
		<< "2. Display specific person data \n"
		<< "3. Add new data \n"
		<< "4. Override specific data \n"
		<< "5. Delete a whole data set \n"
		<< "6. Exit program \n"
		<< std::endl;

	std::cin >> menuChoose;
	if (menuChoose < 1 || menuChoose > 6) {
		std::cout << "Please enter number from 1 to 6";
		exit(1);
	}

	switch (menuChoose)
	{	
	case 1:
		DisplayData();
		break;
	case 2:
		DisplaySpecialData();
		break;
	case 3:
		AddData();
		break;
	case 4:
		Overwrite();
		break;
	case 5:
		DeleteData();
		break;
	}
}



void File::DisplayData(){
	ClearScreen();

	for ( unsigned int i = 0; i < eID.size(); i++) {
		std::cout <<"SN = "<< std::setw(3) << i+1 << "   " << "ID = " << eID[i] << "     " << "Name = " << std::setw(15) << eName[i] << "     " << "Salary = " << eSalary[i] << std::endl ;
	}
	std::cout<< std::endl << std::endl;
	BackToMenu();
}


void File::DisplaySpecialData(){
	unsigned int tempID;
	ClearScreen();                // clear window
	unsigned int maxRange = 100 + eID.size();
	std::cout <<"Total id from 101 to  "<< maxRange << "  " << "Enter Person Id = " << std::endl;
	std::cin >> tempID; 
	if (tempID <= 100 || tempID > maxRange) { std::cout << "Please enter Id from given range  "; exit(1); }
	for (unsigned i = 0; i < eID.size(); i++) {
		if (eID[i] == tempID) {
			std::cout << "Employee Id    = " << eID[i] << std::endl;
			std::cout << "Employee Name  = " << eName[i] << std::endl;
			std::cout << "Employee Salary= " << eSalary[i] << std::endl;
		}

	}
	BackToMenu();
}

void File::AddData(){
	ClearScreen(); // clear window
}

void File::Overwrite(){
	ClearScreen(); // clear window
}

void File::DeleteData(){
	ClearScreen(); // clear window
}

void File::BackToMenu(){
	char flag;
	std::cout << "To menu: write 'Y/y'" << std::endl;
	std::cin >> flag;
	if (flag == 'Y' || flag == 'y') { SelectMenu(); }
	exit(0);
}

void File::ClearScreen(){
#if defined(_WIN32) || defined(_WIN64)
		system("cls");  // Clear the screen on Windows
#elif defined(__linux__) || defined(__unix__) || defined(__APPLE__) && defined(__MACH__)
		system("clear");  // Clear the screen on Linux/Unix/macOS
#else
		std::cerr << "Unsupported platform for screen clearing." << std::endl;
#endif
	
}
