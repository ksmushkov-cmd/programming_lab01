/************************* 
 * Автор: Смушков Кирилл *
 * Вариант: 12           *
 *                       *
 *************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

  double eccentricity, area1, volume1, area2, volume2;

  double a;
  cout << " a = ";
  cin >> a;
  
  double b;
  cout << " b = ";
  cin >> b;
  
  eccentricity = sqrt(1.0 - (b * b) / (a * a)); 
  
  area1 = 2.0 * M_PI * (b * b + (a * b * asin(eccentricity)) / eccentricity); 
  volume1 = (4.0 * M_PI * a * (b * b)) / 3.0;
  cout << " area1 = " << area1 << " volume1 = " << volume1 << endl;
  
  area2 = 2.0 * M_PI * (a * a + (b * b * log((1.0 + eccentricity) / (1.0 - eccentricity))) / 2.0 * eccentricity);
  volume2 = (4.0 * M_PI * (a * a) * b) / 3.0;
  cout << " area2 = " << area2 << " volume2 = " << volume2 << endl;

  return 0; 
}
