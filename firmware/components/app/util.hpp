#include <string>
#include <iostream>


class Base
{
    public:
        Base(std::string name) : name_(name)
        {
            std::cout << "Calling constructor." << std::endl;
        }
        ~Base()
        {
            std::cout << "Calling destructor." << std::endl;
        }

        std::string getName();
    
    private:
        std::string name_;
};