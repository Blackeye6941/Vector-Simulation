
#include "Vec3.hpp"
#include<cmath>

Vec3 add(Vec3 a, Vec3 b){
	return {
		a.x+b.x,
		a.y+b.y,
		a.z+b.z
	};
}
Vec3 sub(Vec3 a, Vec3 b){
	return {
		a.x-b.x,
		a.y-b.y,
		a.z-b.z
	};
}
double magnitude(Vec3 a){
	return std::sqrt(a.x*a.x+a.y*a.y+a.z*a.z);
}
double dot(Vec3 a, Vec3 b){
	return a.x*b.x+a.y*b.y+a.z*b.z;
}
Vec3 cross(Vec3 a, Vec3 b){
	return {
		a.y*b.z-a.z*b.y,
		a.z*b.x-a.x*b.z,
		a.x*b.y-a.y*b.x
	};
}
