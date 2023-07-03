#include "modem.hpp"

#include <string>

class FakeModem: public Modem
{
    public:
        FakeModem(std::string name) : name_(name) {}

    private:
        std::string name_;
};