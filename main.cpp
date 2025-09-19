#include <iostream>
#include "src/hello.hpp"
using namespace std;

int main() {
     string str1, str2;

     cout << "Enter the first string: ";
     getline(cin, str1);

     cout << "Enter the second string: ";
     getline(cin, str2);

     cout << "The comparison of \"" << str1 << "\" and \"" << str2
          << "\" returns " << compIgnore(str1, str2) << ".\n";

     return 0;
}