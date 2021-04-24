#include <iostream>
#
#include <vector>
#include <map>


int main() {
std::map<std::string, std::vector<std::pair<std::string, int>>> metro = {
  {"Okhotniy ryad", {{"Teatralnaya", 5}, {"Ploshyad revolutsii", 10}, {"Lubyanka", 1}, {"Biblioteka imeni Lenina", 1}}},
  {"Teatralnaya", {{"Okhotniy ryad", 5}, {"Ploshyad revolutsii", 5}, {"Tverskaya", 1}, {"Novokuznetskaya", 2}}},
  {"Ploshyad revolutsii", {{"Okhotniy ryad", 10}, {"Teatralnaya", 5}, {"Arbatskaya", 2}, {"Kurskaya", 3}}},
  {"Tverskaya", {{"Pushkinskaya", 3}, {"Chehovskaya", 4}, {"Teatralnaya", 1}, {"Belorusskaya Green", 3}}},
  {"Pushkinskaya", {{"Tverskaya", 3}, {"Tchekhovskaya", 4}, {"Kuznetskiy most", 2}, {"Barrikadnaya", 2}}},
  {"Tchekhovskaya", {{"Tverskaya", 4}, {"Chehovskaya", 3}, {"Tsvetnoy bulvar", 1}, {"Borovitskaya", 2}}},
  {"Kuznetskiy most", {{"Lubyanka, 3"}, {"Pushkinskaya", 2}, {"Kitay-gorod Purple", 1}}},
  {"Lubyanka", {{"Kuznetskiy most", 3}, {"Okhotniy ryad", 1}, {"Chistye prudi", 2}}},
  {"Chistye prudy", {{}}}
};

  return 0;
}
