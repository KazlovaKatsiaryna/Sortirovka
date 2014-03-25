#ifndef FUNS_H_INCLUDED
#define FUNS_H_INCLUDED

struct juv
{
    char name[6];
    int price;
    char surname[11] ;
    char date[11];
};

struct shop;
void vvod (juv*a);
void output (juv*a);
void vivod (juv*a, int i);
void change (juv*a, int b, int c);
int sravneniedate(char *x, char *y);
void sorting (juv*a, int b, int c, int x);
void sortingchar(juv*a, int b, int c, int x);
void sortprice(juv*a);
void sortname(juv*a);
void sortsurname(juv*a);
void sortdate(juv*a);




#endif // FUNS_H_INCLUDED
