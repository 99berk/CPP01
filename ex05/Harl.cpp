#include "Harl.hpp"
#include <iostream>

Harl::Harl(void)
{
    this->p_func[0].name = "";
    this->p_func[0].ptr_func = &Harl::nothing;
    this->p_func[1].name = "DEBUG";
    this->p_func[1].ptr_func = &Harl::debug;
    this->p_func[2].name = "INFO";
    this->p_func[2].ptr_func = &Harl::info;
    this->p_func[3].name = "WARNING";
    this->p_func[3].ptr_func = &Harl::warning;
    this->p_func[4].name = "ERROR";
    this->p_func[4].ptr_func = &Harl::error;
    std::cout << "Harl Constructor Called" << std::endl << std::endl;
}

Harl::~Harl()
{
    std::cout << "Harl Destructor Called" << std::endl;
}

void Harl::debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon on my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I can't believe it costs more money to add extra bacon. You didn't put enough bacon on my burger! If you had, I wouldn't have asked for more!" << std::endl << std::endl;
}

void Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to eat extra bacon for free. I've been eating it for years. I'm coming, you started working here since last month." << std::endl << std::endl;
}

void Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to talk to the manager now." << std::endl << std::endl;
}
void Harl::Print(int i)
{
    (this->*p_func[i].ptr_func)();
}

void Harl::nothing(void){}

void Harl::complain(const std::string level)
{
    int i;

    i = 0;
    while (++i < 5)
    {
        Print(i * !std::strcmp(level.c_str(), (p_func[i].name).c_str()));
    }
}
