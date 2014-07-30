#include<iostream.h>
void main()
{
  
    cout<<"Welcome to Github";
    cout<<"Square"<<square(1.0);
    cout<<"Square"<<add(4.0); 
}

double square(double in_num)
{
  double out_num;
  out_num=in_num*in_num;
  return out_num;
}


double add(double in_num)
{
  double out_num;
  out_num=in_num+in_num;
  return out_num;
}
