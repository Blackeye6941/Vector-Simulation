#include<iostream>
#include<cassert>
#include<cmath>
#include<optional>
#include<cstddef>
#include "Vec3.hpp"

bool appxEqual(double a, double b){
	return std::abs(a-b) <= 1e-9;
}
int main(){
	constexpr Vec3 a = {4,2,1};
	constexpr Vec3 b = {3,1,5};
	constexpr Vec3 v = {3,4,0};
	constexpr Vec3 sum = a+b;
	static_assert(sum.x == 7 && sum.y == 3 && sum.z == 6);
	constexpr Vec3 diff = a-b;
	static_assert(diff.x == 1 && diff.y == 1 && diff.z == -4);
	constexpr Vec3 mul = a*2.0;
	static_assert(mul.x == 8 && mul.y == 4 && mul.z == 2);
	constexpr Vec3 div = a/2.0;
	static_assert(div.x == 2 && div.y == 1 && div.z == 0.5);
	constexpr Vec3 neg = -a;
	static_assert(neg.x == -4 && neg.y == -2 && neg.z == -1);
	
	assert(appxEqual(a.length(), std::sqrt(21.0)));
	std::optional<Vec3> u = v.unit();
	Vec3 z{0,0,0};
	assert(!z.unit().has_value())
;		
	if(u){
		assert(appxEqual(u->x, 0.6));

		assert(appxEqual(u->y, 0.8));

		assert(appxEqual(u->z, 0));
	}else{
		std::cout << "nullopt: Unit vector cannot be found for v\n";
	}
	Vec3 c = cross(a,b);
	assert(c.x==9 && c.y == -17 && c.z == -2);
	double d = dot(a,b);
	assert(d == 19);
	std::cout<<"Alignment "<<alignof(Vec3) << '\n';
	static_assert(offsetof(Vec3, x) == 0);

	static_assert(offsetof(Vec3, y) == 8);

	static_assert(offsetof(Vec3, z) == 16);
	std::cout << "All tests passed";
}
