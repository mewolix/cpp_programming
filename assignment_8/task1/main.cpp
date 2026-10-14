#include <iostream>
#include <string>

class Person {
    std::string name;
    public:
        Person(std::string us_name = "Chelovek") : name(us_name) {}
        virtual void print() {
            std::cout << name << std::endl;
        }
};

class Employee : public Person {
    std::string workplace;
    public:
        Employee(std::string name = "Chuvak", std::string work = "Company") : Person(name), workplace(work) {}
        void print() override {
            std::cout << workplace << std::endl;
        }
};

int main() {
    Person p;
    Employee e;
    p.print();
    e.print();
    Person* ptr1 = &p;
    Person* ptr2 = &e;
    ptr1->print();
    ptr2->print();
    return 0;
}
