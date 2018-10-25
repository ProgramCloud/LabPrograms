#include<iostream>
using namespace std;
template <typename T>
class Sort{
public:
T *ptr;
int size;
void isort1(T*,int );
void ssort1(T*,int );
void print();
};

template <typename T>
void Sort<T>::isort1(T a[],int l)
{
    int pos,nextpos,t,j;pos=0;nextpos=0;
    for(pos=1;pos<l;pos++)
    {
        nextpos=pos;
        while(a[nextpos]>a[nextpos-1] && nextpos>0)
        {
            t=a[nextpos];
            a[nextpos]=a[pos];
            a[pos]=t;
            nextpos-=1;
        }
    }   
}

template <typename T>
void Sort<T>::ssort1(T a[],int l)
{
    int i,j,t,pos,s;s=99999999;
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(a[j]<a[i])
            {
                s=a[j];
                pos=j;
            }
        }
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    return a;
}

template <typename T>
void Sort<T>::print(){
    for(int i=0;i<l;i++)
        cout<<a[i]<<" ";
        cout<<endl;
}

int main()
{
    int a[6]={10,5,3,90,56,43};
    int n=sizeof(a)/sizeof(a[0]);
    Sort<int> a1;
    a1.isort1(a,n);
    a1.print();
    return 0;
}