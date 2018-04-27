
#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int* createArr(int&n) {
    cout<<"Podaj liczbe elementow tablicy ";
    cin >> n;
    int* arr = new int[n];  
    for(int i=0; i<n; i++) {
        *(arr+i) = 1 +rand() % 100;
    }
    
    return arr;
}

void showArr(int* arr) {
    for(int* i = arr; *i != 0; i++) {
        cout<<*i<<" "; 
    }
    cout<<endl;
}

double getArrAverage(int* arr, int&n) {
    int sum = 0;
    for(int* i = arr; i<arr + n; i++) {
        sum += *i;
    }
    return double(sum)/n;
}

double getStandardDeviation(int* arr, int&n, double average) {
    double result = 0.0;
    for(int* i = arr; i<arr + n; i++) {
        result += pow(double(*i - average), 2);
    }
    return sqrt(result/n);
}

int* getNumbersInDeviationRange(int* arr, int&n, double average, double deviation) {
    int count = 0;
    double min = average-deviation;
    double max = average+deviation;

    for(int* i = arr; i<arr + n; i++) {
        if(double(*i) > min && double(*i) < max) {
            count++;
        }
    }
    
    int* arr2 = new int[count];
    int j = 0;
     for(int* i = arr; i<arr + n; i++) {
        if(double(*i) > min && double(*i) < max) {
            *(arr2+j) = *i;
            j++;
        }
    }
    return arr2;
}

int* sortBasedOnAverage(int* arr, int&n, double average) {
    int* newArr = new int[n];
    
    int j = 0;
    for(int* i = arr; i < arr + n; i++) {
        if (double(*i) < average) {
            *(newArr + j) = *i;
            j++;
        }
    }
    
    for(int* i = arr; i < arr + n; i++) {
        if (double(*i) >= average) {
            *(newArr + j) = *i;
            j++;
        }
    }
    
    return newArr;
}

int main()
{
    srand(time(NULL));
    int sizeArr;
    
    int* arr1 = createArr(sizeArr);
    showArr(arr1);
    double average1 = getArrAverage(arr1, sizeArr);
    double deviation = getStandardDeviation(arr1, sizeArr, average1);
    
    cout<<endl<<"Average is "<<average1;
    cout<<endl<<"Standard Deviation "<<deviation<<endl;
    
    int* arr2 = getNumbersInDeviationRange(arr1, sizeArr, average1, deviation);
    showArr(arr2);
    
    
    int* arr3 = sortBasedOnAverage(arr1, sizeArr, average1);
    showArr(arr3);

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    
    return 0;
}



