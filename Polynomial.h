#include <stdexcept>
#include <iostream>
#include <sstream>
#include <algorithm>
#include "Polynomial.h"

Polynomial::Polynomial(vector<int>& coefn): coefn(coefn), grado(coefn.size()- 1) { }
Polynomial::Polynomial(const Polynomial& other) {
	  grado = other.grado;
	  coefn = other.coefn;
}
Polynomial::addCoeficiente(int grado, double coef) {
	  if (coefn.size() - 1 >= grado) {
		cout << "Grado ya tiene coeficiente\n";
		return;
	  }
	  coefn.push_back(coef);
	  this->grado = grado;
}
Polynomial::getGrado(){
	return grado;
}

Polynomial::getcoef(){ 
	return coefn; 
}

Polynomial::sum(const Polynomial& p1, const Polynomial& p2) {
	vector<int> v;
	int size;
	//creas tus variables
	  auto coef1 = p1.getcoef();
	  auto coef2 = p2.getcoef();
	  
	  if (coef1.size() >= coef2.size()) {
		size = coef1.size();
		fill(coef2.end(), coef2.end() + coef1.size(), 0);
	  } else {
		size = coef2.size();
		fill(coef1.end(), coef1.end() + coef2.size(), 0);
	  }

	  for (int i = 0; i < size + 1; ++i) {
		v.push_back(coef1[i] + coef2[i]); 
	  }
	  return v;
	}

Plynomial::operator+(const Polynomial& other) {
	  auto values = sum(*this, other);
	  return Polynomial(values);
}

Polynomial::operator+=(const Polynomial& other) {
	  auto values = sum(*this, other);
	  coefn = values;
	  return *this;
}

Polynomial::operator+(const int n) {
	  vector<int> v{getcoef()}; // copiamos el vector
	  v[0] += n;
	  return Polynomial(v);
	}

Polynomial::operator+=(const int n) {
	  vector<int> values{getcoef()}; // copiamos el vector
	  values[0] += n;
	  coefn = values;
	  return *this;
	}

Polynomial::operator*(const Polynomial& other) {
	vector<double> values{getcoef()};
	vector<int> grad{getcoef()};
	}

Polynomial::operator*(const int n) {
	vector<double> values{getcoef()}; // copiamos el vector
	  for (int i = 0;i<values.size(); i++){
	  	values[i]*n;
	  }
	  coefn = values;
	  return *this;
	}

Polynomial::Polynomial::potencia(int grado) {

	}
