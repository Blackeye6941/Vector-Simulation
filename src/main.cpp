#include<iostream>
#include<cassert>
#include<cmath>
#include<cstddef>
#include "Vec3.hpp"

bool appxEqual(double a, double b){
	return std::abs(a-b) <= 1e-9;
}
int main(){
	Vec3 a = {4,2,1};
	Vec3 b = {3,1,5};
	Vec3 sum = add(a,b);
	assert(sum.x == 7 && sum.y == 3 && sum.z == 6);
	Vec3 diff = sub(a,b);
	assert(diff.x == 1 && diff.y == 1 && diff.z == -4);
	assert(appxEqual(magnitude(a), std::sqrt(21.0)));
	Vec3 c = cross(a,b);
	assert(c.x==9 && c.y == -17 && c.z == -2);
	double d = dot(a,b);
	assert(d == 19);
	static_assert(alignof(Vec3) == alignof(double));
	static_assert(offsetof(Vec3, x) == 0);

	static_assert(offsetof(Vec3, y) == 8);

	static_assert(offsetof(Vec3, z) == 16);
	std::cout << "All tests passed";
}
