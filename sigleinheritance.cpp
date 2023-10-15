#include<iostream>
using namespace std;
class base_class
{
    public :
    int cal_sum(int a,int b)
    {
        return a+b;
    }
};
class derived_class : public base_class 
{
    public: // declare cal_mul as public
    int cal_mul(int a,int b); // declare cal_mul function
};
int derived_class::cal_mul(int a,int b) 
{
    return a*b;
}
int main()
{
    int i,j;
    derived_class d;
    cout<<"enter the two number : ";
    cin>>i>>j;
    cout<<"the sum of two number is : "<<d.cal_sum(i,j)<<"\n"; 
    cout<<"the multiplication of two number is : "<<d.cal_mul(i,j)<<"\n"; 
    cin.get(); 
    return 0;
}
