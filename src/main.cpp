#include <iostream>

#include "IniTwo.hpp"

int main() {
    file FILE;
  std::map<string,string> m = FILE.parse_file("test.txt");
std::cout << m["t"];
         
}