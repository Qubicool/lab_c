#include <iostream>
#include <string>
class Human
{
private:

    std::string name;
    int age;
    double salary;

public:
    // Сеттеры
    void setName(std::string n)
    {
        name = n;
    }
    void setAge(int a)
    {
        age = a;
    }
    void setSalary(double s)
    {
        salary = s;
    }
    // геттеры
    std::string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    double getSalary()
    {
        return salary;
    }


    Human(std::string p_name, unsigned p_age, double p_salary)
    {
        name = p_name;
        age = p_age;
        salary = p_salary;
    } // Пользовательский конструктор
    void Hello()
    {
        std::cout << "Hello!" << std::endl;
    }
    void Display()
    {
        std::cout << "Имя: " << name << std::endl;
        std::cout << "Возраст: " << age << std::endl;
        std::cout << "Зарплата: " << salary << std::endl;
    }
};

class Employee : public Human
{
public:
    std::string company;
    void Workhello()
    {
        std::cout << "Hello i'm employee! " << company << std::endl;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");
    
    /*Human human;  // Конструктор по умолчанию
    human.setName("Tom");
    human.setAge(22);
    human.setSalary(2500.505);
    human.Display();*/ 

    Human oleg("Oleg", 38, 2560.12); // Пользовательский конструктор
    oleg.Display();
    //Human copy(oleg); // Конструктор копирования
    //copy.Display();

    return 0;
}
