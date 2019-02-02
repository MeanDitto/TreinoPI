#include <iostream>
#include <vector>


int main(int argc, char const *argv[])
{
    /* code */
    std::vector<int> d;

    for(int i = 0; i<10; i++){ 
        d.push_back(i);
        std::cout << d[i] << "\n";
    }
    return 0;
}