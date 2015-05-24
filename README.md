# libarrow
- [Introduction](#introduction)
- [Status](#status)
- [Requirements](#requirements)
- [Reference](#reference)
	- [Vector](#vector)
		- [Vector types](#vector-types)
		- [Vector indexing macros](#vector-indexing-macros)
		- [Vector constructors](#vector-constructors)
		- [Element-wise vector arithmetic](#element-wise-vector-arithmetic)
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
		- [Matrix constructors](#matrix-constructors)
		- [Element-wise matrix arithmetic](#element-wise-matrix-arithmetic)
		- [General matrix functions](#general-matrix-functions)
		- [Matrix and vector product functions](#matrix-and-vector-product-functions)
		- [2x2 and 3x3 rotation matrix constructors](#2x2-and-3x3-rotation-matrix-constructors)
		- [Matrix type conversion functions](#matrix-type-conversion-functions)
	- [Quaternion](#quaternion)
		- [Quaternion types](#quaternion-types)
		- [Quaternion indexing macros](#quaternion-indexing-macros)
		- [Quaternion constructors](#quaternion-constructors)
		- [General quaternion functions](#general-quaternion-functions)
		- [Quaternion size conversion functions](#quaternion-size-conversion-functions)
		- [Quaternion type conversion functions](#quaternion-vector-conversion-functions)

## Introduction
This library aims to implement fast linear algebra computations on small fixed size floating-point vectors, matrices and quaternions.

The following table describes the data types available in this library:

| Type name	| Description
| --------	| --------
| `vec2f`	| 2D single-precision vector.
| `vec2d`	| 2D double-precision vector.
| `vec3f`	| 3D single-precision vector.
| `vec3d`	| 3D double-precision vector.
| `vec4f`	| 4D single-precision vector.
| `vec4d`	| 4D double-precision vector.
| `mat2f`	| 2x2 single-precision matrix.
| `mat2d`	| 2x2 double-precision matrix.
| `mat3f`	| 3x3 single-precision matrix.
| `mat3d`	| 3x3 double-precision matrix.
| `mat4f`	| 4x4 single-precision matrix.
| `mat4d`	| 4x4 double-precision matrix.
| `quatf`	| Single-precision quaternion.
| `quatd`	| Double-precision quaternion.

For larger data types, single-precision types take half the space and offer faster computation speed.
Double-precision data types should be used if more accuracy is required.

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
See [Clang's](http://clang.llvm.org/docs/LanguageExtensions.html#vectors-and-extended-vectors) or [GCC's](https://gcc.gnu.org/onlinedocs/gcc/Vector-Extensions.html) respective documentation pages for more information about vectorized data types.

## Status
The vector and matrix modules are nearing completion while the quaternion module is still well underway. No comprehensive tests and benchmarks have been written either. I would not recommend using this library yet.

## Requirements
* GNU Make
* Clang or GCC with support for vector extensions.

## Notes
* I am by no means an expert on linear algebra. Let me know if you find errors and/or have any suggestions on improving this library.

## Reference
### Vector
#### Vector types
| Type name             | Description			| Size (standard)	| Size (vectorized)
| --------              | --------			| --------		| --------
| `vec2f`               | 2D single-precision vector.	| 8			| 8 (Clang), 16 (GCC)
| `vec2d`               | 2D double-precision vector.	| 16			| 16
| `vec3f`               | 3D single-precision vector.	| 12			| 16
| `vec3d`               | 3D double-precision vector.	| 24			| 32
| `vec4f`               | 4D single-precision vector.	| 16			| 16
| `vec4d`               | 4D double-precision vector.	| 32			| 32

#### Vector indexing macros
| Macro definition      | Description
| --------              | --------
| `vec_x(v)`            | Index to the x-component of a vector.
| `vec_y(v)`            | Index to the y-component of a vector.
| `vec_z(v)`            | Index to the z-component of a vector.
| `vec_w(v)`            | Index to the w-component of a vector.

#### Vector constructors
| Function prototype				| Return value	| Description
| --------					| --------	| --------
| `vec2f_make(float, float)`			| `vec2f`	| Constructs a 2D single-precision vector.
| `vec2d_make(double, double)`			| `vec2d`	| Constructs a 2D double-precision vector.
| `vec3f_make(float, float, float)`		| `vec3f`	| Constructs a 3D single-precision vector.
| `vec3d_make(double, double, double)`		| `vec3d`	| Constructs a 3D double-precision vector.
| `vec4f_make(float, float, float, float)`	| `vec4f`	| Constructs a 4D single-precision vector.
| `vec4d_make(double, double, double, double)`	| `vec4d`	| Constructs a 4D double-precision vector.
| `vec2f_with(float)`				| `vec2f`	| Constructs a 2D single-precision vector with an initial value.
| `vec2d_with(double)`				| `vec2d`	| Constructs a 2D double-precision vector with an initial value.
| `vec3f_with(float)`				| `vec3f`	| Constructs a 3D single-precision vector with an initial value.
| `vec3d_with(double)`				| `vec3d`	| Constructs a 3D double-precision vector with an initial value.
| `vec4f_with(float)`				| `vec4f`	| Constructs a 4D single-precision vector with an initial value.
| `vec4d_with(double)`				| `vec4d`	| Constructs a 4D double-precision vector with an initial value.
| `vec2f_zero(void)`				| `vec2f`	| Constructs a zero 2D single-precision vector.
| `vec2d_zero(void)`				| `vec2d`	| Constructs a zero 2D double-precision vector.
| `vec3f_zero(void)`				| `vec3f`	| Constructs a zero 3D single-precision vector.
| `vec3d_zero(void)`				| `vec3d`	| Constructs a zero 3D double-precision vector.
| `vec4f_zero(void)`				| `vec4f`	| Constructs a zero 4D single-precision vector.
| `vec4d_zero(void)`				| `vec4d`	| Constructs a zero 4D double-precision vector.

#### Element-wise vector arithmetic
| Function prototype				| Return value	| Description
| --------					| --------	| --------
| `vec2f_add(vec2f, vec2f)`			| `vec2f`	| Returns the sum vector of two 2D single-precision vectors.
| `vec2d_add(vec2d, vec2d)`			| `vec2d`	| Returns the sum vector of two 2D double-precision vectors.
| `vec3f_add(vec3f, vec3f)`			| `vec3f`	| Returns the sum vector of two 3D single-precision vectors.
| `vec3d_add(vec3d, vec3d)`			| `vec3d`	| Returns the sum vector of two 3D double-precision vectors.
| `vec4f_add(vec4f, vec4f)`			| `vec4f`	| Returns the sum vector of two 4D single-precision vectors.
| `vec4d_add(vec4d, vec4d)`			| `vec4d`	| Returns the sum vector of two 4D double-precision vectors.
| `vec2f_sub(vec2f, vec2f)`			| `vec2f`	| Returns the difference vector between two 2D single-precision vectors.
| `vec2d_sub(vec2d, vec2d)`			| `vec2d`	| Returns the difference vector between two 2D double-precision vectors.
| `vec3f_sub(vec3f, vec3f)`			| `vec3f`	| Returns the difference vector between two 3D single-precision vectors.
| `vec3d_sub(vec3d, vec3d)`			| `vec3d`	| Returns the difference vector between two 3D double-precision vectors.
| `vec4f_sub(vec4f, vec4f)`			| `vec4f`	| Returns the difference vector between two 4D single-precision vectors.
| `vec4d_sub(vec4d, vec4d)`			| `vec4d`	| Returns the difference vector between two 4D double-precision vectors.
| `vec2f_mul(vec2f, vec2f)`			| `vec2f`	| Returns the product vector of two 2D single-precision vectors.
| `vec2d_mul(vec2d, vec2d)`			| `vec2d`	| Returns the product vector of two 2D double-precision vectors.
| `vec3f_mul(vec3f, vec3f)`			| `vec3f`	| Returns the product vector of two 3D single-precision vectors.
| `vec3d_mul(vec3d, vec3d)`			| `vec3d`	| Returns the product vector of two 3D double-precision vectors.
| `vec4f_mul(vec4f, vec4f)`			| `vec4f`	| Returns the product vector of two 4D single-precision vectors.
| `vec4d_mul(vec4d, vec4d)`			| `vec4d`	| Returns the product vector of two 4D double-precision vectors.
| `vec2f_div(vec2f, vec2f)`			| `vec2f`	| Returns the quotient vector between two 2D single-precision vectors.
| `vec2d_div(vec2d, vec2d)`			| `vec2d`	| Returns the quotient vector between two 2D double-precision vectors.
| `vec3f_div(vec3f, vec3f)`			| `vec3f`	| Returns the quotient vector between two 3D single-precision vectors.
| `vec3d_div(vec3d, vec3d)`			| `vec3d`	| Returns the quotient vector between two 3D double-precision vectors.
| `vec4f_div(vec4f, vec4f)`			| `vec4f`	| Returns the quotient vector between two 4D single-precision vectors.
| `vec4d_div(vec4d, vec4d)`			| `vec4d`	| Returns the quotient vector between two 4D double-precision vectors.
| `vec2f_add_scalar(vec2f, vec2f)`		| `vec2f`	| Returns the sum vector of a 2D single-precision vector and a scalar.
| `vec2d_add_scalar(vec2d, vec2d)`		| `vec2d`	| Returns the sum vector of a 2D double-precision vector and a scalar.
| `vec3f_add_scalar(vec3f, vec3f)`		| `vec3f`	| Returns the sum vector of a 3D single-precision vector and a scalar.
| `vec3d_add_scalar(vec3d, vec3d)`		| `vec3d`	| Returns the sum vector of a 3D double-precision vector and a scalar.
| `vec4f_add_scalar(vec4f, vec4f)`		| `vec4f`	| Returns the sum vector of a 4D single-precision vector and a scalar.
| `vec4d_add_scalar(vec4d, vec4d)`		| `vec4d`	| Returns the sum vector of a 4D double-precision vector and a scalar.
| `vec2f_sub_scalar(vec2f, vec2f)`		| `vec2f`	| Returns the difference vector between a 2D single-precision vector and a scalar.
| `vec2d_sub_scalar(vec2d, vec2d)`		| `vec2d`	| Returns the difference vector between a 2D double-precision vector and a scalar.
| `vec3f_sub_scalar(vec3f, vec3f)`		| `vec3f`	| Returns the difference vector between a 3D single-precision vector and a scalar.
| `vec3d_sub_scalar(vec3d, vec3d)`		| `vec3d`	| Returns the difference vector between a 3D double-precision vector and a scalar.
| `vec4f_sub_scalar(vec4f, vec4f)`		| `vec4f`	| Returns the difference vector between a 4D single-precision vector and a scalar.
| `vec4d_sub_scalar(vec4d, vec4d)`		| `vec4d`	| Returns the difference vector between a 4D double-precision vector and a scalar.
| `vec2f_mul_scalar(vec2f, vec2f)`		| `vec2f`	| Returns the product vector of a 2D single-precision vector and a scalar.
| `vec2d_mul_scalar(vec2d, vec2d)`		| `vec2d`	| Returns the product vector of a 2D double-precision vector and a scalar.
| `vec3f_mul_scalar(vec3f, vec3f)`		| `vec3f`	| Returns the product vector of a 3D single-precision vector and a scalar.
| `vec3d_mul_scalar(vec3d, vec3d)`		| `vec3d`	| Returns the product vector of a 3D double-precision vector and a scalar.
| `vec4f_mul_scalar(vec4f, vec4f)`		| `vec4f`	| Returns the product vector of a 4D single-precision vector and a scalar.
| `vec4d_mul_scalar(vec4d, vec4d)`		| `vec4d`	| Returns the product vector of a 4D double-precision vector and a scalar.
| `vec2f_div_scalar(vec2f, vec2f)`		| `vec2f`	| Returns the quotient vector between a 2D single-precision vector and a scalar.
| `vec2d_div_scalar(vec2d, vec2d)`		| `vec2d`	| Returns the quotient vector between a 2D double-precision vector and a scalar.
| `vec3f_div_scalar(vec3f, vec3f)`		| `vec3f`	| Returns the quotient vector between a 3D single-precision vector and a scalar.
| `vec3d_div_scalar(vec3d, vec3d)`		| `vec3d`	| Returns the quotient vector between a 3D double-precision vector and a scalar.
| `vec4f_div_scalar(vec4f, vec4f)`		| `vec4f`	| Returns the quotient vector between a 4D single-precision vector and a scalar.
| `vec4d_div_scalar(vec4d, vec4d)`		| `vec4d`	| Returns the quotient vector between a 4D double-precision vector and a scalar.

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
| `vec2f_unit(vec2f)`                           | `vec2f`       | Returns a normalized vector from a 2D single-precision vector.
| `vec2d_unit(vec2d)`                           | `vec2d`       | Returns a normalized vector from a 2D double-precision vector.
| `vec3f_unit(vec3f)`                           | `vec3f`       | Returns a normalized vector from a 3D single-precision vector.
| `vec3d_unit(vec3d)`                           | `vec3d`       | Returns a normalized vector from a 3D double-precision vector.
| `vec4f_unit(vec4f)`                           | `vec4f`       | Returns a normalized vector from a 4D single-precision vector.
| `vec4d_unit(vec4d)`                           | `vec4d`       | Returns a normalized vector from a 4D double-precision vector.
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
| `vec3d_stp(vec3d, vec3d, vec3d)`              | `double`      | Returns the scalar triple product of three 3D double-precision vectors.

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
| Type name		| Description			| Size (standard)	| Size (vectorized)
| --------              | --------			| --------		| --------
| `mat2f`               | 2x2 single-precision matrix.	| 16			| 16
| `mat2d`               | 2x2 double-precision matrix.	| 32			| 32
| `mat3f`               | 3x3 single-precision matrix.	| 36			| 64
| `mat3d`               | 3x3 double-precision matrix.	| 72			| 128
| `mat4f`               | 4x4 single-precision matrix.	| 64			| 64
| `mat4d`               | 4x4 double-precision matrix.	| 128			| 128

#### General matrix indexing macros
| Macro definition	| Description
| --------		| --------
| `mat_i(m, i)`		| Index to the value at cell `i` in an arbitrarily sized row-major ordered matrix.

#### 2x2 matrix indexing macros
| Macro definition      | Description
| --------              | --------
| `mat2_i(m, r, c)`     | Index to the value at row `r`, column `c` in a 2x2 matrix `m`.
| `mat2_11(m)`          | Index to the value at row 1, column 1 in a 2x2 matrix `m`.
| `mat2_12(m)`          | Index to the value at row 1, column 2 in a 2x2 matrix `m`.
| `mat2_21(m)`          | Index to the value at row 2, column 1 in a 2x2 matrix `m`.
| `mat2_22(m)`          | Index to the value at row 2, column 2 in a 2x2 matrix `m`.

#### 3x3 matrix indexing macros
| Macro definition      | Description
| --------              | --------
| `mat3_i(m, r, c)`     | Index to the value at row `r`, column `c` in a 3x3 matrix `m`.
| `mat3_11(m)`          | Index to the value at row 1, column 1 in a 3x3 matrix `m`.
| `mat3_12(m)`          | Index to the value at row 1, column 2 in a 3x3 matrix `m`.
| `mat3_13(m)`          | Index to the value at row 1, column 3 in a 3x3 matrix `m`.
| `mat3_21(m)`          | Index to the value at row 2, column 1 in a 3x3 matrix `m`.
| `mat3_22(m)`          | Index to the value at row 2, column 2 in a 3x3 matrix `m`.
| `mat3_23(m)`          | Index to the value at row 2, column 3 in a 3x3 matrix `m`.
| `mat3_31(m)`          | Index to the value at row 3, column 1 in a 3x3 matrix `m`.
| `mat3_32(m)`          | Index to the value at row 3, column 2 in a 3x3 matrix `m`.
| `mat3_33(m)`          | Index to the value at row 3, column 3 in a 3x3 matrix `m`.

#### 4x4 matrix indexing macros
| Macro definition      | Description
| --------              | --------
| `mat4_i(m, r, c)`     | Index to the value at row `r`, column `c` in a 4x4 matrix `m`.
| `mat4_11(m)`          | Index to the value at row 1, column 1 in a 4x4 matrix `m`.
| `mat4_12(m)`          | Index to the value at row 1, column 2 in a 4x4 matrix `m`.
| `mat4_13(m)`          | Index to the value at row 1, column 3 in a 4x4 matrix `m`.
| `mat4_14(m)`          | Index to the value at row 1, column 4 in a 4x4 matrix `m`.
| `mat4_21(m)`          | Index to the value at row 2, column 1 in a 4x4 matrix `m`.
| `mat4_22(m)`          | Index to the value at row 2, column 2 in a 4x4 matrix `m`.
| `mat4_23(m)`          | Index to the value at row 2, column 3 in a 4x4 matrix `m`.
| `mat4_24(m)`          | Index to the value at row 2, column 4 in a 4x4 matrix `m`.
| `mat4_31(m)`          | Index to the value at row 3, column 1 in a 4x4 matrix `m`.
| `mat4_32(m)`          | Index to the value at row 3, column 2 in a 4x4 matrix `m`.
| `mat4_33(m)`          | Index to the value at row 3, column 3 in a 4x4 matrix `m`.
| `mat4_34(m)`          | Index to the value at row 3, column 4 in a 4x4 matrix `m`.
| `mat4_41(m)`          | Index to the value at row 4, column 1 in a 4x4 matrix `m`.
| `mat4_42(m)`          | Index to the value at row 4, column 2 in a 4x4 matrix `m`.
| `mat4_43(m)`          | Index to the value at row 4, column 3 in a 4x4 matrix `m`.
| `mat4_44(m)`          | Index to the value at row 4, column 4 in a 4x4 matrix `m`.

#### Matrix constructors
| Function prototype					| Return value	| Description
| --------						| --------	| --------
| `mat2f_make(float...)`				| `mat2f`	| Constructs a 2x2 single-precision matrix from 4 floats.
| `mat2d_make(double...)`				| `mat2d`	| Constructs a 2x2 double-precision matrix from 4 doubles.
| `mat3f_make(float...)`				| `mat3f`	| Constructs a 3x3 single-precision matrix from 9 floats.
| `mat3d_make(double...)`				| `mat3d`	| Constructs a 3x3 double-precision matrix from 9 doubles.
| `mat4f_make(float...)`				| `mat4f`	| Constructs a 4x4 single-precision matrix from 16 floats.
| `mat4d_make(double...)`				| `mat4d`	| Constructs a 4x4 double-precision matrix from 16 doubles.
| `mat2f_with(float)`					| `mat2f`       | Constructs a 2x2 single-precision matrix with an initial value.
| `mat2d_with(double)`                          	| `mat2d`       | Constructs a 2x2 double-precision matrix with an initial value.
| `mat3f_with(float)`                           	| `mat3f`       | Constructs a 3x3 single-precision matrix with an initial value.
| `mat3d_with(double)`                          	| `mat3d`       | Constructs a 3x3 double-precision matrix with an initial value.
| `mat4f_with(float)`                           	| `mat4f`       | Constructs a 4x4 single-precision matrix with an initial value.
| `mat4d_with(double)`                          	| `mat4d`       | Constructs a 4x4 double-precision matrix with an initial value.
| `mat2f_from_rows(vec2f, vec2f)`			| `mat2f`       | Constructs a 2x2 single-precision matrix from two row vectors.
| `mat2d_from_rows(vec2d, vec2d)`			| `mat2d`       | Constructs a 2x2 double-precision matrix from two row vectors.
| `mat3f_from_rows(vec3f, vec3f, vec3f)`		| `mat3f`       | Constructs a 3x3 single-precision matrix from three row vectors.
| `mat3d_from_rows(vec3d, vec3d, vec3d)`		| `mat3d`       | Constructs a 3x3 double-precision matrix from three row vectors.
| `mat4f_from_rows(vec4f, vec4f, vec4f, vec4f)`		| `mat4f`       | Constructs a 4x4 single-precision matrix from four row vectors.
| `mat4d_from_rows(vec4d, vec4d, vec4d, vec4d)`		| `mat4d`       | Constructs a 4x4 double-precision matrix from four row vectors.
| `mat2f_from_columns(vec2f, vec2f)`			| `mat2f`       | Constructs a 2x2 single-precision matrix from two column vectors.
| `mat2d_from_columns(vec2d, vec2d)`			| `mat2d`       | Constructs a 2x2 double-precision matrix from two column vectors.
| `mat3f_from_columns(vec3f, vec3f, vec3f)`		| `mat3f`       | Constructs a 3x3 single-precision matrix from three column vectors.
| `mat3d_from_columns(vec3d, vec3d, vec3d)`		| `mat3d`       | Constructs a 3x3 double-precision matrix from three column vectors.
| `mat4f_from_columns(vec4f, vec4f, vec4f, vec4f)`	| `mat4f`       | Constructs a 4x4 single-precision matrix from four column vectors.
| `mat4d_from_columns(vec4d, vec4d, vec4d, vec4d)`	| `mat4d`       | Constructs a 4x4 double-precision matrix from four column vectors.
| `mat2f_zero(void)`                            	| `mat2f`       | Constructs a zero 2x2 single-precision matrix.
| `mat2d_zero(void)`                            	| `mat2d`       | Constructs a zero 2x2 double-precision matrix.
| `mat3f_zero(void)`                            	| `mat3f`       | Constructs a zero 3x3 single-precision matrix.
| `mat3d_zero(void)`                            	| `mat3d`       | Constructs a zero 3x3 double-precision matrix.
| `mat4f_zero(void)`                            	| `mat4f`       | Constructs a zero 4x4 single-precision matrix.
| `mat4d_zero(void)`                            	| `mat4d`       | Constructs a zero 4x4 double-precision matrix.
| `mat2f_ident(void)`                           	| `mat2f`       | Constructs a 2x2 single-precision identity matrix.
| `mat2d_ident(void)`                           	| `mat2d`       | Constructs a 2x2 double-precision identity matrix.
| `mat3f_ident(void)`                           	| `mat3f`       | Constructs a 3x3 single-precision identity matrix.
| `mat3d_ident(void)`                           	| `mat3d`       | Constructs a 3x3 double-precision identity matrix.
| `mat4f_ident(void)`                           	| `mat4f`       | Constructs a 4x4 single-precision identity matrix.
| `mat4d_ident(void)`                           	| `mat4d`       | Constructs a 4x4 double-precision identity matrix.

#### Element-wise matrix arithmetic
| Function prototype				| Return value	| Description
| --------					| --------	| --------
| `mat2f_add(mat2f, mat2f)`			| `mat2f`	| Returns the sum matrix of two 2x2 single-precision matrices.
| `mat2d_add(mat2d, mat2d)`			| `mat2d`	| Returns the sum matrix of two 2x2 double-precision matrices.
| `mat3f_add(mat3f, mat3f)`			| `mat3f`	| Returns the sum matrix of two 3x3 single-precision matrices.
| `mat3d_add(mat3d, mat3d)`			| `mat3d`	| Returns the sum matrix of two 3x3 double-precision matrices.
| `mat4f_add(mat4f, mat4f)`			| `mat4f`	| Returns the sum matrix of two 4x4 single-precision matrices.
| `mat4d_add(mat4d, mat4d)`			| `mat4d`	| Returns the sum matrix of two 4x4 double-precision matrices.
| `mat2f_sub(mat2f, mat2f)`			| `mat2f`	| Returns the difference matrix between two 2x2 single-precision matrices.
| `mat2d_sub(mat2d, mat2d)`			| `mat2d`	| Returns the difference matrix between two 2x2 double-precision matrices.
| `mat3f_sub(mat3f, mat3f)`			| `mat3f`	| Returns the difference matrix between two 3x3 single-precision matrices.
| `mat3d_sub(mat3d, mat3d)`			| `mat3d`	| Returns the difference matrix between two 3x3 double-precision matrices.
| `mat4f_sub(mat4f, mat4f)`			| `mat4f`	| Returns the difference matrix between two 4x4 single-precision matrices.
| `mat4d_sub(mat4d, mat4d)`			| `mat4d`	| Returns the difference matrix between two 4x4 double-precision matrices.
| `mat2f_mul(mat2f, mat2f)`			| `mat2f`	| Returns the product matrix of two 2x2 single-precision matrices.
| `mat2d_mul(mat2d, mat2d)`			| `mat2d`	| Returns the product matrix of two 2x2 double-precision matrices.
| `mat3f_mul(mat3f, mat3f)`			| `mat3f`	| Returns the product matrix of two 3x3 single-precision matrices.
| `mat3d_mul(mat3d, mat3d)`			| `mat3d`	| Returns the product matrix of two 3x3 double-precision matrices.
| `mat4f_mul(mat4f, mat4f)`			| `mat4f`	| Returns the product matrix of two 4x4 single-precision matrices.
| `mat4d_mul(mat4d, mat4d)`			| `mat4d`	| Returns the product matrix of two 4x4 double-precision matrices.
| `mat2f_div(mat2f, mat2f)`			| `mat2f`	| Returns the quotient matrix between two 2x2 single-precision matrices.
| `mat2d_div(mat2d, mat2d)`			| `mat2d`	| Returns the quotient matrix between two 2x2 double-precision matrices.
| `mat3f_div(mat3f, mat3f)`			| `mat3f`	| Returns the quotient matrix between two 3x3 single-precision matrices.
| `mat3d_div(mat3d, mat3d)`			| `mat3d`	| Returns the quotient matrix between two 3x3 double-precision matrices.
| `mat4f_div(mat4f, mat4f)`			| `mat4f`	| Returns the quotient matrix between two 4x4 single-precision matrices.
| `mat4d_div(mat4d, mat4d)`			| `mat4d`	| Returns the quotient matrix between two 4x4 double-precision matrices.
| `mat2f_add_scalar(mat2f, mat2f)`		| `mat2f`	| Returns the sum matrix of a 2x2 single-precision matrix and a scalar.
| `mat2d_add_scalar(mat2d, mat2d)`		| `mat2d`	| Returns the sum matrix of a 2x2 double-precision matrix and a scalar.
| `mat3f_add_scalar(mat3f, mat3f)`		| `mat3f`	| Returns the sum matrix of a 3x3 single-precision matrix and a scalar.
| `mat3d_add_scalar(mat3d, mat3d)`		| `mat3d`	| Returns the sum matrix of a 3x3 double-precision matrix and a scalar.
| `mat4f_add_scalar(mat4f, mat4f)`		| `mat4f`	| Returns the sum matrix of a 4x4 single-precision matrix and a scalar.
| `mat4d_add_scalar(mat4d, mat4d)`		| `mat4d`	| Returns the sum matrix of a 4x4 double-precision matrix and a scalar.
| `mat2f_sub_scalar(mat2f, mat2f)`		| `mat2f`	| Returns the difference matrix between a 2x2 single-precision matrix and a scalar.
| `mat2d_sub_scalar(mat2d, mat2d)`		| `mat2d`	| Returns the difference matrix between a 2x2 double-precision matrix and a scalar.
| `mat3f_sub_scalar(mat3f, mat3f)`		| `mat3f`	| Returns the difference matrix between a 3x3 single-precision matrix and a scalar.
| `mat3d_sub_scalar(mat3d, mat3d)`		| `mat3d`	| Returns the difference matrix between a 3x3 double-precision matrix and a scalar.
| `mat4f_sub_scalar(mat4f, mat4f)`		| `mat4f`	| Returns the difference matrix between a 4x4 single-precision matrix and a scalar.
| `mat4d_sub_scalar(mat4d, mat4d)`		| `mat4d`	| Returns the difference matrix between a 4x4 double-precision matrix and a scalar.
| `mat2f_mul_scalar(mat2f, mat2f)`		| `mat2f`	| Returns the product matrix of a 2x2 single-precision matrix and a scalar.
| `mat2d_mul_scalar(mat2d, mat2d)`		| `mat2d`	| Returns the product matrix of a 2x2 double-precision matrix and a scalar.
| `mat3f_mul_scalar(mat3f, mat3f)`		| `mat3f`	| Returns the product matrix of a 3x3 single-precision matrix and a scalar.
| `mat3d_mul_scalar(mat3d, mat3d)`		| `mat3d`	| Returns the product matrix of a 3x3 double-precision matrix and a scalar.
| `mat4f_mul_scalar(mat4f, mat4f)`		| `mat4f`	| Returns the product matrix of a 4x4 single-precision matrix and a scalar.
| `mat4d_mul_scalar(mat4d, mat4d)`		| `mat4d`	| Returns the product matrix of a 4x4 double-precision matrix and a scalar.
| `mat2f_div_scalar(mat2f, mat2f)`		| `mat2f`	| Returns the quotient matrix between a 2x2 single-precision matrix and a scalar.
| `mat2d_div_scalar(mat2d, mat2d)`		| `mat2d`	| Returns the quotient matrix between a 2x2 double-precision matrix and a scalar.
| `mat3f_div_scalar(mat3f, mat3f)`		| `mat3f`	| Returns the quotient matrix between a 3x3 single-precision matrix and a scalar.
| `mat3d_div_scalar(mat3d, mat3d)`		| `mat3d`	| Returns the quotient matrix between a 3x3 double-precision matrix and a scalar.
| `mat4f_div_scalar(mat4f, mat4f)`		| `mat4f`	| Returns the quotient matrix between a 4x4 single-precision matrix and a scalar.
| `mat4d_div_scalar(mat4d, mat4d)`		| `mat4d`	| Returns the quotient matrix between a 4x4 double-precision matrix and a scalar.

#### General matrix functions
| Function prototype				| Return value	| Description
| --------					| --------	| --------
| `mat2f_transpose(mat2f)`			| `mat2f`	| Returns the transpose of a 2x2 single-precision matrix.
| `mat2d_transpose(mat2d)`			| `mat2d`	| Returns the transpose of a 2x2 double-precision matrix.
| `mat3f_transpose(mat3f)`			| `mat3f`	| Returns the transpose of a 3x3 single-precision matrix.
| `mat3d_transpose(mat3d)`			| `mat3d`	| Returns the transpose of a 3x3 double-precision matrix.
| `mat4f_transpose(mat4f)`			| `mat4f`	| Returns the transpose of a 4x4 single-precision matrix.
| `mat4d_transpose(mat4d)`			| `mat4d`	| Returns the transpose of a 4x4 double-precision matrix.
| `mat2f_trace(mat2f)`				| `float`	| Returns the trace of a 2x2 single-precision matrix.
| `mat2d_trace(mat2d)`				| `double`	| Returns the trace of a 2x2 double-precision matrix.
| `mat3f_trace(mat3f)`				| `float`	| Returns the trace of a 3x3 single-precision matrix.
| `mat3d_trace(mat3d)`				| `double`	| Returns the trace of a 3x3 double-precision matrix.
| `mat4f_trace(mat4f)`				| `float`	| Returns the trace of a 4x4 single-precision matrix.
| `mat4d_trace(mat4d)`				| `double`	| Returns the trace of a 4x4 double-precision matrix.
| `mat2f_det(mat2f)`				| `float`	| Returns the trace of a 2x2 single-precision matrix.
| `mat2d_det(mat2d)`				| `double`	| Returns the determinant of a 2x2 double-precision matrix.
| `mat3f_det(mat3f)`				| `float`	| Returns the determinant of a 3x3 single-precision matrix.
| `mat3d_det(mat3d)`				| `double`	| Returns the determinant of a 3x3 double-precision matrix.
| `mat4f_det(mat4f)`				| `float`	| Returns the determinant of a 4x4 single-precision matrix.
| `mat4d_det(mat4d)`				| `double`	| Returns the determinant of a 4x4 double-precision matrix.

#### Matrix and vector product functions
| Function prototype				| Return value	| Description
| --------					| --------	| --------
| `mat2f_product(mat2f, mat2f)`			| `mat2f`	| Returns the product between two 2x2 single-precision matrices.
| `mat2d_product(mat2d, mat2d)`			| `mat2d`	| Returns the product between two 2x2 double-precision matrices.
| `mat3f_product(mat3f, mat3f)`			| `mat3f`	| Returns the product between two 3x3 single-precision matrices.
| `mat3d_product(mat3d, mat3d)`			| `mat3d`	| Returns the product between two 3x3 double-precision matrices.
| `mat4f_product(mat4f, mat4f)`			| `mat4f`	| Returns the product between two 4x4 single-precision matrices.
| `mat4d_product(mat4d, mat4d)`			| `mat4d`	| Returns the product between two 4x4 double-precision matrices.
| `mat2f_v_product(mat2f, vec2f)`		| `vec2f`	| Returns the product between a 2x2 single-precision matrix and a 2D vector.
| `mat2d_v_product(mat2d, vec2d)`		| `vec2d`	| Returns the product between a 2x2 double-precision matrix and a 2D vector.
| `mat3f_v_product(mat3f, vec3f)`		| `vec3f`	| Returns the product between a 3x3 single-precision matrix and a 3D vector.
| `mat3d_v_product(mat3d, vec3d)`		| `vec3d`	| Returns the product between a 3x3 double-precision matrix and a 3D vector.
| `mat4f_v_product(mat4f, vec4f)`		| `vec4f`	| Returns the product between a 4x4 single-precision matrix and a 4D vector.
| `mat4d_v_product(mat4d, vec4d)`		| `vec4d`	| Returns the product between a 4x4 double-precision matrix and a 4D vector.
| `mat2f_tensor(vec2f, vec2f)`			| `mat2f`	| Returns the tensor product between two 2D single-precision vectors.
| `mat2d_tensor(vec2d, vec2d)`			| `mat2d`	| Returns the tensor product between two 2D double-precision vectors.
| `mat3f_tensor(vec3f, vec3f)`			| `mat3f`	| Returns the tensor product between two 3D single-precision vectors.
| `mat3d_tensor(vec3d, vec3d)`			| `mat3d`	| Returns the tensor product between two 3D double-precision vectors.
| `mat4f_tensor(vec4f, vec4f)`			| `mat4f`	| Returns the tensor product between two 4D single-precision vectors.
| `mat4d_tensor(vec4d, vec4d)`			| `mat4d`	| Returns the tensor product between two 4D double-precision vectors.

#### 2x2 and 3x3 rotation matrix constructors
| Function prototype				| Return value	| Description
| --------					| --------	| --------
| `mat2f_rotation(float)`			| `mat2f`	| Returns a 2x2 single-precision rotation matrix by an angle.
| `mat2d_rotation(double)`			| `mat2d`	| Returns a 2x2 double-precision rotation matrix by an angle.
| `mat3f_x_rotation(float)`			| `mat3f`	| Returns a 3x3 single-precision rotation matrix about the x-axis by an angle.
| `mat3d_x_rotation(float)`			| `mat3d`	| Returns a 3x3 double-precision rotation matrix about the x-axis by an angle.
| `mat3f_y_rotation(float)`			| `mat3f`	| Returns a 3x3 single-precision rotation matrix about the y-axis by an angle.
| `mat3d_y_rotation(float)`			| `mat3d`	| Returns a 3x3 double-precision rotation matrix about the y-axis by an angle.
| `mat3f_z_rotation(float)`			| `mat3f`	| Returns a 3x3 single-precision rotation matrix about the z-axis by an angle.
| `mat3d_z_rotation(float)`			| `mat3d`	| Returns a 3x3 double-precision rotation matrix about the z-axis by an angle.
| `mat3f_v_rotation(vec3f, float)`		| `mat3f`	| Returns a 3x3 single-precision rotation matrix about an axis by an angle.
| `mat3d_v_rotation(vec3d, double)`		| `mat3d`	| Returns a 3x3 double-precision rotation matrix about an axis by an angle.

#### Matrix type conversion functions
| Function prototype				| Return value	| Description
| --------					| --------	| --------
| `mat2d_to_f(mat2d)`				| `mat2f`	| Converts a 2x2 matrix from double- to single-precision.
| `mat2f_to_d(mat2f)`				| `mat2d`	| Converts a 2x2 matrix from single- to double-precision.
| `mat3d_to_f(mat3d)`				| `mat3f`	| Converts a 3x3 matrix from double- to single-precision.
| `mat3f_to_d(mat3f)`				| `mat3d`	| Converts a 3x3 matrix from single- to double-precision.
| `mat4d_to_f(mat4d)`				| `mat4f`	| Converts a 4x4 matrix from double- to single-precision.
| `mat4f_to_d(mat4f)`				| `mat4d`	| Converts a 4x4 matrix from single- to double-precision.

### Quaternion
This library implements the quaternion as a 4D vector with the x-, y- and z-components
corresponding to the imaginary part and the w-component equal to the real part.

#### Quaternion types
| Type name		| Description			| Size (standard)	| Size (vectorized)
| --------		| --------			| --------		| --------
| `quatf`		| Single-precision quaternion.	| 16			| 16
| `quatd`		| Double-precision quaternion.	| 32			| 32

#### Quaternion indexing macros
| Macro definition      | Description
| --------              | --------
| `quat_x(q)`		| Index to the x-component of a quaternion.
| `quat_y(q)`		| Index to the y-component of a quaternion.
| `quat_z(q)`		| Index to the z-component of a quaternion.
| `quat_w(v)`		| Index to the w-component of a quaternion.

#### Quaternion constructors
| Function prototype				| Return value	| Description
| --------					| --------	| --------
| `quatf_make(float, float, float, float)`	| `quatf`	| Constructs a single-precision quaternion.
| `quatd_make(double, double, double, double)`	| `quatd`	| Constructs a double-precision quaternion.
| `quatf_zero(void)`				| `quatf`	| Constructs a zero single-precision quaternion.
| `quatd_zero(void)`				| `quatd`	| Constructs a zero double-precision quaternion.

#### Element-wise quaternion arithmetic
| Function prototype				| Return value	| Description
| --------					| --------	| --------
| `quatf_add(quatf, quatf)`			| `quatf`	| Returns the sum quaternion of two single-precision quaternions.
| `quatd_add(quatd, quatd)`			| `quatd`	| Returns the sum quaternion of two double-precision quaternions.
| `quatf_sub(quatf, quatf)`			| `quatf`	| Returns the difference quaternion between two single-precision quaternions.
| `quatd_sub(quatd, quatd)`			| `quatd`	| Returns the difference quaternion between two double-precision quaternions.
| `quatf_mul(quatf, quatf)`			| `quatf`	| Returns the product quaternion of two single-precision quaternions.
| `quatd_mul(quatd, quatd)`			| `quatd`	| Returns the product quaternion of two double-precision quaternions.
| `quatf_div(quatf, quatf)`			| `quatf`	| Returns the quotient quaternion between two single-precision quaternions.
| `quatd_div(quatd, quatd)`			| `quatd`	| Returns the quotient quaternion between two double-precision quaternions.
| `quatf_add_scalar(quatf, quatf)`		| `quatf`	| Returns the sum quaternion of a single-precision quaternion and a scalar.
| `quatd_add_scalar(quatd, quatd)`		| `quatd`	| Returns the sum quaternion of a double-precision quaternion and a scalar.
| `quatf_sub_scalar(quatf, quatf)`		| `quatf`	| Returns the difference quaternion between a single-precision quaternion and a scalar.
| `quatd_sub_scalar(quatd, quatd)`		| `quatd`	| Returns the difference quaternion between a double-precision quaternion and a scalar.
| `quatf_mul_scalar(quatf, quatf)`		| `quatf`	| Returns the product quaternion of a single-precision quaternion and a scalar.
| `quatd_mul_scalar(quatd, quatd)`		| `quatd`	| Returns the product quaternion of a double-precision quaternion and a scalar.
| `quatf_div_scalar(quatf, quatf)`		| `quatf`	| Returns the quotient quaternion between a single-precision quaternion and a scalar.
| `quatd_div_scalar(quatd, quatd)`		| `quatd`	| Returns the quotient quaternion between a double-precision quaternion and a scalar.

#### General quaternion functions
| Function prototype				| Return value	| Description
| --------					| --------	| --------
| `quatf_dot(quatf)`				| `float`	| Returns the dot product of a single-precision quaternion.
| `quatd_dot(quatd)`				| `double`	| Returns the dot product of a double-precision quaternion.
| `quatf_conj(quatf)`				| `quatf`	| Returns the conjugate of a single-precision quaternion.
| `quatd_conj(quatd)`				| `quatd`	| Returns the conjugate of a double-precision quaternion.
| `quatf_inv(quatf)`				| `quatf`	| Returns the inverse of a single-precision quaternion.
| `quatd_inv(quatd)`				| `quatd`	| Returns the inverse of a double-precision quaternion.
| `quatf_norm(quatf)`				| `float`	| Returns the norm of a single-precision quaternion.
| `quatd_norm(quatd)`				| `double`	| Returns the norm of a double-precision quaternion.
| `quatf_unit(quatf)`				| `quatf`	| Returns a normalized quaternion from a single-precision quaternion.
| `quatd_unit(quatd)`				| `quatd`	| Returns a normalized quaternion from a double-precision quaternion.
| `quatf_product(quatf, quatf)`			| `quatf`	| Returns the product between two single-precision quaternions.
| `quatd_product(quatd, quatd)`			| `quatd`	| Returns the product between two double-precision quaternions.
| `quatf_exp(quatf)`				| `quatf`	| Returns the exponential of a single-precision quaternion. (UNAVAILABLE)
| `quatd_exp(quatd)`				| `quatd`	| Returns the exponential of a double-precision quaternion. (UNAVAILABLE)
| `quatf_log(quatf)`				| `quatf`	| Returns the logarithm of a single-precision quaternion. (UNAVAILABLE)
| `quatd_log(quatd)`				| `quatd`	| Returns the logarithm of a double-precision quaternion. (UNAVAILABLE)
| `quatf_pow(quatf, float)`			| `quatf`	| Returns a single-precision quaternion raised to an arbitrary real exponent. (UNAVAILABLE)
| `quatd_pow(quatd, double)`			| `quatd`	| Returns a double-precision quaternion raised to an arbitrary real exponent. (UNAVAILABLE)

#### Quaternion size conversion functions
| Function prototype				| Return value	| Description
| --------					| --------	| --------
| `quatd_to_f(quatd)`				| `quatd`	| Converts a quaternion from double- to single-precision.
| `quatf_to_d(quatf)`				| `quatf`	| Converts a quaternion from single- to double-precision.

#### Quaternion-vector conversion functions
| Function prototype				| Return value	| Description
| --------					| --------	| --------
| `quatf_to_vec3(quatf)`			| `vec3f`	| Converts a single-precision quaternion to a 3D vector.
| `quatd_to_vec3(quatd)`			| `vec3d`	| Converts a double-precision quaternion to a 3D vector.
| `quatf_to_vec4(quatf)`			| `vec4f`	| Converts a single-precision quaternion to a 4D vector.
| `quatd_to_vec4(quatd)`			| `vec4d`	| Converts a double-precision quaternion to a 4D vector.
| `vec3f_to_quat(vec3f)`			| `quatf`	| Converts a 3D single-precision vector to a quaternion.
| `vec3d_to_quat(vec3d)`			| `quatd`	| Converts a 3D double-precision vector to a quaternion.
| `vec4f_to_quat(vec4f)`			| `quatf`	| Converts a 4D single-precision vector to a quaternion.
| `vec4d_to_quat(vec4d)`			| `quatd`	| Converts a 4D double-precision vector to a quaternion.
