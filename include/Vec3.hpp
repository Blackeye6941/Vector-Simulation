#ifndef VEC3_HPP
#define VEC3_HPP
struct alignas(alignof(double)) Vec3{
	double x,y,z;
};
Vec3 add(Vec3 a, Vec3 b);
Vec3 sub(Vec3 a, Vec3 b);
double magnitude(Vec3 a);
double dot(Vec3 a, Vec3 b);
Vec3 cross(Vec3 a, Vec3 b);
#endif
