#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Book {
  public:
    string title;
    string author;
    int pages;
    Book(string title, string author, int pages){
      cout << "Creating the book " << title << "..." << endl;
      this->title = title;
      this->author = author;
      this->pages = pages;
      cout << "Done!" << endl;
    }

    void printInfo(){
      cout << "Printing " << this->title << "'s info:" << endl;
      cout << "Title: " << title << endl;
      cout << "Author: " << author << endl;
      cout << "Page: " << pages << endl;
    }
};

int main() {
  string str = "hello", str2;
  Book myBook("The Little Prince", "Owen", 100);
  myBook.printInfo();
}