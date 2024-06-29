#pragma once
#include "BaseHandling.h" 

class File {
public:
    void BackToMenu();
    void SelectMenu();
    void DisplayData();
    void DisplaySpecialData();
    void AddData();
    void Overwrite();
    void DeleteData();
};

struct Passer {
    File datasheet;
    BaseHandling Engine;
    const char* fileName = "data.txt";
};
extern Passer Pass;