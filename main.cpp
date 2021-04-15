#include <iostream>
#include <vector>
#include <map>


int main() {
  //Это просто пример, но на самом деле надо додумать немного, потому что писать всё время всю пару это немного запарно
  std::map<std::pair<int, int>, std::vector<int>> metro = { {{1, 2}, {1, 2, 3}}, {{2, 2}, {1, 2, 3}} };
  std::cout << metro[{1, 2}][1];
  std::cout << "Hello, World!" << std::endl;
  return 0;
}