#include <iostream>
using namespace std;
int glo = 4;
void  sum(){
    int glo = 188;
    cout<<"sum() glo = "<<glo;
}

int main(){
    // int a = 14;
    // int b = 15;
    int glo = 55;
    glo = 99;
    int a =14 , b = 15;
    float d = 3.14;
    char c ='u';
    bool is_true = true, is_false = false;

    sum();
    cout<<"\nmain() glo ="<<glo;
    cout<<"\nThis is about Built in Data Type .\nThis is a = "<<a<<"\nThis is b = "<<b;
    cout<<"\nThis is c = "<<c<<" \nThis is d = "<<d;
    cout<<"\nThis is True = "<<is_true<<" \nThis is False = "<<is_false;

}