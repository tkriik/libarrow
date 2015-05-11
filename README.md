# libarrow
This library aims to implement fast linear algebra computations on small fixed size floating-point vectors, matrices and quaternions.

## Status
The vector and matrix modules are nearing completion while the quaternion module is still well underway. No comprehensive tests and benchmarks have been written either. I would not recommend using this library yet.

## Requirements
GCC with support for vector extensions.

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

Single-precision data types take half the space and tend to offer faster computation speed. Double-precision data types should be used if more accuracy is required.

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
See [GCC's documentation on vector extensions](https://gcc.gnu.org/onlinedocs/gcc/Vector-Extensions.html) for more information on operating on vectorized data types.

## Reference
### Vector
| Function prototype				| Return value	| Description
| --------					| --------	| --------
| `vec2f_make(float, float)`			| `vec2f`	| Constructs a single-precision 2D vector.
| `vec2d_make(double, double)`			| `vec2d`	| Constructs a double-precision 2D vector.
| `vec3f_make(float, float, float)`		| `vec3f`	| Constructs a single-precision 3D vector.
| `vec3d_make(double, double, double)`		| `vec3d`	| Constructs a double-precision 3D vector.
| `vec4f_make(float, float, float, float)`	| `vec4f`	| Constructs a single-precision 4D vector.
| `vec4d_make(double, double, double, double)`	| `vec4d`	| Constructs a double-precision 4D vector.
| `vec2f_with(float)`				| `vec2f`	| Constructs a single-precision 2D vector with a default value.
| `vec2d_with(double)`				| `vec2d`	| Constructs a double-precision 2D vector with a default value.
| `vec3f_with(float)`				| `vec3f`	| Constructs a single-precision 3D vector with a default value.
| `vec3d_with(double)`				| `vec3d`	| Constructs a double-precision 3D vector with a default value.
| `vec4f_with(float)`				| `vec4f`	| Constructs a single-precision 4D vector with a default value.
| `vec4d_with(double)`				| `vec4d`	| Constructs a double-precision 4D vector with a default value.
| `vec2f_zero(void)`				| `vec2f`	| Constructs an empty single-precision 2D vector.
| `vec2d_zero(void)`				| `vec2d`	| Constructs an empty double-precision 2D vector.
| `vec3f_zero(void)`				| `vec3f`	| Constructs an empty single-precision 3D vector.
| `vec3d_zero(void)`				| `vec3d`	| Constructs an empty double-precision 3D vector.
| `vec4f_zero(void)`				| `vec4f`	| Constructs an empty single-precision 4D vector.
| `vec4d_zero(void)`				| `vec4d`	| Constructs an empty double-precision 4D vector.
| `vec2f_dot(vec2f, vec2f)`                     | `float`       | Computes the dot product of two single-precision 2D vectors.
| `vec2d_dot(vec2d, vec2d)`                     | `double`      | Computes the dot product of two double-precision 2D vectors.
| `vec3f_dot(vec3f, vec3f)`                     | `float`       | Computes the dot product of two single-precision 3D vectors.
| `vec3d_dot(vec3d, vec3d)`                     | `double`      | Computes the dot product of two double-precision 3D vectors.
| `vec4f_dot(vec4f, vec4f)`                     | `float`       | Computes the dot product of two single-precision 4D vectors.
| `vec4d_dot(vec4d, vec4d)`                     | `double`      | Computes the dot product of two double-precision 4D vectors.
| `vec2f_norm(vec2f)`                           | `float`       | Computes the length of a single-precision 2D vector.
| `vec2d_norm(vec2d)`                           | `double`      | Computes the length of a double-precision 2D vector.
| `vec3f_norm(vec3f)`                           | `float`       | Computes the length of a single-precision 3D vector.
| `vec3d_norm(vec3d)`                           | `double`      | Computes the length of a double-precision 3D vector.
| `vec4f_norm(vec4f)`                           | `float`       | Computes the length of a single-precision 4D vector.
| `vec4d_norm(vec4d)`                           | `double`      | Computes the length of a double-precision 4D vector.
| `vec2f_unit(vec2f)`                           | `vec2f`       | Computes the normalized vector of a single-precision 2D vector.
| `vec2d_unit(vec2d)`                           | `vec2d`       | Computes the normalized vector of a double-precision 2D vector.
| `vec3f_unit(vec3f)`                           | `vec3f`       | Computes the normalized vector of a single-precision 3D vector.
| `vec3d_unit(vec3d)`                           | `vec3d`       | Computes the normalized vector of a double-precision 3D vector.
| `vec4f_unit(vec4f)`                           | `vec4f`       | Computes the normalized vector of a single-precision 4D vector.
| `vec4d_unit(vec4d)`                           | `vec4d`       | Computes the normalized vector of a double-precision 4D vector.
