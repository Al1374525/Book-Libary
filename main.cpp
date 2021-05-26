#include <iostream>
#include <random>
#include <string>
#include "book.h"

using namespace std;

char menu();
int main()
{
     book * head = NULL;
     book * curr = NULL;
     string temps;
     string tempa;
     char option;
     int tempd;

     while(option != 'C')
     {
         option = menu();

         switch(option)
         {
         case 'A':
            curr = new book;
            cout << "Book title? " << endl;
            cin.ignore();
            getline(cin,temps);

            curr -> Settitle(temps);

            cout << "Author? " << endl;
            cin.ignore();
            getline(cin,tempa);
            curr -> Setauthor(tempa);

            cout << "Number of pages? " << endl;
            cin >> tempd;
            curr -> Setpages(tempd);
            if(head == NULL){head = curr;}
            else{curr ->Setnext(head); head = curr;}
            break;

         case 'B':
            curr = head;
            while(curr != NULL)
            {
                curr -> Display();
                curr = curr -> Getnext();

            }
        break;

         }

     }
    return 0;
}

char menu()
{
    char option;

    cout << "      My Library" << endl;
    cout << "A)    Add a book" << endl;
    cout << "B)    Display all books" << endl;
    cout << "C)    Exit" << endl;
    cin >> option;

    return option;
}
