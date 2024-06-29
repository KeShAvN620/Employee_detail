#include "File.h"
#include "BaseHandling.h"

void File::BackToMenu() {
    char flag;
    std::cout << "To menu: write 'Y/y'" << std::endl;
    std::cin >> flag;
    if (flag == 'Y' || flag == 'y') { SelectMenu(); }
    exit(0);
}

void File::SelectMenu() {
    Pass.Engine.ClearScreen();  // clear window
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

    switch (menuChoose) {
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

void File::DisplayData() {
    Pass.Engine.ClearScreen();
    std::vector<int>& tId = Pass.Engine.GetId();
    std::vector<std::string>& tName = Pass.Engine.GetName();
    std::vector<float>& tSalary = Pass.Engine.GetSalary();
    for (unsigned int i = 0; i < tId.size(); i++) {
        std::cout << "ID = " << std::setw(3) << tId[i] << "     "
            << "Name = " << std::setw(20) << tName[i] << "     "
            << "Salary = " << tSalary[i] << std::endl;
    }
    std::cout << std::endl << std::endl;
    BackToMenu();
}

void File::DisplaySpecialData() {
    Pass.Engine.ClearScreen();  // clear window
    std::vector<int>& tID = Pass.Engine.GetId();
    std::vector<std::string>& tName = Pass.Engine.GetName();
    std::vector<float>& tSalary = Pass.Engine.GetSalary();
        unsigned int tempid;
        unsigned int maxrange = tID.size();
        std::cout <<"Total Id from 1 to  "<< maxrange << "  " << "Enter Employee Id = " << std::endl;
        std::cin >> tempid; 
        if (tempid <= 0 || tempid > maxrange ) { std::cout << "Please enter id from given range  "; exit(1); }
        for (unsigned i = 0; i < maxrange; i++) {
        	if (tID[i] == tempid) {
        		std::cout << "Employee Id    = " << tID[i] << std::endl;
        		std::cout << "Employee Name  = " << tName[i] << std::endl;
        		std::cout << "Employee Salary= " << tSalary[i] << std::endl;
        	}

        }
        BackToMenu();
}

void File::AddData() {
    Pass.Engine.ClearScreen(); // clear window
    std::vector<int>& tID = Pass.Engine.GetId();
    std::vector<std::string>& tName = Pass.Engine.GetName();
    std::vector<float>& tSalary = Pass.Engine.GetSalary();
float tempSalary;
std::string tempName;
	char flag;
do {
	tID.push_back(tID.size() + 1);
	std::cout << "Enter Employee Name = " << std::endl;
	std::cin >> tempName;
	std::cout << "Enter Employee Salary = " << std::endl;
	std::cin >> tempSalary;
	tName.push_back(tempName);
	tSalary.push_back(tempSalary);
	std::cout << "Want to add more press Y/y = ";
	std::cin >> flag;
} while (flag == 'Y' || flag == 'y');
BackToMenu();
}

void File::Overwrite() {
    Pass.Engine.ClearScreen(); // clear window
}

void File::DeleteData() {
    Pass.Engine.ClearScreen(); // clear window
}
