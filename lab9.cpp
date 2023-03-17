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

    Human()
    {
        name = "";
        age = 0;
        salary = 0;
    } // По умолчанию
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
    Employee(std::string n, int a, double s, std::string c):Human(n,a,s)
    {
        company = c;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");
    
    Human human;  // Конструктор по умолчанию
    human.Display();
    std::cout << std::endl;
    std::cout << std::endl;
    human.setName("Tom");
    human.setAge(22);
    human.setSalary(2500.505);
    human.Display(); 
    std::cout << std::endl;
    std::cout << std::endl;
    Human oleg("Oleg", 38, 2560.12); // Пользовательский конструктор
    oleg.Display();
    std::cout << std::endl;
    std::cout << std::endl;
    Employee bob("Bob", 31, 2500.2, "Google");
    bob.Workhello();
    std::cout << std::endl;
    std::cout << std::endl;
    bob.Display();
    std::cout << std::endl;
    std::cout << std::endl;
    Human copy(oleg); // Конструктор копирования
    copy.Display();

    return 0;
}
