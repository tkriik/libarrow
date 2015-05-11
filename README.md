# libarrow
This library aims to implement fast linear algebra computations on small fixed size floating-point vectors, matrices and quaternions.
## Status
The vector and matrix modules are nearing completion while the quaternion module is still well underway. No comprehensive tests and benchmarks have been written either. I would not recommend using this library yet.
## Usage
The following table describes the data types available in this library:

| Type name	| Description
| --------	| --------
| vec2f		| 2D single-precision vector
| vec2d		| 2D double-precision vector
| vec3f		| 3D single-precision vector
| vec3d		| 3D double-precision vector
| vec4f		| 4D single-precision vector
| vec4d		| 4D double-precision vector
| mat2f		| 2x2 single-precision matrix
| mat2d		| 2x2 double-precision matrix
| mat3f		| 3x3 single-precision matrix
| mat3d		| 3x3 double-precision matrix
| mat4f		| 4x4 single-precision matrix
| mat4d		| 4x4 double-precision matrix
| quatf		| single-precision quaternion
| quatd		| double-precision quaternion

Vector and quaternion values can be initialized either directly at declaration or with the `vec*_make/quat*_make` functions:
```C
vec3f v = {4, -4.5, 3};
vec3f w = vec3f_make(3, 1.5, -2);
quatd q = quatd_make(0.5, 0.5, 0.5, 1);
```
Matrix values can also be initialized directly at declaration:
```C
mat3f m = {
    1, 2, 3,
    4, 5, 6,
    7, 8, 9
};
```
There are more ways of constructing vectors, matrices and quaternions documented in the reference.

Scalar and component-wise arithmetic work as you'd expect:
```C
v += 1;		// v = {5, -3.5, 4}
w *= 2;		// w = {6, 3, -4}
v *= w;		// v = {30, -10.5, -16}
w -= v;		// w = {-24, -6.5, -20}
q *= q;		// q = {0.25, 0.25, 0.25, 1}
m += 3;		// m = {4, 5, 6, 7, 8, 9, 10, 11, 12}
```
See [GCC's documentation on vector extensions](https://gcc.gnu.org/onlinedocs/gcc/Vector-Extensions.html) for more information how you can operate on vectorized data types.
