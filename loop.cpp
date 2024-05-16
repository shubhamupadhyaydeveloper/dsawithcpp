#include<iostream>
#include<string>

using namespace std;

class Ticket {
    public:
    string name;
    int age;

    Ticket(string n ,int a) {
        name = n;
        age = a;
    }
};

int main() {

    Ticket person("shubham",18);

    cout << person.name << person.age <<endl;

    return 0;
}