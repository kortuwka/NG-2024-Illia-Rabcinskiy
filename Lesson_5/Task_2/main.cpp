#include <iostream>
#include <string>

using namespace std;

class information{
public:
    string book_article_abstract;
    string Name;
    string Author;
    int Adress;
    string Date_create;
    void cout_all(){
        cout << "book_article_abstract: " << book_article_abstract;
        cout << endl;
        cout << "Name: " << Name;
        cout << endl;
        cout << "Author: " << Author;
        cout << endl;
        cout << "Adress: " << Adress;
        cout << endl;
        cout << "Date_create: " << Date_create;
        cout << endl;
    }

};


int main(){

    information book_acticle_abstract_1;
    information book_acticle_abstract_2;
    information book_acticle_abstract_3;
    information book_acticle_abstract_4;
    information book_acticle_abstract_5;
    int Pointer;
    int many = 0;
    int ID;
    bool Library_work = true;
    while(Library_work == true){
        cout << "Write 0 if you want to exit the application, 1 if you want to create a book, abstract, article (max 5) 2 if you want to find something behind the address";
        cin >> Pointer;
        cout << endl;
        if(Pointer == 0){
            Library_work = false;
        }else if(Pointer == 1){
            if(many == 0){
                many++;
                cout << "Write a book, abstract, article: ";
                cin >> book_acticle_abstract_1.book_article_abstract;
                cout << endl;
                cout << "Name: ";
                cin >> book_acticle_abstract_1.Name;
                cout << endl;
                cout << "Author: ";
                cin >> book_acticle_abstract_1.Author;
                cout << endl;
                cout << "Address from 1 to 10000 ATTENTION the address of the previous book should not coincide with this one: ";
                cin >> book_acticle_abstract_1.Adress;
                cout << endl;
                cout << "Date create: ";
                cin >> book_acticle_abstract_1.Date_create;
                cout << endl;

            }else if(many == 1){
                many++;
                cout << "Write a book, abstract, article: ";
                cin >> book_acticle_abstract_2.book_article_abstract;
                cout << endl;
                cout << "Name: ";
                cin >> book_acticle_abstract_2.Name;
                cout << endl;
                cout << "Author: ";
                cin >> book_acticle_abstract_2.Author;
                cout << endl;
                cout << "Address from 1 to 10000 ATTENTION the address of the previous book should not coincide with this one: ";
                cin >> book_acticle_abstract_2.Adress;
                cout << endl;
                cout << "Date create: ";
                cin >> book_acticle_abstract_2.Date_create;
                cout << endl;

            }else if(many == 2){
                many++;
                cout << "Write a book, abstract, article: ";
                cin >> book_acticle_abstract_3.book_article_abstract;
                cout << endl;
                cout << "Name: ";
                cin >> book_acticle_abstract_3.Name;
                cout << endl;
                cout << "Author: ";
                cin >> book_acticle_abstract_3.Author;
                cout << endl;
                cout << "Address from 1 to 10000 ATTENTION the address of the previous book should not coincide with this one: ";
                cin >> book_acticle_abstract_3.Adress;
                cout << endl;
                cout << "Date create: ";
                cin >> book_acticle_abstract_3.Date_create;
                cout << endl;

            }else if(many == 3){
                many++;
                cout << "Write a book, abstract, article: ";
                cin >> book_acticle_abstract_4.book_article_abstract;
                cout << endl;
                cout << "Name: ";
                cin >> book_acticle_abstract_4.Name;
                cout << endl;
                cout << "Author: ";
                cin >> book_acticle_abstract_4.Author;
                cout << endl;
                cout << "Address from 1 to 10000 ATTENTION the address of the previous book should not coincide with this one: ";
                cin >> book_acticle_abstract_4.Adress;
                cout << endl;
                cout << "Date create: ";
                cin >> book_acticle_abstract_4.Date_create;
                cout << endl;

            }else if(many == 4){
                many++;
                cout << "Write a book, abstract, article: ";
                cin >> book_acticle_abstract_5.book_article_abstract;
                cout << endl;
                cout << "Name: ";
                cin >> book_acticle_abstract_5.Name;
                cout << endl;
                cout << "Author: ";
                cin >> book_acticle_abstract_5.Author;
                cout << endl;
                cout << "Address from 1 to 10000 ATTENTION the address of the previous book should not coincide with this one: ";
                cin >> book_acticle_abstract_5.Adress;
                cout << endl;
                cout << "Date create: ";
                cin >> book_acticle_abstract_5.Date_create;
                cout << endl;

            }

        }else if(Pointer == 2){
            cout << "Write ID books: ";
            cin >> ID;
            cout << endl;
            if (ID == book_acticle_abstract_1.Adress){
                book_acticle_abstract_1.cout_all();
            }else if (ID == book_acticle_abstract_2.Adress){
                book_acticle_abstract_2.cout_all();
            }else if (ID == book_acticle_abstract_3.Adress){
                book_acticle_abstract_3.cout_all();
            }else if (ID == book_acticle_abstract_4.Adress){
                book_acticle_abstract_4.cout_all();
            }else if (ID == book_acticle_abstract_5.Adress){
                book_acticle_abstract_5.cout_all();
            }else {
                cout << "Nothing found" << endl;
            }
        }
    }

    return 0;
}
