#include <iostream>
using namespace std;

class Matrix
{
    int a[3][3], b[3][3];
    public:
    void input()
    {
        cout << "Enter data of a :" << endl;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout << "a " << i << ", " << j << " : ";
                cin >> a[i][j];
            }
        }
        cout << "Enter data of b :" << endl;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout << "b" << i << ", " << j << " : ";
                cin >> b[i][j];
            }
        }
    }
    void show()
    {
        cout << "\nA:"<<endl;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
        cout << "\nB:"<<endl;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout << b[i][j] << "\t";
            }
            cout << endl;
        }
    }
    Matrix friend operator +(Matrix first, Matrix second)
    {
        Matrix sum;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                sum.a[i][j] = first.a[i][j] + second.a[i][j]; 
            }
        }
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                sum.b[i][j] = first.b[i][j] + second.b[i][j]; 
            }
        }
        return sum;
    }
};

int main()
{
    Matrix obj1, obj2, sum;
    cout << "obj 1 : \n"<<endl;   
    obj1.input();
    obj1.show();

    cout << "obj 2 : \n"<<endl;   
    obj2.input();
    obj2.show();

    sum = obj1+obj2;
    sum.show();
    return 0;
}