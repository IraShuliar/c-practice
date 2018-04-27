#include <iostream>
#include <cstring>

using namespace std;

class Urzadzenie {
    protected:
        string firma;
        int obroty;
    public:
        Urzadzenie (string firma, int obroty) {
            this->firma = firma;
            this->obroty = obroty;
        }
        string daj_firme() {
            return firma;
        }
        int daj_obroty() {
            return obroty;
        }
        void pokaz_opis() {
            cout<<endl<<"Nazwa firmy: "<<daj_firme()<<endl;
            cout<<"Obroty firmy: "<<daj_obroty()<<endl;
        }
};

class SzlifierkaKatowa : public Urzadzenie {
    private:
        int moc, tarcza;
    public:
        SzlifierkaKatowa(string firma, int obroty, int moc, int tarcza): Urzadzenie(firma, obroty){
            this->moc = moc;
            this->tarcza = tarcza;
        }
        int daj_moc() {
            return moc;
        }
        int daj_tarcze() {
            return tarcza;
        }
        void pokaz_opis() {
            Urzadzenie::pokaz_opis();
            cout<<"Moc szlifierki katowej: "<<daj_moc()<<endl;
            cout<<"Tarcza szlifierki katowej: "<<daj_tarcze()<<endl;
        }
};

    class WiertarkoWkretarka: public Urzadzenie {
    private:
        int napiecie;
        string bateria;
        int czas_ladow;
    public:
        WiertarkoWkretarka(string firma, int obroty, int napiecie, string bateria, int czas_ladow) : 
        Urzadzenie(firma, obroty){
            this->napiecie = napiecie;
            this->bateria = bateria;
            this->czas_ladow = czas_ladow;
        }
        double daj_napiecie() {
            return napiecie;
        }
        string daj_baterie() {
            return bateria;
        }
        int daj_czas_ladow() {
            return czas_ladow;
        }
        void pokaz_opis() {
            Urzadzenie::pokaz_opis();
            cout<<"Napiecie wiertarki wkretarki: "<<daj_napiecie()<<endl;
            cout<<"Bateria wiertarki wkretarki: "<<daj_baterie()<<endl;
            cout<<"Czas ladow wiertarki wkretarki: "<<daj_czas_ladow()<<endl;
        }
};

int main()
{
    WiertarkoWkretarka ob1("Firma1", 12, 1, "bateria1", 17);
    WiertarkoWkretarka ob2 ("Firma2", 22, 5, "bateria2", 18);
    WiertarkoWkretarka ob3 ("Firma3", 63, 123, "bateria3", 5);
    WiertarkoWkretarka ob4 ("Firma4", 42, 532, "bateria4", 19);
    WiertarkoWkretarka ob5 ("Firma5", 12, 11, "bateria5", 8);
    WiertarkoWkretarka WWtab[5] = {
        ob1, ob2, ob3, ob4, ob5
    };
    
    int min = WWtab[0].daj_czas_ladow();
    int index = 0;
    for(int i=1; i<5; i++) {
        if(min>WWtab[i].daj_czas_ladow()) {
            min = WWtab[i].daj_czas_ladow();
            index = i;
        }
    }
    WWtab[index].pokaz_opis();
    
    
    SzlifierkaKatowa obj1("Firma6", 324, 23, 11);
    SzlifierkaKatowa obj2("Firma7", 42, 24, 17);
    SzlifierkaKatowa obj3("Firma8", 467, 17, 19);
    SzlifierkaKatowa obj4("Firma9", 112, 35, 10);
    SzlifierkaKatowa SKtab[4] = {
        obj1, obj2, obj3, obj4
    };
    
    int max = SKtab[0].daj_obroty();
    int index2 = 0;
    for(int i=1; i<4; i++) {
        if(max<SKtab[i].daj_obroty()) {
            max = SKtab[i].daj_obroty();
            index2 = i;
        }
    }
    SKtab[index2].pokaz_opis();
	
    return 0;
}
