/************************* 
 * Автор: Смушков Кирилл *
 * Вариант: 12           *
 *                       *
 *************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

  double a;
  cout << " a = ";
  cin >> a;
  
  double b;
  cout << " b = ";
  cin >> b;
  
  //находим величину эксцентриситета 
  double eccentricity = sqrt(1 - (b * b)/(a * a)); 
  
  //площадь поверхности и объем вытянутого эллипсоида:
  double area1 = 2.0 * M_PI * (b * b + (a * b * asin(eccentricity)) / eccentricity); 
  double volume1 = (4.0 * M_PI * a * (b * b)) / 3.0;
  cout << " area1 = " << area1 << " volume1 = " << volume1 << endl;
  
  //площадь поверхности и объем сплюснутого эллипсоида:
  double area2 = 2.0 * M_PI * (a * a + (b * b * log((1.0 + eccentricity)/(1.0 - eccentricity))) / 2.0 * eccentricity);
  double volume2 = (4.0 * M_PI * (a * a) * b)/3.0;
  cout << " area2 = " << area2 << " volume2 = " << volume2 << endl;

  return 0; 
}