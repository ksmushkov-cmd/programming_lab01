/************************* 
 * Автор: Смушков Кирилл *
 * Вариант: 12           *
 *                       *
 *************************/
 
#include <iostream>
#include <cmath>

using namespace std;

int main() {
   
  double a = 0.03244;
  
  double b = 0.0172;
  
  double pi = 3.14;
  
  double e = sqrt(1 - (b * b)/(a * a));
  
  double S1 = 2 * pi * (b * b + (a * b * asin(e))/e);
  cout << " S1 = " << S1 << endl;
  
  double V1 = (4 * pi * a * (b * b))/3;
  cout << " V1 = " << V1 << endl;
  
  double S2 = 2 * pi * (a * a + (b * b * log((1 + e)/(1 - e)))/2 * e);
  cout << " S2 = " << S2 << endl;
  
  double V2 = (4 * pi * (a * a) * b)/3;
  cout << " V2 = " << V2 << endl;
 
  return 0; 
}