# libarrow
- [Introduction](#introduction)
- [Status](#status)
- [Requirements](#requirements)
- [Usage](#usage)
- [Reference](#reference)
	- [Vector](#vector)
		- [Vector types](#vector-types)
		- [Vector indexing macros](#vector-indexing-macros)
		- [Vector constructors](#vector-constructors)
		- [General vector functions](#general-vector-functions)
		- [2D vector functions](#2d-vector-functions)
		- [3D vector functions](#3d-vector-functions)
		- [Vector type conversion functions](#vector-type-conversion-functions)
		- [Vector size conversion functions](#vector-type-conversion-functions)
	- [Matrix](#matrix)
		- [Matrix types](#matrix-types)
		- [2x2 matrix indexing macros](#2x2-matrix-indexing-macros)
		- [3x3 matrix indexing macros](#3x3-matrix-indexing-macros)
		- [4x4 matrix indexing macros](#4x4-matrix-indexing-macros)

## Introduction
This library aims to implement fast linear algebra computations on small fixed size floating-point vectors, matrices and quaternions.

The following table describes the data types available in this library:

| Type name	| Size (bytes)	| Description
| --------	| --------	| --------
| vec2f		| 8		| 2D single-precision vector.
| vec2d		| 16		| 2D double-precision vector.
| vec3f		| 16		| 3D single-precision vector.
| vec3d		| 32		| 3D double-precision vector.
| vec4f		| 16		| 4D single-precision vector.
| vec4d		| 32		| 4D double-precision vector.
| mat2f		| 16		| 2x2 single-precision matrix.
| mat2d		| 32		| 2x2 double-precision matrix.
| mat3f		| 64		| 3x3 single-precision matrix.
| mat3d		| 128		| 3x3 double-precision matrix.
| mat4f		| 64		| 4x4 single-precision matrix.
| mat4d		| 128		| 4x4 double-precision matrix.
| quatf		| 16		| Single-precision quaternion (XYZW).
| quatd		| 32		| Double-precision quaternion (XYZW).

Single-precision data types take half the space and tend to offer faster computation speed. Double-precision data types should be used if more accuracy is required.

All data types can be initialized directly:
```C
vec3f v = {4, -4.5, 3};
vec3f w = {3, 1.5, -2};
quatd q = {0.5, 0.5, 0.5, 1};
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

## Status
The vector and matrix modules are nearing completion while the quaternion module is still well underway. No comprehensive tests and benchmarks have been written either. I would not recommend using this library yet.

## Requirements
GCC with support for vector extensions.

## Reference
### Vector
#### Vector types
| Type name             | Size (bytes)  | Description
| --------              | --------      | --------
| `vec2f`               | 8             | 2D single-precision vector.
| `vec2d`               | 16            | 2D double-precision vector.
| `vec3f`               | 16            | 3D single-precision vector.
| `vec3d`               | 32            | 3D double-precision vector.
| `vec4f`               | 16            | 4D single-precision vector.
| `vec4d`               | 32            | 4D double-precision vector.

#### Vector indexing macros
| Macro definition      | Description
| --------              | --------
| `vec_x(v)`            | Index the X-component of a vector.
| `vec_y(v)`            | Index the Y-component of a vector.
| `vec_z(v)`            | Index the Z-component of a vector.
| `vec_w(v)`            | Index the W-component of a vector.

#### Vector constructors
| Function prototype				| Return value	| Description
| --------					| --------	| --------
| `vec2f_make(float, float)`			| `vec2f`	| Constructs a 2D single-precision vector.
| `vec2d_make(double, double)`			| `vec2d`	| Constructs a 2D double-precision vector.
| `vec3f_make(float, float, float)`		| `vec3f`	| Constructs a 3D single-precision vector.
| `vec3d_make(double, double, double)`		| `vec3d`	| Constructs a 3D double-precision vector.
| `vec4f_make(float, float, float, float)`	| `vec4f`	| Constructs a 4D single-precision vector.
| `vec4d_make(double, double, double, double)`	| `vec4d`	| Constructs a 4D double-precision vector.
| `vec2f_with(float)`				| `vec2f`	| Constructs a 2D single-precision vector with a default value.
| `vec2d_with(double)`				| `vec2d`	| Constructs a 2D double-precision vector with a default value.
| `vec3f_with(float)`				| `vec3f`	| Constructs a 3D single-precision vector with a default value.
| `vec3d_with(double)`				| `vec3d`	| Constructs a 3D double-precision vector with a default value.
| `vec4f_with(float)`				| `vec4f`	| Constructs a 4D single-precision vector with a default value.
| `vec4d_with(double)`				| `vec4d`	| Constructs a 4D double-precision vector with a default value.
| `vec2f_zero(void)`				| `vec2f`	| Constructs an empty 2D single-precision vector.
| `vec2d_zero(void)`				| `vec2d`	| Constructs an empty 2D double-precision vector.
| `vec3f_zero(void)`				| `vec3f`	| Constructs an empty 3D single-precision vector.
| `vec3d_zero(void)`				| `vec3d`	| Constructs an empty 3D double-precision vector.
| `vec4f_zero(void)`				| `vec4f`	| Constructs an empty 4D single-precision vector.
| `vec4d_zero(void)`				| `vec4d`	| Constructs an empty 4D double-precision vector.

#### General vector functions
| Function prototype				| Return value	| Description
| --------					| --------	| --------
| `vec2f_dot(vec2f, vec2f)`                     | `float`       | Returns the dot product of two 2D single-precision vectors.
| `vec2d_dot(vec2d, vec2d)`                     | `double`      | Returns the dot product of two 2D double-precision vectors.
| `vec3f_dot(vec3f, vec3f)`                     | `float`       | Returns the dot product of two 3D single-precision vectors.
| `vec3d_dot(vec3d, vec3d)`                     | `double`      | Returns the dot product of two 3D double-precision vectors.
| `vec4f_dot(vec4f, vec4f)`                     | `float`       | Returns the dot product of two 4D single-precision vectors.
| `vec4d_dot(vec4d, vec4d)`                     | `double`      | Returns the dot product of two 4D double-precision vectors.
| `vec2f_norm(vec2f)`                           | `float`       | Returns the length of a 2D single-precision vector.
| `vec2d_norm(vec2d)`                           | `double`      | Returns the length of a 2D double-precision vector.
| `vec3f_norm(vec3f)`                           | `float`       | Returns the length of a 3D single-precision vector.
| `vec3d_norm(vec3d)`                           | `double`      | Returns the length of a 3D double-precision vector.
| `vec4f_norm(vec4f)`                           | `float`       | Returns the length of a 4D single-precision vector.
| `vec4d_norm(vec4d)`                           | `double`      | Returns the length of a 4D double-precision vector.
| `vec2f_unit(vec2f)`                           | `vec2f`       | Returns the normalized vector of a 2D single-precision vector.
| `vec2d_unit(vec2d)`                           | `vec2d`       | Returns the normalized vector of a 2D double-precision vector.
| `vec3f_unit(vec3f)`                           | `vec3f`       | Returns the normalized vector of a 3D single-precision vector.
| `vec3d_unit(vec3d)`                           | `vec3d`       | Returns the normalized vector of a 3D double-precision vector.
| `vec4f_unit(vec4f)`                           | `vec4f`       | Returns the normalized vector of a 4D single-precision vector.
| `vec4d_unit(vec4d)`                           | `vec4d`       | Returns the normalized vector of a 4D double-precision vector.
| `vec2f_angle(vec2f, vec2f)`                   | `float`       | Returns the angle between two 2D single-precision vectors.
| `vec2d_angle(vec2d, vec2d)`                   | `double`      | Returns the angle between two 2D double-precision vectors.
| `vec3f_angle(vec3f, vec3f)`                   | `float`       | Returns the angle between two 3D single-precision vectors.
| `vec3d_angle(vec3d, vec3d)`                   | `double`      | Returns the angle between two 3D double-precision vectors.
| `vec4f_angle(vec4f, vec4f)`                   | `float`       | Returns the angle between two 4D single-precision vectors.
| `vec4d_angle(vec4d, vec4d)`                   | `double`      | Returns the angle between two 4D double-precision vectors.
| `vec2f_vproject(vec2f, vec2f)`                | `vec2f`       | Returns the vector projection of the first 2D single-precision vector onto the second.
| `vec2d_vproject(vec2d, vec2d)`                | `vec2d`       | Returns the vector projection of the first 2D double-precision vector onto the second.
| `vec3f_vproject(vec3f, vec3f)`                | `vec3f`       | Returns the vector projection of the first 3D single-precision vector onto the second.
| `vec3d_vproject(vec3d, vec3d)`                | `vec3d`       | Returns the vector projection of the first 3D double-precision vector onto the second.
| `vec4f_vproject(vec4f, vec4f)`                | `vec4f`       | Returns the vector projection of the first 4D single-precision vector onto the second.
| `vec4d_vproject(vec4d, vec4d)`                | `vec4d`       | Returns the vector projection of the first 4D double-precision vector onto the second.
| `vec2f_sproject(vec2f, vec2f)`                | `float`       | Returns the scalar projection of the first 2D single-precision vector onto the second.
| `vec2d_sproject(vec2d, vec2d)`                | `double`      | Returns the scalar projection of the first 2D double-precision vector onto the second.
| `vec3f_sproject(vec3f, vec3f)`                | `float`       | Returns the scalar projection of the first 3D single-precision vector onto the second.
| `vec3d_sproject(vec3d, vec3d)`                | `double`      | Returns the scalar projection of the first 3D double-precision vector onto the second.
| `vec4f_sproject(vec4f, vec4f)`                | `float`       | Returns the scalar projection of the first 4D single-precision vector onto the second.
| `vec4d_sproject(vec4d, vec4d)`                | `double`      | Returns the scalar projection of the first 4D double-precision vector onto the second.

#### 2D vector functions
| Function prototype				| Return value	| Description
| --------					| --------	| --------
| `vec2f_rotate(vec2f, float)`                  | `vec2f`       | Returns the 2D single-precision vector rotated by an angle around the origin.
| `vec2d_rotate(vec2d, double)`                 | `vec2d`       | Returns the 2D double-precision vector rotated by an angle around the origin.
| `vec2f_perp(vec2f)`                           | `vec2f`       | Returns the vector counter-clockwise perpendicular to a 2D single-precision vector.
| `vec2d_perp(vec2d)`                           | `vec2d`       | Returns the vector counter-clockwise perpendicular to a 2D double-precision vector.
| `vec2f_cperp(vec2f)`                          | `vec2f`       | Returns the vector clockwise perpendicular to a 2D single-precision vector.
| `vec2d_cperp(vec2d)`                          | `vec2d`       | Returns the vector clockwise perpendicular to a 2D double-precision vector.

#### 3D vector functions
| Function prototype				| Return value	| Description
| --------					| --------	| --------
| `vec3f_cross(vec3f, vec3f)`                   | `vec3f`       | Returns the cross product of two 3D single-precision vectors.
| `vec3d_cross(vec3d, vec3d)`                   | `vec3d`       | Returns the cross product of two 3D double-precision vectors.
| `vec3f_stp(vec3f, vec3f, vec3f)`              | `float`       | Returns the scalar triple product of three 3D single-precision vectors.
| `vec3d_stp(vec3d, vec3d, vec3d)`              | `double`      | Returns the scalar triple product of three double-presicion 3D vectors.

#### Vector type conversion functions
| Function prototype				| Return value	| Description
| --------					| --------	| --------
| `vec2d_to_f(vec2d)`                           | `vec2f`       | Converts a 2D vector from double- to single-precision.
| `vec2f_to_d(vec2f)`                           | `vec2d`       | Converts a 2D vector from single- to double-precision.
| `vec3d_to_f(vec3d)`                           | `vec3f`       | Converts a 3D vector from double- to single-precision.
| `vec3f_to_d(vec3f)`                           | `vec3d`       | Converts a 3D vector from single- to double-precision.
| `vec4d_to_f(vec4d)`                           | `vec4f`       | Converts a 4D vector from double- to single-precision.
| `vec4f_to_d(vec4f)`                           | `vec4d`       | Converts a 4D vector from single- to double-precision.

#### Vector size conversion functions
| Function prototype				| Return value	| Description
| --------					| --------	| --------
| `vec3f_to_2(vec3f)`                           | `vec2f`       | Converts a 3D single-precision vector to a 2D vector.
| `vec4f_to_2(vec4f)`                           | `vec2f`       | Converts a 4D single-precision vector to a 2D vector.
| `vec3d_to_2(vec3d)`                           | `vec2d`       | Converts a 3D double-precision vector to a 2D vector.
| `vec4d_to_2(vec4d)`                           | `vec2d`       | Converts a 4D double-precision vector to a 2D vector.
| `vec2f_to_3(vec2f)`                           | `vec3f`       | Converts a 2D single-precision vector to a 3D vector.
| `vec4f_to_3(vec4f)`                           | `vec3f`       | Converts a 4D single-precision vector to a 3D vector.
| `vec2d_to_3(vec2d)`                           | `vec3d`       | Converts a 2D double-precision vector to a 3D vector.
| `vec4d_to_3(vec4d)`                           | `vec3d`       | Converts a 4D double-precision vector to a 3D vector.
| `vec2f_to_4(vec2f)`                           | `vec4f`       | Converts a 2D single-precision vector to a 4D vector.
| `vec3f_to_4(vec3f)`                           | `vec4f`       | Converts a 3D single-precision vector to a 4D vector.
| `vec2d_to_4(vec2d)`                           | `vec4d`       | Converts a 2D double-precision vector to a 4D vector.
| `vec3d_to_4(vec3d)`                           | `vec4d`       | Converts a 3D double-precision vector to a 4D vector.

### Matrix
#### Matrix types
| Type name             | Size (bytes)  | Description
| --------              | --------      | --------
| `mat2f`               | 16            | 2x2 single-precision matrix.
| `mat2d`               | 32            | 2x2 double-precision matrix.
| `mat3f`               | 64            | 3x3 single-precision matrix.
| `mat3d`               | 128           | 3x3 double-precision matrix.
| `mat4f`               | 64            | 4x4 single-precision matrix.
| `mat4d`               | 128           | 4x4 double-precision matrix.

#### 2x2 matrix indexing macros
| Macro definition      | Description
| --------              | --------
| `mat2_i(m, i, j)`     | Index the value at row `i`, column `j` in a 2x2 matrix `m`.
| `mat2_11(m)`          | Index the value at row 1, column 1 in a 2x2 matrix `m`.
| `mat2_12(m)`          | Index the value at row 1, column 2 in a 2x2 matrix `m`.
| `mat2_21(m)`          | Index the value at row 2, column 1 in a 2x2 matrix `m`.
| `mat2_22(m)`          | Index the value at row 2, column 2 in a 2x2 matrix `m`.

#### 3x3 matrix indexing macros
| Macro definition      | Description
| --------              | --------
| `mat3_i(m, i, j)`     | Index the value at row `i`, column `j` in a 3x3 matrix `m`.
| `mat3_11(m)`          | Index the value at row 1, column 1 in a 3x3 matrix `m`.
| `mat3_12(m)`          | Index the value at row 1, column 2 in a 3x3 matrix `m`.
| `mat3_13(m)`          | Index the value at row 1, column 3 in a 3x3 matrix `m`.
| `mat3_21(m)`          | Index the value at row 2, column 1 in a 3x3 matrix `m`.
| `mat3_22(m)`          | Index the value at row 2, column 2 in a 3x3 matrix `m`.
| `mat3_23(m)`          | Index the value at row 2, column 3 in a 3x3 matrix `m`.
| `mat3_31(m)`          | Index the value at row 3, column 1 in a 3x3 matrix `m`.
| `mat3_32(m)`          | Index the value at row 3, column 2 in a 3x3 matrix `m`.
| `mat3_33(m)`          | Index the value at row 3, column 3 in a 3x3 matrix `m`.

#### 4x4 matrix indexing macros
| Macro definition      | Description
| --------              | --------
| `mat4_i(m, i, j)`     | Index the value at row `i`, column `j` in a 4x4 matrix `m`.
| `mat4_11(m)`          | Index the value at row 1, column 1 in a 4x4 matrix `m`.
| `mat4_12(m)`          | Index the value at row 1, column 2 in a 4x4 matrix `m`.
| `mat4_13(m)`          | Index the value at row 1, column 3 in a 4x4 matrix `m`.
| `mat4_14(m)`          | Index the value at row 1, column 4 in a 4x4 matrix `m`.
| `mat4_21(m)`          | Index the value at row 2, column 1 in a 4x4 matrix `m`.
| `mat4_22(m)`          | Index the value at row 2, column 2 in a 4x4 matrix `m`.
| `mat4_23(m)`          | Index the value at row 2, column 3 in a 4x4 matrix `m`.
| `mat4_24(m)`          | Index the value at row 2, column 4 in a 4x4 matrix `m`.
| `mat4_31(m)`          | Index the value at row 3, column 1 in a 4x4 matrix `m`.
| `mat4_32(m)`          | Index the value at row 3, column 2 in a 4x4 matrix `m`.
| `mat4_33(m)`          | Index the value at row 3, column 3 in a 4x4 matrix `m`.
| `mat4_34(m)`          | Index the value at row 3, column 4 in a 4x4 matrix `m`.
| `mat4_41(m)`          | Index the value at row 4, column 1 in a 4x4 matrix `m`.
| `mat4_42(m)`          | Index the value at row 4, column 2 in a 4x4 matrix `m`.
| `mat4_43(m)`          | Index the value at row 4, column 3 in a 4x4 matrix `m`.
| `mat4_44(m)`          | Index the value at row 4, column 4 in a 4x4 matrix `m`.
