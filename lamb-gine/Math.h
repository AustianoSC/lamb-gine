// Math.h: Math Library with Vectors, Matrices, and Quaternions
// By: Austin Lamb

#pragma once

#define _USE_MATH_DEFINES

#include <math.h>
#include <limits>
#include <algorithm>

namespace Math {
	const double pi = M_PI;
	const double piOverTwo = M_PI_2;
	const double piOverFour = M_PI_4;
	const double twoPi = 2 * M_PI;
	const double infinity = std::numeric_limits<double>::infinity();
	const double negativeInfinity = -std::numeric_limits<double>::infinity();

	// Get the max of two values
	template <typename T>
	T max(const T& a, const T& b) {
		return std::max(a, b);
	}

	// Get the min of two values
	template <typename T>
	T min(const T& a, const T& b) {
		return std::min(a, b);
	}

	// Convert degrees to radians
	inline double toRadians(const double& degrees) {
		return degrees * pi / 180.0;
	}

	// Convert radians to degrees
	inline double toDegrees(const double& radians) {
		return radians * 180.0 / pi;
	}

	// Cosine
	template <typename T>
	inline T cos(const T& angle) {
		return ::cos(angle);
	}

	// Sine
	template <typename T>
	inline T sin(const T& angle) {
		return ::sin(angle);
	}

	// Tangent
	template <typename T>
	inline T tan(const T& angle) {
		return ::tan(angle);
	}

	// Arc Cosine
	template <typename T>
	inline T acos(const T& angle) {
		return ::acos(angle);
	}

	// Arc Sine
	template <typename T>
	inline T asin(const T& angle) {
		return ::asin(angle);
	}

	// Arc Tangent
	template <typename T>
	inline T atan(const T& angle) {
		return ::atan(angle);
	}

	// Arc Tangent 2
	// Used to get angle from positive x-axis usually
	// Return value: +/- Pi
	inline double atan2(double y, double x) {
		return ::atan2(y, x);
	}

	// Cosecant
	template <typename T>
	inline T csc(const T& angle) {
		return 1.0 / ::sin(angle);
	}

	// Secant
	template <typename T>
	inline T sec(const T& angle) {
		return 1.0 / ::cos(angle);
	}

	// Cotangent
	template <typename T>
	inline T cot(const T& angle) {
		return 1.0 / ::tan(angle);
	}

	// Square root of number
	template <typename T>
	inline T sqrt(const T& num) {
		return ::sqrt(num);
	}

	// Square number
	template <typename T>
	inline T square(const T& num) {
		return num * num;
	}

	// Round number
	template <typename T>
	inline T round(const T& num) {
		return ::round(num);
	}

	// Get ceiling of number
	template <typename T>
	inline T ceil(const T& num) {
		return ::ceil(num);
	}

	// Get floor of number
	template <typename T>
	inline T floor(const T& num) {
		return ::floor(num);
	}

	// Truncate the number
	template <typename T>
	inline T truncate(const T& num) {
		return ::trunc(num);
	}

	// Linear Interpolation
	template <typename T>
	inline double lerp(const T& a, const T& b, const double& f) {
		return a + f * (b - a);
	}
}