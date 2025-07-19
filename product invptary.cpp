#include<iostream>
using namespace std;
class product{
	private :
	double price;
	int stock;
	public :
		string productname;
		string category;
		product(double p, int s,string pn,string c){
			price=p;
			stock=s;
			productname=pn;
			category=c;
		} 
	void setprice(double p){
		price=p;
	}
	double getprice(){
		return price;
	}
	void setstock(int s){
		stock=s;
	}
	int getstock(){
		return stock;
	}
  void displayDetails() const {
        cout << "ProductName: " << productname << endl;
        cout << "Category   : " << category << endl;
        cout << "Price      : " << price << endl;
        cout << "Stock      : " << stock << endl;
    }
};

int main() {
    product p1(8000.50,39 , "Gaming Laptop", "Computer");
    p1.displayDetails();
	product p2(5000.32,56,"Gaming Chair","Furniture");
	p2.displayDetails();
    return 0;
}
