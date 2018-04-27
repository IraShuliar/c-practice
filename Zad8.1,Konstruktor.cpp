

#include <cstring>
#include <iostream>

using namespace std;

class Human {
        char* name;
        char* lastName;
        int age;
    public:
    Human (char* name, char* lastName, int age) {
        this->name = name;
        this->lastName = lastName;
        this->age = age;
    }
    ~Human () {
        delete name;
        delete lastName;
    }
    
    void showData() {
        cout<<name<<endl;
        cout<<lastName<<endl;
        cout<<age<<endl;
    }
    void changeName (const char* name){
        strcpy(this->name, name);
    }
    
};

int main()
{
    char name[10] = "Ola";
    char lastName[10] = "Winj";
    Human ola (name, lastName, 11);
    char sname[5] = "ira";
    char slast[5] = "bur";
    
    Human ira(sname, slast, 19);
    ira.showData();
   
    Human ola2 = ola;
    
    char name1[10] = "Ora";
    ola2.changeName(name1);
   
    ola.showData();
    ola2.showData();
   
    cout<<"Nastepuje zmiana w obu imionach, a nie w wybranym ";
   
    
   
    system("pause");
    return 0;
}
