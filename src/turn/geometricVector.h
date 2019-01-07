#pragma once
#include <exception>
#include <iostream>

template <class T>
std::pair<T, T> operator- (std::pair<T, T> A, std::pair<T, T> B) {
	return std::make_pair(A.first - B.first, A.second - B.second);
}

template <class T>
std::pair<T, T> operator+ (std::pair<T, T> A, std::pair<T, T> B) {
	return std::make_pair(A.first + B.first, A.second + B.second);
}

template <class T> 
class geomVector {
private:
	std::pair<T, T> A;
	std::pair<T, T> B;
public:
	geomVector(std::pair<T, T> A, std::pair<T, T> B) {
		this -> A = A;
		this -> B = B;
	}

	std::pair<T, T> getA() {
		return A;
	}

	std::pair<T, T> getB() {
		return B;
	}

	void turn90(int a) {
		bool sign = a > 0;
		int degree = abs(a);

		while (degree >= 360) {
			degree = degree - 360;
		}

		if (degree == 0) {
			return;
		}

		if (degree % 90 != 0) {
			std::cerr << "Not a multiple of 90 degrees" << std::endl;
			return;
		}

		int k = degree / 90;
		
		auto temp = A;
		A = A - temp;
		B = B - temp;

		for (int i = 0; i < k; i++) {
			turn90main(sign);
		}

		A = A + temp;
		B = B + temp;
	}
private:
	void turn90main(bool sign) {
		if (sign) { // > 0
			T temp = B.second;
			B.second = B.first;
			B.first = -temp;
		}
		else {  // < 0
			T temp = B.first;
			B.first = B.second;
			B.second = -temp;
		}
			
	}
};
