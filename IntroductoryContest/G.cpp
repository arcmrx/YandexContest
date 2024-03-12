#include <iostream>
#include <fstream>
#include <unordered_set>

int main() 
{
    std::ifstream input("input.txt");
    std::ofstream output("output.txt");
    std::string j, s;
    input >> j >> s;
    std::unordered_set<char> jewels(j.begin(), j.end());
    int count = 0;
    for (char c : s) {
        if (jewels.count(c)) {
            count++;
        }
    }
    output << count;
    input.close();
    output.close();
    return 0;
}
