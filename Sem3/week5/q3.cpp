#include<iostream>
using namespace std;
#define MAX_SIZE 50
template <class T>
class Calc
{
    private:
T arr[MAX_SIZE];
int size;
T res;
public:
Calc(int l)
{
    size=l;
    res=0;
}
void get()
{
    int i;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void add()
{
    int i;
    for(i=0;i<size;i++)
    {
        res+=arr[i];
    }
    cout<<res<<endl;
}
void mul()
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
        res*=arr[i];
    }
    cout<<res;
}
void display()
{
   cout<<res<<endl; 
}
};
int main()
{
    int n;
    cout<<"enter size";
    cin>>n;
    Calc<int> a2(n);
    a2.get();
    a2.add();
    Calc<float> a3(n);
    a3.get();
    a3.mul();
}