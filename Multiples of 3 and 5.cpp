//3 AP's can be formed with common difference 3 ,5 and 15
//Principle of inclusion and exclusion is used
//sum of AP is : ((N)*(first term +last term))/2;
#include<iostream>
using namespace std;
int main(void)
{
    int a=1000/3;      //1st AP contains 333 terms
    int b=995/5;       //2nd AP contains 199 terms
    int c=1000/15;     //3rd AP contains 66 terms
    int lt1=a*3;       //last term of 1st AP
    int lt2=b*5;       //last term of 2nd AP
    int lt3=c*15;      //last term of 3rd AP
    int s1=((a)*(3+lt1))/2;      //sum of 1st AP
    int s2=((b)*(5+lt2))/2;      //sum of 2nd AP
    int s3=((c)*(15+lt3))/2;     //sum of 3rd AP
    int fsum=s1+s2-s3;           //Principle of includion and exclusion
    cout<<fsum<<endl;
    return 0;
}
