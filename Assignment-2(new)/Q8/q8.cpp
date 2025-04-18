/*
 * q8.cpp
 *
 *  Created on: 29-Aug-2024
 *      Author: root
 */

#include <iostream>
using namespace std;

class Library
{
    protected:
    int book_accession,no_of_books;
    public:
    Library()
    {
        book_accession=0;
        no_of_books=0;
    }
};
class Books :public Library
{
    public:
        string title;
        string author;
        int Publish_year;
        float Price;
    Books()
    {
        author="";
        Publish_year=0;
        title="";
        Price=0.0;
    }
    void input()
    {
        cout<<"Enter the accession number    :";
        cin>>book_accession;

        cout<<"Enter the Book Title          :";
        cin>>title;

        cout<<"Enter the Author name of book :";
        cin>>author;

        do {
            int flag=0;
            cout<<"Enter the Publish Year (YYYY) :";
            cin>>Publish_year;
            if(flag!=0) cout<<"Invalid year re-enter please!!\n";
            flag++;
        } while(Publish_year<1000);

        cout<<"Enter the Price of Book       :";
        cin>>Price;

        no_of_books++;
    }
    void display()
    {
        cout<<"Accession number :"<<book_accession<<endl;
        cout<<"Title of Book    :"<<title<<endl;
        cout<<"Author name      :"<<author<<endl;
        cout<<"Publish Year     :"<<Publish_year<<endl;
        cout<<"Price of Book    :"<<Price<<endl<<endl;
    }
};

int main()
{
    int size,count=0,flag=0;
    string search;
    cout<<"Enter the number of books :";
    cin>>size;
    Books b[size];

    int ch;
    do {
        cout<<"1. Input\n";
        cout<<"2. Display data\n";
        cout<<"3. Search by Title\n";
        cout<<"4. Search by Author name\n";
        cout<<"5. Exit\nchoose :";
        cin>>ch;

        switch(ch)
        {
            case 1:
            if(count>size-1)
            {
                cout<<"\nSize is Full\n";
                break;
            }

                b[count].input();
                count++;
                break;
            case 2:
                for(int i=0;i<count;i++)
                {
                    cout<<"\n\nBook "<<i+1<<endl;
                    b[i].display();
                }
                cout<<"\n\tTotal books : "<<count<<endl;
                break;
            case 3:
            cout<<"Enter the book Title to search :";
            cin>>search;
                for(int i=0;i<count;i++)
                {
                    if(search==b[i].title)
                    {
                        b[i].display();
                        flag=1;
                    }
                }
                if(flag==0)
                {
                    cout<<"No book found with title "<<search<<endl;
                }
                break;
            case 4:
            cout<<"Enter the book author name to search :";
            cin>>search;
                for(int i=0;i<count;i++)
                {
                    if(search==b[i].author)
                    {
                        b[i].display();
                        flag=1;
                    }
                }
                if(flag==0)
                {
                    cout<<"No book found written by "<<search<<endl;
                }
                break;
            case 5:
                cout<<"Thank you !!";
                break;
            default:
                cout<<"Invalid";
        }
    } while(ch != 5);
    return 0;
}
