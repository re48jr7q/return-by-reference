#include <string>
#include <iostream>


const int& getNextId()
{
    static int s_x{ 0 };
    ++s_x;
    return s_x;
}


int main()
{
    const int& id1{ getNextId() };
    const int& id2{ getNextId() };

    std::cout << id1 << " " << id2 << '\n';

    return 0;
}


