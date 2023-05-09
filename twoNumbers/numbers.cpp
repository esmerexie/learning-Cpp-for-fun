#include<iostream>

int main()
{
    std::cout << "Enter two numbers with a space: ";
    
    int x = { 0 };
    int y = { 0 };

    std::cin >> x >> y;
    std::cout << "You have entered: " << x << " and " << y << '\n';

    return 0;
}
 