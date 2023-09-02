#include<iostream>
#include<vector>
using namespace std;

void Print(vector<int> arr)
{
    for(int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
    cout << "\n";
}

void Print(vector<vector<int>> arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr[0].size(); j++)
            cout << arr[i][j];
            cout << "\n";
    }

}
int main()
{
   int n;
   cout << "Enter the number of elements : ";
   cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++)
   cin >> v[i];
   Print(v);
   cout << "Enter the number of rows and columns : ";
   int x,y;
   cin >> x >> y;
   vector<vector<int>> m(x,vector<int> (y));
   for(int i = 0; i < x; i++)
   {
       
       for(int j = 0; j < y; j++)
       {
           cin >> m[i][j];
       }
   }
   Print(m);
   return 0;
}