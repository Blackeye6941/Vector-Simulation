
#include "Vec3.hpp"
#include<cmath>
#include<optional>

double Vec3::length() const noexcept {
	return std::sqrt(x*x+y*y+z*z);
}
double Vec3::length_squared() const noexcept {
	return x*x+y*y+z*z;
}
std::optional<Vec3> Vec3::unit() const {
	double len = length();
	if(len < 1e-12)
		return std::nullopt;
	return *this/len;
}
double dot(const Vec3 &a, const Vec3 &b){
	return a.x*b.x+a.y*b.y+a.z*b.z;
}
Vec3 cross(const Vec3 &a, const Vec3 &b){
	return {
		a.y*b.z-a.z*b.y,
		a.z*b.x-a.x*b.z,
		a.x*b.y-a.y*b.x
	};
}
