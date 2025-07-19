
 #include <bits/stdc++.h>
 using namespace std;

 class book {
     int isbn,cp;
     public :
         string title,author;
     book(string t,string a, int is, int c) {
         title=t;
         author=a;
         isbn=is;
         cp=c;
     }
     void issuebook() {
         cp--;
         cout << "Issued Book\n";
         cout << "Title : " << title << endl << "Author : " << author << endl << "Book Number : " << isbn << endl << "Copies left : " << cp << endl;
     }
     void addcp(int n) {
         cp+=n;
         cout << "Added - " << n << " Copies\n";
     }
     void details() {
         cout << "Title : " << title << endl << "Author : " << author << endl << "Book Number : " << isbn << endl << "Copies left : " << cp << endl;
     }
 };
 int main() {
     book b("Attack On Titan","Hajime Isayama",139,100);
     b.issuebook();
     b.addcp(1);
     b.details();
 }
