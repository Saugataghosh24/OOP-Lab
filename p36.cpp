#include <iostream>
#include <stdlib.h>
using namespace std;

class Array{
public:
    int* arr;
    int length;
    Array(int k=0)
    {
        arr = (int *)malloc(sizeof(int)*k);
        length = k;
        for (int i=0; i<length; i++)
            arr[i]=0;
    }
    int& operator [] (int k)
    {
        return arr[k];
    }
    void show()
    {
        for (int i=0; i<length; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

class Table{
    Array* tab;
    int row, col;
public:
    Table(int k=0, int l=0)
    {
        row=k;
        col=l;
        tab = (Array *)malloc(sizeof(Array)*k);
        for (int i=0; i<k; i++)
            tab[i] = Array(l);
    }
    Array operator [] (int k)
    {
        return tab[k];
    }
    void show()
    {
        for (int i=0; i<row; i++)
            tab[i].show();
    }
    friend istream& operator >> (istream& is, Table obj)
    {
        for (int i=0; i<obj.row; i++){
            for (int j=0; j<obj.col; j++){
                is >> obj[i][j];
            }
        }
        return is;
    }
    friend ostream& operator << (ostream& os, Table obj)
    {
        for (int i=0; i<obj.row; i++){
            for (int j=0; j<obj.col; j++){
                os << obj[i][j] << " ";
            }
            os << "\n";
        }
        return os;
    }
};
int main()
{
    Table t(4,5), t1(4,5);
    cin >> t;
    t[0][0] = 5;
    int x = t[2][3];
    t1 = t;
    cout << t << "\n" << t1;
}
