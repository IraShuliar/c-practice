
#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

class Cone {
private:
	double h, r, l = NULL;
	void calculateLateralHeight(){
		l = sqrt((h*h) + (r*r));
	}
public:
	Cone() {
		h = 2;
		r = 3;
	};
	Cone(double h, double r) {
		this->h = h;
		this->r = r;
		calculateLateralHeight();
	};

	double getTotalSurfaceArea() {
		return M_PI * r * (r + l);
	}
	double getConeVolume() {
	    return 0.333*M_PI*(r*r)*h;
	}
	double getConeForming() {
	    if (l==NULL) {
	       calculateLateralHeight(); 
	    }
	    
	    return l;
	}
};

int main() {
	Cone a;
	cout << a.getTotalSurfaceArea()<<endl;
	cout<<a.getConeVolume()<<endl;
	cout<<a.getConeForming()<<endl<<endl;

    Cone b(4.0, 3.0);
    cout<<b.getTotalSurfaceArea()<<endl;
    cout<<b.getConeVolume()<<endl;
	cout<<b.getConeForming()<<endl;
	return 0;
}