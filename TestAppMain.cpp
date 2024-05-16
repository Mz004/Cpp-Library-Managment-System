////Library Application Tester
//
//#include <iostream>
//#include <fstream>
//#include "LibApp.h"
//#include "Date.h"
//
//void runLibrary(const char* filename) {
//   char ch{};
//   lib::LibApp App(filename);
//
//   App.run();
//   std::ifstream file(filename);
//
//   while (file) {
//      if (file.get(ch)) std::cout << ch;
//   }
//}
//
//int main() {
//   lib::lib_day = 15;
//   lib::lib_mon = 5;
//   lib::lib_year = 2024;
//   lib::lib_test = true;
//
//   runLibrary("LibRecs.txt");
//
//   return 0;
//}