#include<iostream>

int main()
{
    std::cout << "Enter two numbers with a space: ";
    
    // setting the values for variables x & y
    int x = { 0 };
    int y = { 0 };

    // cin = character input
    // >> = requires two int inputs from the user 
    std::cin >> x >> y;

    //returns input as output and then line breaks.
    std::cout << "You have entered: " << x << " and " << y << '\n';

    return 0;
}
 