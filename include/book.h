#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <random>
#include <string>

using namespace std;

class book
{
    public:
        book();
        virtual ~book();

        string Gettitle() { return title; }
        void Settitle(string val) { title = val; }
        string Getauthor() { return author; }
        void Setauthor(string val) { author = val; }
        int Getpages() { return pages; }
        void Setpages(int val) { pages = val; }

        void Setnext(book * val){next = val;}
        book * Getnext(){return next;}



    void Display()
    {
        cout << "Title: " << title << "    " << " Author: " << author
        << "      " << " pages: " << pages << endl;
    }

    private:
        string title;
        string author;
        int pages;
        book * next;
};

#endif // BOOK_H
