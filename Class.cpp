#include "histogram.h"
#include <iostream>
#include <iomanip>
#include <cstring>

int frequency(){

    Histogram myBarChart;
    InitHistogram(myBarChart);
    char str[50];
    std::cin >> str;
    std::cout << str<< "\n";
    for (int i=0; i<strlen(str); i++){
        if (islower(str[i])) {
            char t[2] = {str[i], '\0'};
            AddBlock(myBarChart, t);
        }
    }
    PrintHistogram(myBarChart);
    sorted_print(myBarChart, false);
    sorted_print(myBarChart, true);

    DestroyHistogram(myBarChart);
    return 0;
}

// try to avoid Cyrillic letters in comments since encoding problems occur

int main(){
    const char * const strProgramName = "Histogramer 1.0";

    std::cout << std::setfill('*') << std::setw(strlen(strProgramName)+4) << "" << std::endl;
    std::cout << '*' << std::setfill(' ') << std::setw(strlen(strProgramName)+3) << '*' << std::endl;
    std::cout << "* " << strProgramName << " *" << std::endl;
    std::cout << '*' << std::setfill(' ') << std::setw(strlen(strProgramName)+3) << '*' << std::endl;
    std::cout << std::setfill('*') << std::setw(strlen(strProgramName)+4) << "" << std::endl << std::endl;

    Histogram myBarChart;

    InitHistogram(myBarChart);

    AddBlock(myBarChart, "a");
    PrintHistogram(myBarChart);
    AddBlock(myBarChart, "h");
    PrintHistogram(myBarChart);
    AddBlock(myBarChart, "g");
    AddBlock(myBarChart, "f");
    AddBlock(myBarChart, "a");
    AddBlock(myBarChart, "a");
    AddBlock(myBarChart, "b");
    PrintHistogram(myBarChart);
    // newly written functions should not use CamelCase
    // use underscores for better readability
    sorted_print(myBarChart, false);
    AddBlock(myBarChart, "a");
    AddBlock(myBarChart, "d");
    AddBlock(myBarChart, "e");
    AddBlock(myBarChart, "b");
    PrintHistogram(myBarChart);


    AddBlock(myBarChart, "c");
    AddBlock(myBarChart, "cddb");


    PrintHistogram(myBarChart);

    DestroyHistogram(myBarChart);

    frequency();

    return 0;
}
