#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

class poly
{

     float a,b,c;

     public:

     poly()
     {

          a=b=c=0;

     }

     poly(float a,float b,float c)
     {

          this->a=a;
          this->b=b;
          this->c=c;
          cout<<"\n"<<a<<" x^2 + "<<b<<" x + "<<c;

     }

     //display
     friend poly operator << (ostream &a,poly &p)
     {
     
          cout<<"\n"<<p.a<<" x^2 + "<<p.b<<" x + "<<p.c;
          return p;
     
     }
     
     friend poly operator >> (istream &input,poly &p)
     {
     
          input>>p.a>>p.b>>p.c;
          return p;
     
     }
     
     poly operator + (poly p)
     {
     
          poly temp;
          temp.a=a+p.a;
          temp.b=b+p.b;
          temp.c=c+p.c;
          return temp;
     
     }
     
     void eval()
     {
     
          int x;
          cout<<"\n Enter the value of x:    ";
          cin>>x;
          float sol=(a*x*x)+(b*x)+c;
          cout<<"\n Evaluation of polynomial is:   "<<sol;
     
     }
     
     void solution()
     {
     
          float x1,x2;
          x1=( - b + sqrt ( b * b - 4 * a * c ) ) / ( 2 * a );
          x2=( - b - sqrt ( b * b - 4 * a * c ) ) / ( 2 * a );
          cout<<"\n Root of the quadratic equation are: "<<x1<<"  "<<x2;
     
     }

};

int main()
{
     
     int ch;
     poly p1,p2,p3;
     cout<<"\n Polynomial Operation ";

     while(1)
     {

          cout<<"\n\n Menu";
          cout<<"\n 1. Create polynomial";
          cout<<"\n 2. Accept polynomial";
          cout<<"\n 3. Display polynomial";
          cout<<"\n 4. Add polynomial";
          cout<<"\n 5. Evaluate polynomial";
          cout<<"\n 6. Solutions of polynomial";
          cout<<"\n 7. Exit";
          cout<<"\n Enter Choice:  ";
          cin>>ch;

          switch(ch)
          {

               case 1:
                    cout<<"\n Polynomial after initialization ";
                    cout<<p1;
                    cout<<p2;
                    break;

               case 2:
                    cout<<"\n Enter first polynomial (a,b,c):    ";
                    cin>>p1;
                    cout<<"\n Enter second polynomial (a,b,c):    ";
                    cin>>p2;
                    break;

               case 3:
                    cout<<"\n First polynomial is ";
                    cout<<p1;
                    cout<<"\n Second polynomial is ";
                    cout<<p2;
                    break;

               case 4:
                    p3=p1+p2;
                    cout<<"\n Addition of two polynomial is    ";                    
                    cout<<p3;
                    break;

               case 5:
                    cout<<"\n For first polynomial";
                    p1.eval();
                    cout<<"\n For second polynomial";
                    p2.eval();
                    break;

               case 6:
                    cout<<"\n For first polynomial";
                    p1.solution();
                    cout<<"\n For second polynomial";
                    p2.solution();
                    break;

               case 7:
                    exit(1);
                    break;                    

          }

     }
     return 0;

}
