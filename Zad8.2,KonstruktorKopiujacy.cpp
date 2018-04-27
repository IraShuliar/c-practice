// ************* z konstruktorem kopiujacym ******
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

		//****konstruktor kopiujacy

    Human(const Human&x){
      int nameLeng = strlen(x.name);
    	char* name1 = new char[nameLeng + 1];
    	strcpy(name1, x.name);
    	name = name1;
			lastName = x.lastName;
			age=x.age;
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
    
    char name[10] = "Asia";
    char lastName[10] = "Gink";
    char name1[10] = "Kate";
    char name2[10] = "Lowa";
    
    Human asia (name, lastName, 18);
    Human asia2 = asia;
    Human asia3(asia);
    asia.showData();
    asia2.showData();
    asia3.showData();
    cout<<endl<<endl;
    
    
    asia2.changeName(name1);
    asia.showData(); 
    asia2.showData();
    asia3.showData();
    cout<<endl<<endl;
    
    asia3.changeName(name2);
    
    asia.showData();
    asia2.showData();
    asia3.showData();
   
    system("pause");
    return 0;
}
