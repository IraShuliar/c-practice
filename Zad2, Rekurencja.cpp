#include <iostream>

using namespace std;

//greatest common divisior

int gcd(int a, int b, int&numb)
{
   numb++;
   if (b == 0) return a;
   return gcd(b, a % b, numb);
}

//factorial

long long factorial(int n, int&numb) {
    numb++;
    if(n<2) {
        return 1;
    }
   else {
    return n*factorial(n-1, numb);
   }
} 

int main()
{
    int numb=0, a, b;
    cout<<"podaj dwie liczby dla ktorych chcesz obliczyc NWD"<<endl;
    cin >> a>>b;
    int result1 = gcd(a, b, numb);
    cout<<"NWD z podanych wartosci"<<a<<" i "<<b<<" rowna sie "<<result1<<endl;
    cout<<"Liczba wywolan rekurencyjnych funkcji o nazwie NWD: "<<numb<<endl;
    
    numb=0;
    int n;
    cout<<"Podaj liczbe dla ktorej chcesz wyliczyc silnie: "<<endl;
    cin>>n;
    long long result2 = factorial(n, numb);
    cout<<"Silnia z podanej wartosci "<<n<<" rowna sie "<<result2<<endl;
    cout<<"Liczba wywolan rekurencyjnych funkcji o nazwie factorial: "<<numb<<endl;


    system("pause");
		return 0;
}