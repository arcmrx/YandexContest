#include <iostream>
#include <fstream>

int main() 
{
    std::ifstream input("input.txt");
    std::ofstream output("output.txt");
    int a, b;
    input >> a >> b;
    output << a + b;
    input.close();
    output.close();
    return 0;
}
