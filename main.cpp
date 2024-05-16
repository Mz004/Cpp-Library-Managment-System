#include <fstream>
#include <iostream>
#include "LibApp.h"
#include "Date.h"
#include "Menu.h"

using namespace lib;

void runApp(const char* filename) 
{
   size_t i{};
   char ch;
   char original[31] = "orig";

   // creating original file name
   while(filename[i]) original[4u + i] = filename[i++];
   original[4u + i] = char(0);

   // copiying original values to data file;
   std::ofstream outFile(filename);
   std::ifstream inFile(original);
   while(inFile.get(ch)) {
      outFile << ch;
   }

   outFile.close();
   inFile.close();

   // setting test values
   lib::lib_day = 10;
   lib::lib_mon = 8;
   lib::lib_year = 2023;
   lib::lib_test = true;
   lib::LibApp app(filename);
   app.run();

   std::cout << "Content of " << filename << "\n=========>\n";
   inFile.open(filename);

   while(inFile.get(ch)) std::cout << ch;
   std::cout << "<=========\n";
}


int main() 
{
   Menu outFile("Select Data File");
   outFile << "LibRecsSmall.txt" << "LibRecs.txt";

   switch(outFile.run()) {
   case 1:
      std::cout << "Test started using small data: " << std::endl;
      runApp("LibRecsSmall.txt");
      break;
   case 2:
      std::cout << "Test started using big data: " << std::endl;
      runApp("LibRecs.txt");
      break;
   default:
      std::cout << "Aborted by user! " << std::endl;
      break;
   }
   return 0;
}