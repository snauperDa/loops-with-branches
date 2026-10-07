/******************************
* Цыклы с ветвями             *
* Вариант 11                  *
* Колосков Дмитрий Викторович *
******************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double t, E;

  cout << "Enter the DC value: "; cin >> E;
  cout << "Enter the time value: "; cin >> t;
  
  for(int number = 1; number <= 4; ++number){
    double C, L, R, alpha, beta, gamma, i;

    switch (number)
    {
    case 1:
        C = 0.03;
        L = 0.6;
        R = 5000;
        break;
    case 2:
        C = 0.03;
        L = 6.0;
        R = 10000;
        break;
    case 3:
        C = 0.3;
        L = 0.6;
        R = 5000;
        break;
    case 4:
        C = 0.3;
        L = 6.0;
        R = 10000;
        break;
    default:
        break;
    }

    gamma = R / (2.0 * L);
    beta = (pow(10.0, 6) / (L * C)) - pow(gamma, 2);
    alpha = (pow(10.0, 3) * E * exp( gamma * t * (-1.0))) / L;

    if(beta > 0){
        i = (alpha * sin(sqrt(beta) * t)) / sqrt(beta);
    } else {
        i = (alpha * sinh(sqrt(beta * (-1.0)) * t)) / sqrt(beta * (-1.0));
    }
    
    cout << "Beta = " << beta << " i = " << i << endl;

  }

  return 0;
}
