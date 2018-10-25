#include<iostream>
#include<cstring>
#include<string>
using namespace std;
class student
{
public:
    int roll;
    string name;
    int gpa;
    void get()
    {
        cout<<"enter roll,name,cgpa"<<endl;
        cin>>roll>>name>>gpa;
    }
};
void swapstr(std::string *a,std::string *b)
{
    string *t;
    *t=*a;
    *a=*b;
    *b=*t;
}
void swap1(int *a,int *b)
{
    int *t;
    *t=*a;
    *a=*b;
    *b=*t;
}
int partition1(student arr[],int low,int high)
{
    int j;
    string pivot;
    pivot=arr[high].name;
    int i=low-1;
    for(j=0; j<high; ++j)
    {
        if(arr[j].name.compare(pivot)>0)
        {
            i++;
            swapstr(&arr[i].name,&arr[j].name);
            swap1(&arr[i].roll,&arr[j].roll);
            swap1(&arr[i].gpa,&arr[j].gpa);
        }
    }
    swapstr(&arr[i+1].name,&arr[high].name);
    swap1(&arr[i+1].roll,&arr[high].roll);
    swap1(&arr[i+1].gpa,&arr[high].gpa);
    return (i+1);
}
void quicksort(student arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partition1(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
int main()
{
    int i;
    student *arr=new student[3];
    //int roll[20];
    //int cgpa[20];
    //string name1[50];
    for(i=0; i<3; i++)
    {
        arr[i].get();
        //cgpa[i]=obj[i].gpa;
        //roll[i]=obj[i].roll;
    }
    quicksort(arr,0,2);
    for(i=0;i<3;i++)
        cout<<arr[i].name<<endl;
    return 0;
}
// /home/sidntrivedi012/Code/LabAssignments/Sem3/labtest1.cpp|42|error: could not convert ‘(arr + ((sizetype)(((long unsigned int)i) * 32)))’ from ‘std::__cxx11::string* {aka std::__cxx11::basic_string<char>*}’ to ‘std::__cxx11::string {aka std::__cxx11::basic_string<char>}’|
// /home/sidntrivedi012/Code/LabAssignments/Sem3/labtest1.cpp|51|error: request for member ‘size’ in ‘ar’, which is of pointer type ‘std::__cxx11::string* {aka std::__cxx11::basic_string<char>*}’ (maybe you meant to use ‘.’ ?)|
