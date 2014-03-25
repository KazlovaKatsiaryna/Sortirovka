#include <iostream>
#include <cstring>
#include <fstream>
#include "Sorting.h"
#include <iomanip>
using namespace std;
const int n = 7;


using namespace std;;
void vvod (juv*a)
{
    ifstream fin ("Juvelirny.txt");

    for (int i=0; i<n-1; i++)
    {
        fin >> a[i].name;
        fin >> a[i].price;
        fin >> a[i].date;
        fin >> a[i].surname;
    }
}
void output (juv*a)
{
    cout << left << setw (12) << "NAME" << setw(9) << "PRICE" << setw(18) << "DATE" << setw(7) <<"SURNAME" << endl;
    cout<<endl;
    for (int i=0; i<n-1; i++)
    {
        cout << left << setw (17) << a[i].name;
        cout << setw (17) << a[i].price;
        cout << setw (17) << a[i].date;
        cout << setw (11) << a[i].surname;
        cout << endl;
    }
    cout << endl;

}
void vivod (juv*a, int i)
{
    cout << left << setw (17) << a[i].name;
    cout << setw (17) << a[i].price;
    cout << setw (17) << a[i].date;
    cout << setw (7) << a[i].surname;
    cout << endl;
}
void change (juv*a, int b, int c)
{
    a[6]=a[b];
    a[b]=a[c];
    a[c]=a[6];
}
int sravneniedate(char *x, char *y)
{
    for(int i=6; i<10; i++)
        if (x[i]!=y[i])
        {
            if(x[i]<y[i]) return 1;
            if(x[i]>y[i]) return 2;
        }
    for(int i=3; i<5; i++)
        if (x[i]!=y[i])
        {
            if(x[i]<y[i]) return 1;
            if(x[i]>y[i]) return 2;
        }
    for(int i=0; i<2; i++)
        if (x[i]!=y[i])
        {
            if(x[i]<y[i]) return 1;
            if(x[i]>y[i]) return 2;
        }
}

void sorting (juv*a, int b, int c, int x)
{
    int s, r, l;
    s=b;
    r=c;
    if(x==2)
    {
        l=a[(b+c)/2].price;

        do
        {
            while (a[s].price<l)
                s++;
            while (a[r].price>l)
                r--;
            if(s<= r)
            {
                change(a,s,r);
                s++;
                r--;
            }

        }
        while (s<=r);
        if (s<c)
            sorting(a,s,c,2);
        if (b<r)
            sorting(a,b,r,2);
    }
}


void sortingchar(juv*a, int b, int c, int x)
{
    int s, r;
    char k[20]= {0};
    s=b;
    r=c;
    if(x==1)
    {
        strcpy(k,a[(b+c)/2].name);
        do
        {
            while (strcmp(a[s].name,k)<0)
                s++;
            while (strcmp(a[r].name,k)>0)
                r--;
            if(s<= r)
            {
                change(a,s,r);
                s++;
                r--;
            }

        }
        while (s<=r);
        if (s<c)
            sortingchar(a,s,c,1);
        if (b<r)
            sortingchar(a,b,r,1);
    }



    else
    int s, r;
    char l[20]= {0};
    s=b;
    r=c;
    if(x==3)
    {
        strcpy(l,a[(b+c)/2].surname);
        do
        {
            while (strcmp(a[s].surname,l)<0)
                s++;
            while (strcmp(a[r].surname,l)>0)
                r--;
            if(s<= r)
            {
                change(a,s,r);
                s++;
                r--;
            }

        }
        while (s<=r);
        if (s<c)
            sortingchar(a,s,c,3);
        if (b<r)
            sortingchar(a,b,r,3);
    }
}
//    {
//        int s, r;
//        char l[20]= {0};
//        s=b;
//        r=c;
//        strcpy(l,a[(b+c)/2].dat);
//        do
//        {
//            while (sravneniedate(a[s].dat,l)==1)
//                s++;
//            while (sravneniedate(a[r].dat,l)==2)
//                r--;
//            if(s<=r)
//            {
//                change(a,s,r);
//                s++;
//                r--;
//            }
//
//        }
//        while (s<=r);
//        if (s<c)
//            sortingchar(a,s,c,4);
//        if (b<r)
//            sortingchar(a,b,r,4);
//    }

void sortprice(juv*a)
{
    cout << "Sort by price" << endl;
    cout << left << setw (12) << "Name" << setw(9) << "Price" << setw(16) << "Date" << setw(10) <<"Surname" << setw(10) << endl;
    sorting(a,0,n,2);
    cout<< endl;
}
void sortname(juv*a)
{
    cout << "Sort by  names" << endl;
    cout << left << setw (12) << "Name" << setw(9) << "Price" << setw(16) << "Date" << setw(10) <<"Surname" << setw(10) << endl;
    sortingchar(a,0,n,1);
    cout<< endl;
}
void sortdate(juv*a)
{
    cout << "Sort by date" << endl;
    cout << left << setw (12) << "Name" << setw(9) << "Price" << setw(16) << "Date" << setw(10) <<"Surname" << setw(10) << endl;
    sortingchar(a,0,n,4);
    cout<< endl;
}
void sortsurname(juv*a)
{
    cout << "Sort by  surnames" << endl;
    cout << left << setw (12) << "Name" << setw(9) << "Price" << setw(16) << "Date" << setw(10) <<"Surname" << setw(10) << endl;
    sortingchar(a,0,n,3);
    cout<< endl;
}
