#include <sstream>
#include <algorithm>
using namespace std;

class Polynomial {
	vector<double> coeficientes;
	int grado;
	public:
	Polynomial();
	
	void addCoeficientes(int grado, double coef);
	int getGrado();
	int getCoef();

	Polynomial operator+=(const Polynomial& other);
	Polynomial operator+=(int n);

	Polynomial operator+(int n); //Suma de una constante
	Polynomial operator+(const Polynomial& other);//suma de dos polinomios

	Polynomial operator*(const Polynomial& other);//Polinomio x Polinomio
	Polynomial operator*(int n);//Polinomio x Número n
	Polynomial pot(int grado);//potencia a que grado


};

#endif //POLINOMIO_POLINOMIO_H
