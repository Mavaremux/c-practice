#include <iostream>
using namespace std;



  double cubo(double cinnum)
  {
    double result = cinnum *cinnum * cinnum;
    return result;
  }

int main()
    
{
double cinnum;
cout << "escriba el numero: ";
cin >> cinnum;
double answer = cubo(cinnum);
cout << answer;
    
   

    return 0;
}



//tambien se puede hacer esto pero lo comentare por que que ladilla trabajar superpuesto

//double cube(double num){
//return num * num * num;

//}


//int main()
//{
//cout << cube(4);


//return 0;
//}