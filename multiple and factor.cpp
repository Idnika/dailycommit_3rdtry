/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    
    std::cout << "Enter two integers: ";
    std::cin >> a;
    std::cin >> b;
    
    while (a != 0 && b != 0)
    {
        
        if (a > b)
        {
            if ((a % b) == 0)
            {
                std::cout << "multiple\n";
            }
            else
            {
                std::cout << "neither\n";
            }
        }
        else
        {
            if (a == b)
            {
                std::cout << "multiple and also factor\n";
            }
            else if ((b % a) == 0)
            {
                std::cout << "factor\n";
            }
            else
            {
                std::cout << "neither\n";
            }
        }
        
        std::cout << "Enter two integers: ";
        std::cin >> a;
        std::cin >> b;
        
    }

    return 0;
}
