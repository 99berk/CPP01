#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class   Harl
{
    typedef struct s_caller
    {
        std::string name;
        void(Harl::*ptr_func)(void);
    }   t_ptr_func;

    private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
        t_ptr_func p_func[5];
    public:
        Harl(void);
        ~Harl();
        void complain(const std::string level);
        void Print(int i);
        void nothing(void);
};

#endif