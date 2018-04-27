
#include<iostream>
#include<string>

using namespace std;

class Order {
private:
	string productName;
	double productPrice;
	string orderDate;
	int itemNumb;

public:
	void saveData(string productName, double productPrice, string orderDate, int itemNumb) {
		this->productName = productName;
		this->productPrice = productPrice;
		this->orderDate = orderDate;
		this->itemNumb = itemNumb;
	}
	
	void showData() {
		cout << "Nazwa zamowionego productu: "<< productName << endl << "Cena: " << productPrice<<" zl"<<endl;
		cout<<"Data zamowienia: " << orderDate<<endl<<"Liczba sztuk: "<<itemNumb<<endl;
	}
	
	string getProductName() {
		return productName;
	}
	
	double getProductPrice() {
		return productPrice;
	}
	
	string getProductOrderDate() {
			return orderDate;
	}
	
	int getProductItemNumb() {
			return itemNumb;
	}
    
	double getFullProductPrice() {
		return getProductPrice()*getProductItemNumb();
	}
};

int main() {
	Order bicycle;
	
	bicycle.saveData("rower BIC", 750.85, "9 marca", 2);
	bicycle.showData();
	cout<<"Calkowita wartosc: "<<bicycle.getFullProductPrice()<<" zl"<<endl;
	
	cout<<bicycle.getProductName()<<" , "<<bicycle.getProductPrice()<<" , "<<bicycle.getProductOrderDate();
	cout<<" , "<<bicycle.getProductItemNumb()<<" , "<<bicycle.getFullProductPrice()<<endl<<endl;
	
	Order flower;
	flower.saveData("tulipy rozowe", 2.20, "10 marca", 21);
	flower.showData();
	cout<<"Calkowita wartosc: "<<flower.getFullProductPrice()<<" zl"<<endl;
	
	cout<<flower.getProductName()<<" , "<<flower.getProductPrice()<<" , "<<flower.getProductOrderDate();
	cout<<" , "<<flower.getProductItemNumb()<<" , "<<flower.getFullProductPrice()<<endl<<endl;
	
	system("pause");
	return 0;
}