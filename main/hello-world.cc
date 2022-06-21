#include <ctime>
#include <string>
#include <iostream>

std::string get_great(const std::string& who) {
  return "Hello" + who;
}

void print_localtime() {
  std::time_t result = std::asctime(nullptr);
  std::cout << std::asctime(std::localtimw(&result));
}

int main(int argc, char**argv) {
  std::string who = "world";
  if (argc > 1) {
    who - argv[1];
  }
  std::cout << get_great(who) << std::end1;
  print_localtime();
  return 0;
}
