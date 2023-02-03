#include <iostream>

class Stringx
{
public:
    std::string str;

    // contructors
    Stringx() : str{""} {}
    Stringx(std::string conststr) : str{conststr} {}

    void concatenate(Stringx obj1)
    {
        str = str + obj1.str;
    }
    void concatenate(std::string strx)
    {
        str = str + strx;
    }
    void display()
    {
        std::cout << str << std::endl;
    }
};
int main()
{
    Stringx obj1, obj2{"Hello my name is ojas"};
    obj1.display();
    obj2.display();
    obj1.concatenate(obj2);
    obj1.display();
    obj1.concatenate("sorry my name is not ojas");
    obj1.display();
    return 0;
}