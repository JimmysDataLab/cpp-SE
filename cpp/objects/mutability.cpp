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

class Pet
{
    public:
        Pet(string name, int age)
        {
            this->name = name;
            this->age = age;
        }

        void IncreaseAge()
        {
            age++;
            
        }
        void PrintAge()
        {
            cout<<age<<endl;
        }

    private:
        string name;
        int age;


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
    Person person("Akhil",29);
    changeAgeValue(person);
    changeAgeReference(person);
    cout<<person.age<<endl;
    Pet pet("Rambo",4);
    pet.IncreaseAge();
    pet.PrintAge();

    return 0;

}