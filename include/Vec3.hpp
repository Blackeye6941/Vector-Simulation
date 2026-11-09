#ifndef VEC3_HPP
#define VEC3_HPP
#include<optional>
struct alignas(32) Vec3{
	double x,y,z;
	double length_squared() const noexcept;
	double length() const noexcept;
	std::optional<Vec3> unit() const;
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
double dot(const Vec3 &a, const Vec3 &b);
Vec3 cross(const Vec3 &a, const Vec3 &b);
#endif
