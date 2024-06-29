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

void File::BackToMenu() {
	char flag;
	std::cout << "To menu: write 'Y/y'" << std::endl;
	std::cin >> flag;
	if (flag == 'Y' || flag == 'y') { SelectMenu(); }
	exit(0);
}



void File::AppendData()
{

}

void File::WriteToFile()
{

}

void File::ClearScreen() {
#if defined(_WIN32) || defined(_WIN64)
	system("cls");  // Clear the screen on Windows
#elif defined(__linux__) || defined(__unix__) || defined(__APPLE__) && defined(__MACH__)
	system("clear");  // Clear the screen on Linux/Unix/macOS
#else
	std::cerr << "Unsupported platform for screen clearing." << std::endl;
#endif

}








void File::SelectMenu(){
	ClearScreen();						  // clear window
	std::cout << "PROGRAM TO DO A SIMPLE EMPLOYEE REGISTRATION FORM\n"
		<< "1. Display All Employee \n"
		<< "2. Display Employee by Id \n"
		<< "3. Add New Employee  \n"
		<< "4. Update Employee by Id \n"
		<< "5. Delete Employee by Id\n"
		<< "6. Exit  \n"
		<< std::endl;

	 unsigned int menuChoose;
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
		std::cout << "ID = " << std::setw(3) << eID[i] << "     " << "Name = " << std::setw(20) << eName[i] << "     " << "Salary = " << eSalary[i] << std::endl;
	}
	std::cout<< std::endl << std::endl;
	BackToMenu();
}




void File::DisplaySpecialData(){
	ClearScreen();                // clear window
	unsigned int tempID;
	unsigned int maxRange = eID.size();
	std::cout <<"Total id from 1 to  "<< maxRange << "  " << "Enter Person Id = " << std::endl;
	std::cin >> tempID; 
	if (tempID <= 0 || tempID > maxRange ) { std::cout << "Please enter Id from given range  "; exit(1); }
	for (unsigned i = 0; i < maxRange; i++) {
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
	float tempSalary;
	std::string tempName;
		char flag;
	do {
		eID.push_back(eID.size() + 1);
		std::cout << "Enter Employee Name = " << std::endl;
		std::cin >> tempName;
		std::cout << "Enter Employee Salary = " << std::endl;
		std::cin >> tempSalary;
		eName.push_back(tempName);
		eSalary.push_back(tempSalary);
		std::cout << "Want to add more press Y/y = ";
		std::cin >> flag;
	} while (flag == 'Y' || flag == 'y');
	BackToMenu();
}

void File::Overwrite(){
	ClearScreen(); // clear window
}

void File::DeleteData(){
	ClearScreen(); // clear window
}
























