#include <iostream>
#include <string>

int main(void) {
  std::string res;
  std::string in;
  int i = 0;
  res = "11";
  while(i < 5)
  {
    std::cin >> in;
    res += ' ';
    res += in;
    i++;
  }
  std::cout << res << std::endl;
  return 0;
}