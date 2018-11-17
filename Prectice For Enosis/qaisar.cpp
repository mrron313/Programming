#include<iostream>
#include<fstream>
using namespace std;


int main()
{
        int arr[10][10]={0};

    ifstream file;
    file.open("out.txt");
    if(!file.is_open())
    {
        cout<<"error while opening the file";


    }
    else
    {
        cout<<"file opened successfully"<<endl;

 int number;
 while(file>>number)
 {
     cout<<number;
     for(int i=0;i<2;i++)
     {
         for(int j=0;j<2;j++)
         {
             arr[i][j]=number;
         }
     }
 }

 for(int i=0;i<2;i++)
     {
         for(int j=0;j<2;j++)
         {
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
     }


        file.close();
    }

return 0;
}
