#include <iostream>
#include<math.h>

using namespace std;

class Bryla {
    public:
        virtual double objetosc()=0;
        virtual double pole_powierzchni_calkowitej() = 0;
        virtual void pobierz_dane()=0;
};

class Stozek:public Bryla{
    private:
        double r, h, l;
    public:
        void pobierz_dane(){
            cout<<"Podaj promien podstawy stozka: "<<endl;
            cin>>r;
            cout<<"Podaj wydokosc stozka: "<<endl;
            cin>>h;
        }
        double tworzaca() {
            l = sqrt((r*r)+(h*h));
            return l;
        }
        double objetosc() {
            return 0.33*M_PI*pow(r,2)*h;
        }
        double pole_powierzchni_calkowitej() {
            return M_PI*r*(r+tworzaca());
        }
        
};
class Walec:public Bryla{
    private:
        double h, r;
    public:
        void pobierz_dane(){
            cout<<"Podaj wysokosc walca: "<<endl;
            cin>>h;
            cout<<"Podaj promien podstawy: "<<endl;
            cin>>r;
        }
        double objetosc(){
            return M_PI*(r*r)*h;
        }
        double pole_powierzchni_calkowitej() {
            return (2*M_PI*(r*r))+(2*M_PI*r*h);
        }
};
class Kula:public Bryla{
    private:
        double r;
    public:
        void pobierz_dane(){
            cout<<"Podaj promien kuli: "<<endl;
            cin>>r;
        }
        double objetosc(){
            return 4/3*M_PI*pow(r,3);
        }
        double pole_powierzchni_calkowitej() {
            return 4*M_PI*(r*r);
        }
};
class CzworoscianForemny:public Bryla{
    private:
        double a;
    public:
        void pobierz_dane(){
            cout<<"Podaj krawedz czworoscianu foremnego: "<<endl;
            cin>>a;
        }
        double objetosc(){
            return (pow(a,3)*sqrt(2))/12;
        }
        double pole_powierzchni_calkowitej(){
            return (a*a)*sqrt(3);
        }
};
class Prostopadloscian:public Bryla{
    private: 
        double a, b, h;
    public:
        void pobierz_dane(){
            cout<<"Podaj krawedzi podstawy prostopadlosciana: "<<endl;
            cin>>a>>b;
            cout<<"Podaj wysokosc: "<<endl;
            cin>>h;
        }
        double objetosc() {
            return a*b*h;
        }
        double pole_powierzchni_calkowitej(){
            return (2*a*b)+(2*b*h)+(2*a*h);
        }
};

void obsluga_bryly(Bryla&b){
    b.pobierz_dane();
    cout<<"Objetosc: "<<b.objetosc()<<endl;
    cout<<"Pole powierzchni calkowitej: "<<b.pole_powierzchni_calkowitej()<<endl;
}

int main()
{
    Bryla* wsk1=new Stozek;
    wsk1->pobierz_dane();
    cout<<"objetosc: "<<wsk1->objetosc()<<endl;
    cout<<"pole powierzchni calkowitej: "<<wsk1->pole_powierzchni_calkowitej()<<endl;
    
    Bryla* wsk2=new Walec;
    wsk2->pobierz_dane();
    cout<<"objetosc: "<<wsk2->objetosc()<<endl;
    cout<<"pole powierzchni calkowitej: "<<wsk2->pole_powierzchni_calkowitej()<<endl;
    
    Bryla* wsk3=new Kula;
    wsk3->pobierz_dane();
    cout<<"objetosc: "<<wsk3->objetosc()<<endl;
    cout<<"pole powierzchni calkowitej: "<<wsk3->pole_powierzchni_calkowitej()<<endl;
    
    Bryla* wsk4=new CzworoscianForemny;
    wsk4->pobierz_dane();
    cout<<"objetosc: "<<wsk4->objetosc()<<endl;
    cout<<"pole powierzchni calkowitej: "<<wsk4->pole_powierzchni_calkowitej()<<endl;
    
    Bryla* wsk5=new Prostopadloscian;
    wsk5->pobierz_dane();
    cout<<"objetosc: "<<wsk5->objetosc()<<endl;
    cout<<"pole powierzchni calkowitej: "<<wsk5->pole_powierzchni_calkowitej()<<endl;
    
    delete wsk1;
    delete wsk2;
    delete wsk3;
    delete wsk4;
    delete wsk5;
    
    Stozek b1;
    obsluga_bryly(b1);
    
    Walec b2;
    obsluga_bryly(b2);
    
    Kula b3;
    obsluga_bryly(b3);
    
    CzworoscianForemny b4;
    obsluga_bryly(b4);
    
    Prostopadloscian b5;
    obsluga_bryly(b5);
    
    
    return 0;
}
