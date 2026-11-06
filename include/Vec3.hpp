#ifndef VEC3_HPP
#define VEC3_HPP
struct alignas(alignof(double)) Vec3{
	double x,y,z;
};

constexpr Vec3 operator+(const Vec3 &a, const Vec3 &b) noexcept{
	return {
		a.x+b.x,
		a.y+b.y,
		a.z+b.z
	};
}
constexpr Vec3 operator-(const Vec3 &a, const Vec3 &b) noexcept {
	return {
		a.x-b.x,
		a.y-b.y,
		a.z-b.z
	};
};
constexpr Vec3 operator*(const Vec3 &a, double b) noexcept {
	return {
		a.x*b,
		a.y*b,
		a.z*b
	};
}

constexpr Vec3 operator/(const Vec3 &a, double b) noexcept {
	return {
		a.x/b,
		a.y/b,
		a.z/b
	};
}
constexpr Vec3 operator-(const Vec3 &a) noexcept {
	return {
		-a.x,
		-a.y,
		-a.z
	};
}
double magnitude(Vec3 a);
double dot(Vec3 a, Vec3 b);
Vec3 cross(Vec3 a, Vec3 b);
#endif
