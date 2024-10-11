#include <iostream>
using namespace std;

class Person
{
    public:
        string name;
        int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

void changeAgeValue(Person p)
{
    p.age = 30;
}

void changeAgeReference(Person &p)
{
    p.age = 30;
}

int main()
{
    Person p1("Akhil",29);
    changeAgeValue(p1);
    changeAgeReference(p1);
    cout<<p1.age;


    return 0;

}