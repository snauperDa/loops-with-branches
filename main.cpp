/******************************
* Цыклы с ветвями             *
* Вариант 11                  *
* Колосков Дмитрий Викторович *
******************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int capacityCount;
  double t, E;

  cout << "Enter the number of times the program will execute the solution."; cin >> capacityCount;
  cout << "Enter the DC value: ";                                             cin >> E;
  cout << "Enter the time value: ";                                           cin >> t;
  
  for (int capacityIndex = 0; capacityIndex < capacityCount; ++capacityIndex) {
    double C, L, R, alpha, beta, gamma, i;

    cout << "Enter several values" << endl;
    cout << "C= "; cin >> C;
    cout << "L= "; cin >> L;
    cout << "R= "; cin >> R;

    gamma = R / (2.0 * L);
    beta = (pow(10.0, 6.0) / (L * C)) - pow(gamma, 2.0);
    alpha = (pow(10.0, 3.0) * E * exp(gamma * t * (-1.0))) / L;

    if (beta > 0.0) {
      i = (alpha * sin(sqrt(beta) * t)) / sqrt(beta);
    } else {
      i = (alpha * sinh(sqrt(beta * (-1.0)) * t)) / sqrt(beta * (-1.0));
    }
    
    cout << "Beta = " << beta << " i = " << i << endl;
  }

  return 0;
}
