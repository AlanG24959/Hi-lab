#include "hello.hpp"
#include <cctype>

int compIgnore(const std::string& s1, const std::string& s2) {
     size_t n = (s1.size() < s2.size()) ? s1.size() : s2.size();

     for (size_t i = 0; i < n; ++i) {
          char c1 = tolower(static_cast<unsigned char>(s1[i]));
          char c2 = tolower(static_cast<unsigned char>(s2[i]));
          if (c1 != c2) return (c1 < c2) ? -1 : 1;
     }

     if (s1.size() == s2.size()) return 0;
     return (s1.size() < s2.size()) ? -1 : 1;
}
