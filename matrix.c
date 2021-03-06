#include <math.h>

#include "matrix.h"

mat2f
mat2f_make(
    float ax, float ay,
    float bx, float by)
{
	mat2f m;
	mat2_11(m) = ax, mat2_12(m) = ay;
	mat2_21(m) = bx, mat2_22(m) = by;
	return m;
}

mat2d
mat2d_make(
    double ax, double ay,
    double bx, double by)
{
	mat2d m;
	mat2_11(m) = ax, mat2_12(m) = ay;
	mat2_21(m) = bx, mat2_22(m) = by;
	return m;
}

mat3f
mat3f_make(
    float ax, float ay, float az,
    float bx, float by, float bz,
    float cx, float cy, float cz)
{
	mat3f m;
	mat3_11(m) = ax, mat3_12(m) = ay, mat3_13(m) = az;
	mat3_21(m) = bx, mat3_22(m) = by, mat3_23(m) = bz;
	mat3_31(m) = cx, mat3_32(m) = cy, mat3_33(m) = cz;
	return m;
}

mat3d
mat3d_make(
    double ax, double ay, double az,
    double bx, double by, double bz,
    double cx, double cy, double cz)
{
	mat3d m;
	mat3_11(m) = ax, mat3_12(m) = ay, mat3_13(m) = az;
	mat3_21(m) = bx, mat3_22(m) = by, mat3_23(m) = bz;
	mat3_31(m) = cx, mat3_32(m) = cy, mat3_33(m) = cz;
	return m;
}

mat4f
mat4f_make(
    float ax, float ay, float az, float aw,
    float bx, float by, float bz, float bw,
    float cx, float cy, float cz, float cw,
    float dx, float dy, float dz, float dw)
{
	mat4f m;
	mat4_11(m) = ax, mat4_12(m) = ay, mat4_13(m) = az, mat4_14(m) = aw;
	mat4_21(m) = bx, mat4_22(m) = by, mat4_23(m) = bz, mat4_24(m) = bw;
	mat4_31(m) = cx, mat4_32(m) = cy, mat4_33(m) = cz, mat4_34(m) = cw;
	mat4_41(m) = dx, mat4_42(m) = dy, mat4_43(m) = dz, mat4_44(m) = dw;
	return m;
}

mat4d
mat4d_make(
    double ax, double ay, double az, double aw,
    double bx, double by, double bz, double bw,
    double cx, double cy, double cz, double cw,
    double dx, double dy, double dz, double dw)
{
	mat4d m;
	mat4_11(m) = ax, mat4_12(m) = ay, mat4_13(m) = az, mat4_14(m) = aw;
	mat4_21(m) = bx, mat4_22(m) = by, mat4_23(m) = bz, mat4_24(m) = bw;
	mat4_31(m) = cx, mat4_32(m) = cy, mat4_33(m) = cz, mat4_34(m) = cw;
	mat4_41(m) = dx, mat4_42(m) = dy, mat4_43(m) = dz, mat4_44(m) = dw;
	return m;
}

mat2f
mat2f_with(float n)
{
	return mat2f_make(
	    n, n,
	    n, n
	);
}

mat2d
mat2d_with(double n)
{
	return mat2d_make(
	    n, n,
	    n, n
	);
}

mat3f
mat3f_with(float n)
{
	return mat3f_make(
	    n, n, n,
	    n, n, n,
	    n, n, n
	);
}

mat3d
mat3d_with(double n)
{
	return mat3d_make(
	    n, n, n,
	    n, n, n,
	    n, n, n
	);
}

mat4f
mat4f_with(float n)
{
	return mat4f_make(
	    n, n, n, n,
	    n, n, n, n,
	    n, n, n, n,
	    n, n, n, n
	);
}

mat4d
mat4d_with(double n)
{
	return mat4d_make(
	    n, n, n, n,
	    n, n, n, n,
	    n, n, n, n,
	    n, n, n, n
	);
}

mat2f
mat2f_from_rows(vec2f a, vec2f b)
{
	return mat2f_make(
	    vec_x(a), vec_y(a),
	    vec_x(b), vec_y(b)
	);
}

mat2d
mat2d_from_rows(vec2d a, vec2d b)
{
	return mat2d_make(
	    vec_x(a), vec_y(a),
	    vec_x(b), vec_y(b)
	);
}

mat3f
mat3f_from_rows(vec3f a, vec3f b, vec3f c)
{
	return mat3f_make(
	    vec_x(a), vec_y(a), vec_z(a),
	    vec_x(b), vec_y(b), vec_z(b),
	    vec_x(c), vec_y(c), vec_z(c)
	);
}

mat3d
mat3d_from_rows(vec3d a, vec3d b, vec3d c)
{
	return mat3d_make(
	    vec_x(a), vec_y(a), vec_z(a),
	    vec_x(b), vec_y(b), vec_z(b),
	    vec_x(c), vec_y(c), vec_z(c)
	);
}

mat4f
mat4f_from_rows(vec4f a, vec4f b, vec4f c, vec4f d)
{
	return mat4f_make(
	    vec_x(a), vec_y(a), vec_z(a), vec_w(a),
	    vec_x(b), vec_y(b), vec_z(b), vec_w(b),
	    vec_x(c), vec_y(c), vec_z(c), vec_w(c),
	    vec_x(d), vec_y(d), vec_z(d), vec_w(d)
	);
}

mat4d
mat4d_from_rows(vec4d a, vec4d b, vec4d c, vec4d d)
{
	return mat4d_make(
	    vec_x(a), vec_y(a), vec_z(a), vec_w(a),
	    vec_x(b), vec_y(b), vec_z(b), vec_w(b),
	    vec_x(c), vec_y(c), vec_z(c), vec_w(c),
	    vec_x(d), vec_y(d), vec_z(d), vec_w(d)
	);
}

mat2f
mat2f_from_columns(vec2f a, vec2f b)
{
	return mat2f_make(
	    vec_x(a), vec_x(b),
	    vec_y(a), vec_y(b)
	);
}

mat2d
mat2d_from_columns(vec2d a, vec2d b)
{
	return mat2d_make(
	    vec_x(a), vec_x(b),
	    vec_y(a), vec_y(b)
	);
}

mat3f
mat3f_from_columns(vec3f a, vec3f b, vec3f c)
{
	return mat3f_make(
	    vec_x(a), vec_x(b), vec_x(c),
	    vec_y(a), vec_y(b), vec_y(c),
	    vec_z(a), vec_z(b), vec_z(c)
	);
}

mat3d
mat3d_from_columns(vec3d a, vec3d b, vec3d c)
{
	return mat3d_make(
	    vec_x(a), vec_x(b), vec_x(c),
	    vec_y(a), vec_y(b), vec_y(c),
	    vec_z(a), vec_z(b), vec_z(c)
	);
}

mat4f
mat4f_from_columns(vec4f a, vec4f b, vec4f c, vec4f d)
{
	return mat4f_make(
	    vec_x(a), vec_x(b), vec_x(c), vec_x(d),
	    vec_y(a), vec_y(b), vec_y(c), vec_y(d),
	    vec_z(a), vec_z(b), vec_z(c), vec_z(d),
	    vec_w(a), vec_w(b), vec_w(c), vec_w(d)
	);
}

mat4d
mat4d_from_columns(vec4d a, vec4d b, vec4d c, vec4d d)
{
	return mat4d_make(
	    vec_x(a), vec_x(b), vec_x(c), vec_x(d),
	    vec_y(a), vec_y(b), vec_y(c), vec_y(d),
	    vec_z(a), vec_z(b), vec_z(c), vec_z(d),
	    vec_w(a), vec_w(b), vec_w(c), vec_w(d)
	);
}

mat2f
mat2f_zero(void)
{
	return mat2f_with(0);
}

mat2d
mat2d_zero(void)
{
	return mat2d_with(0);
}

mat3f
mat3f_zero(void)
{
	return mat3f_with(0);
}

mat3d
mat3d_zero(void)
{
	return mat3d_with(0);
}

mat4f
mat4f_zero(void)
{
	return mat4f_with(0);
}

mat4d
mat4d_zero(void)
{
	return mat4d_with(0);
}

mat2f
mat2f_ident(void)
{
	return mat2f_make(
	    1, 0,
	    0, 1
	);
}

mat2d
mat2d_ident(void)
{
	return mat2d_make(
	    1, 0,
	    0, 1
	);
}

mat3f
mat3f_ident(void)
{
	return mat3f_make(
	    1, 0, 0,
	    0, 1, 0,
	    0, 0, 1
	);
}

mat3d
mat3d_ident(void)
{
	return mat3d_make(
	    1, 0, 0,
	    0, 1, 0,
	    0, 0, 1
	);
}

mat4f
mat4f_ident(void)
{
	return mat4f_make(
	    1, 0, 0, 0,
	    0, 1, 0, 0,
	    0, 0, 1, 0,
	    0, 0, 0, 1
	);
}

mat4d
mat4d_ident(void)
{
	return mat4d_make(
	    1, 0, 0, 0,
	    0, 1, 0, 0,
	    0, 0, 1, 0,
	    0, 0, 0, 1
	);
}

mat2f
mat2f_transpose(mat2f m)
{
	return mat2f_make(
	    mat2_11(m), mat2_21(m),
	    mat2_12(m), mat2_22(m)
	);
}

mat2d
mat2d_transpose(mat2d m)
{
	return mat2d_make(
	    mat2_11(m), mat2_21(m),
	    mat2_12(m), mat2_22(m)
	);
}

mat3f
mat3f_transpose(mat3f m)
{
	return mat3f_make(
	    mat3_11(m), mat3_21(m), mat3_31(m),
	    mat3_12(m), mat3_22(m), mat3_32(m),
	    mat3_13(m), mat3_23(m), mat3_33(m)
	);
}

mat3d
mat3d_transpose(mat3d m)
{
	return mat3d_make(
	    mat3_11(m), mat3_21(m), mat3_31(m),
	    mat3_12(m), mat3_22(m), mat3_32(m),
	    mat3_13(m), mat3_23(m), mat3_33(m)
	);
}

mat4f
mat4f_transpose(mat4f m)
{
	return mat4f_make(
	    mat4_11(m), mat4_21(m), mat4_31(m), mat4_41(m),
	    mat4_12(m), mat4_22(m), mat4_32(m), mat4_42(m),
	    mat4_13(m), mat4_23(m), mat4_33(m), mat4_43(m),
	    mat4_14(m), mat4_24(m), mat4_34(m), mat4_44(m)
	);
}

mat4d
mat4d_transpose(mat4d m)
{
	return mat4d_make(
	    mat4_11(m), mat4_21(m), mat4_31(m), mat4_41(m),
	    mat4_12(m), mat4_22(m), mat4_32(m), mat4_42(m),
	    mat4_13(m), mat4_23(m), mat4_33(m), mat4_43(m),
	    mat4_14(m), mat4_24(m), mat4_34(m), mat4_44(m)
	);
}

float
mat2f_trace(mat2f m)
{
	return mat2_11(m) + mat2_22(m);
}

double
mat2d_trace(mat2d m)
{
	return mat2_11(m) + mat2_22(m);
}

float
mat3f_trace(mat3f m)
{
	return mat3_11(m) + mat3_22(m) + mat3_33(m);
}

double
mat3d_trace(mat3d m)
{
	return mat3_11(m) + mat3_22(m) + mat3_33(m);
}

float
mat4f_trace(mat4f m)
{
	return mat4_11(m) + mat4_22(m) + mat4_33(m) + mat4_44(m);
}

double
mat4d_trace(mat4d m)
{
	return mat4_11(m) + mat4_22(m) + mat4_33(m) + mat4_44(m);
}

float
mat2f_det(mat2f m)
{
	return mat2_11(m) * mat2_22(m) - mat2_12(m) * mat2_21(m);
}

double
mat2d_det(mat2d m)
{
	return mat2_11(m) * mat2_22(m) - mat2_12(m) * mat2_21(m);
}

float
mat3f_det(mat3f m)
{
	float det =
	    mat3_11(m) * mat3_22(m) * mat3_33(m) +
	    mat3_12(m) * mat3_23(m) * mat3_31(m) +
	    mat3_13(m) * mat3_21(m) * mat3_32(m) -
	    mat3_13(m) * mat3_22(m) * mat3_31(m) -
	    mat3_12(m) * mat3_21(m) * mat3_33(m) -
	    mat3_11(m) * mat3_23(m) * mat3_32(m);

	return det;
}

double
mat3d_det(mat3d m)
{
	double det =
	    mat3_11(m) * mat3_22(m) * mat3_33(m) +
	    mat3_12(m) * mat3_23(m) * mat3_31(m) +
	    mat3_13(m) * mat3_21(m) * mat3_32(m) -
	    mat3_13(m) * mat3_22(m) * mat3_31(m) -
	    mat3_12(m) * mat3_21(m) * mat3_33(m) -
	    mat3_11(m) * mat3_23(m) * mat3_32(m);

	return det;
}

float
mat4f_det(mat4f m)
{
	float det =
	    mat4_14(m) * mat4_23(m) * mat4_32(m) * mat4_41(m) -
	    mat4_13(m) * mat4_24(m) * mat4_32(m) * mat4_41(m) -
	    mat4_14(m) * mat4_22(m) * mat4_33(m) * mat4_41(m) +
	    mat4_12(m) * mat4_24(m) * mat4_33(m) * mat4_41(m) +
	    mat4_13(m) * mat4_22(m) * mat4_34(m) * mat4_41(m) -
	    mat4_12(m) * mat4_23(m) * mat4_34(m) * mat4_41(m) -

	    mat4_14(m) * mat4_23(m) * mat4_31(m) * mat4_42(m) +
	    mat4_13(m) * mat4_24(m) * mat4_31(m) * mat4_42(m) +
	    mat4_14(m) * mat4_21(m) * mat4_33(m) * mat4_42(m) -
	    mat4_11(m) * mat4_24(m) * mat4_33(m) * mat4_42(m) -
	    mat4_13(m) * mat4_21(m) * mat4_34(m) * mat4_42(m) +
	    mat4_11(m) * mat4_23(m) * mat4_34(m) * mat4_42(m) +

	    mat4_14(m) * mat4_22(m) * mat4_31(m) * mat4_43(m) -
	    mat4_12(m) * mat4_24(m) * mat4_31(m) * mat4_43(m) -
	    mat4_14(m) * mat4_21(m) * mat4_32(m) * mat4_43(m) +
	    mat4_11(m) * mat4_24(m) * mat4_32(m) * mat4_43(m) +
	    mat4_12(m) * mat4_21(m) * mat4_34(m) * mat4_43(m) -
	    mat4_11(m) * mat4_22(m) * mat4_34(m) * mat4_43(m) -

	    mat4_13(m) * mat4_22(m) * mat4_31(m) * mat4_44(m) +
	    mat4_12(m) * mat4_23(m) * mat4_31(m) * mat4_44(m) +
	    mat4_13(m) * mat4_21(m) * mat4_32(m) * mat4_44(m) -
	    mat4_11(m) * mat4_23(m) * mat4_32(m) * mat4_44(m) -
	    mat4_12(m) * mat4_21(m) * mat4_33(m) * mat4_44(m) +
	    mat4_11(m) * mat4_22(m) * mat4_33(m) * mat4_44(m);

	return det;
}

double
mat4d_det(mat4d m)
{
	double det =
	    mat4_14(m) * mat4_23(m) * mat4_32(m) * mat4_41(m) -
	    mat4_13(m) * mat4_24(m) * mat4_32(m) * mat4_41(m) -
	    mat4_14(m) * mat4_22(m) * mat4_33(m) * mat4_41(m) +
	    mat4_12(m) * mat4_24(m) * mat4_33(m) * mat4_41(m) +
	    mat4_13(m) * mat4_22(m) * mat4_34(m) * mat4_41(m) -
	    mat4_12(m) * mat4_23(m) * mat4_34(m) * mat4_41(m) -

	    mat4_14(m) * mat4_23(m) * mat4_31(m) * mat4_42(m) +
	    mat4_13(m) * mat4_24(m) * mat4_31(m) * mat4_42(m) +
	    mat4_14(m) * mat4_21(m) * mat4_33(m) * mat4_42(m) -
	    mat4_11(m) * mat4_24(m) * mat4_33(m) * mat4_42(m) -
	    mat4_13(m) * mat4_21(m) * mat4_34(m) * mat4_42(m) +
	    mat4_11(m) * mat4_23(m) * mat4_34(m) * mat4_42(m) +

	    mat4_14(m) * mat4_22(m) * mat4_31(m) * mat4_43(m) -
	    mat4_12(m) * mat4_24(m) * mat4_31(m) * mat4_43(m) -
	    mat4_14(m) * mat4_21(m) * mat4_32(m) * mat4_43(m) +
	    mat4_11(m) * mat4_24(m) * mat4_32(m) * mat4_43(m) +
	    mat4_12(m) * mat4_21(m) * mat4_34(m) * mat4_43(m) -
	    mat4_11(m) * mat4_22(m) * mat4_34(m) * mat4_43(m) -

	    mat4_13(m) * mat4_22(m) * mat4_31(m) * mat4_44(m) +
	    mat4_12(m) * mat4_23(m) * mat4_31(m) * mat4_44(m) +
	    mat4_13(m) * mat4_21(m) * mat4_32(m) * mat4_44(m) -
	    mat4_11(m) * mat4_23(m) * mat4_32(m) * mat4_44(m) -
	    mat4_12(m) * mat4_21(m) * mat4_33(m) * mat4_44(m) +
	    mat4_11(m) * mat4_22(m) * mat4_33(m) * mat4_44(m);

	return det;
}

mat2f
mat2f_product(mat2f a, mat2f b)
{
	return mat2f_make(
	    mat2_11(a) * mat2_11(b) + mat2_12(a) * mat2_21(b),
	    mat2_11(a) * mat2_12(b) + mat2_12(a) * mat2_22(b),
	    mat2_21(a) * mat2_11(b) + mat2_22(a) * mat2_21(b),
	    mat2_21(a) * mat2_12(b) + mat2_22(a) * mat2_22(b)
	);
}

mat2d
mat2d_product(mat2d a, mat2d b)
{
	return mat2d_make(
	    mat2_11(a) * mat2_11(b) + mat2_12(a) * mat2_21(b),
	    mat2_11(a) * mat2_12(b) + mat2_12(a) * mat2_22(b),
	    mat2_21(a) * mat2_11(b) + mat2_22(a) * mat2_21(b),
	    mat2_21(a) * mat2_12(b) + mat2_22(a) * mat2_22(b)
	);
}

mat3f
mat3f_product(mat3f a, mat3f b)
{
	return mat3f_make(
	    mat3_11(a) * mat3_11(b) + mat3_12(a) *
	    mat3_21(b) + mat3_13(a) * mat3_31(b),

	    mat3_11(a) * mat3_12(b) + mat3_12(a) *
	    mat3_22(b) + mat3_13(a) * mat3_32(b),

	    mat3_11(a) * mat3_13(b) + mat3_12(a) *
	    mat3_23(b) + mat3_13(a) * mat3_33(b),

	    mat3_21(a) * mat3_11(b) + mat3_22(a) *
	    mat3_21(b) + mat3_23(a) * mat3_31(b),

	    mat3_21(a) * mat3_12(b) + mat3_22(a) *
	    mat3_22(b) + mat3_23(a) * mat3_32(b),

	    mat3_21(a) * mat3_13(b) + mat3_22(a) *
	    mat3_23(b) + mat3_23(a) * mat3_33(b),

	    mat3_31(a) * mat3_11(b) + mat3_32(a) *
	    mat3_21(b) + mat3_33(a) * mat3_31(b),

	    mat3_31(a) * mat3_12(b) + mat3_32(a) *
	    mat3_22(b) + mat3_33(a) * mat3_32(b),

	    mat3_31(a) * mat3_13(b) + mat3_32(a) *
	    mat3_23(b) + mat3_33(a) * mat3_33(b)
	);
}

mat3d
mat3d_product(mat3d a, mat3d b)
{
	return mat3d_make(
	    mat3_11(a) * mat3_11(b) + mat3_12(a) *
	    mat3_21(b) + mat3_13(a) * mat3_31(b),

	    mat3_11(a) * mat3_12(b) + mat3_12(a) *
	    mat3_22(b) + mat3_13(a) * mat3_32(b),

	    mat3_11(a) * mat3_13(b) + mat3_12(a) *
	    mat3_23(b) + mat3_13(a) * mat3_33(b),

	    mat3_21(a) * mat3_11(b) + mat3_22(a) *
	    mat3_21(b) + mat3_23(a) * mat3_31(b),

	    mat3_21(a) * mat3_12(b) + mat3_22(a) *
	    mat3_22(b) + mat3_23(a) * mat3_32(b),

	    mat3_21(a) * mat3_13(b) + mat3_22(a) *
	    mat3_23(b) + mat3_23(a) * mat3_33(b),

	    mat3_31(a) * mat3_11(b) + mat3_32(a) *
	    mat3_21(b) + mat3_33(a) * mat3_31(b),

	    mat3_31(a) * mat3_12(b) + mat3_32(a) *
	    mat3_22(b) + mat3_33(a) * mat3_32(b),

	    mat3_31(a) * mat3_13(b) + mat3_32(a) *
	    mat3_23(b) + mat3_33(a) * mat3_33(b)
	);
}

mat4f
mat4f_product(mat4f a, mat4f b)
{
	return mat4f_make(
	    mat4_11(a) * mat4_11(b) + mat4_12(a) * mat4_21(b) +
	    mat4_13(a) * mat4_31(b) + mat4_14(a) * mat4_41(b),

	    mat4_11(a) * mat4_12(b) + mat4_12(a) * mat4_22(b) +
	    mat4_13(a) * mat4_32(b) + mat4_14(a) * mat4_42(b),

	    mat4_11(a) * mat4_13(b) + mat4_12(a) * mat4_23(b) +
	    mat4_13(a) * mat4_33(b) + mat4_14(a) * mat4_43(b),

	    mat4_11(a) * mat4_14(b) + mat4_12(a) * mat4_24(b) +
	    mat4_13(a) * mat4_34(b) + mat4_14(a) * mat4_44(b),

	    mat4_21(a) * mat4_11(b) + mat4_22(a) * mat4_21(b) +
	    mat4_23(a) * mat4_31(b) + mat4_24(a) * mat4_41(b),

	    mat4_21(a) * mat4_12(b) + mat4_22(a) * mat4_22(b) +
	    mat4_23(a) * mat4_32(b) + mat4_24(a) * mat4_42(b),

	    mat4_21(a) * mat4_13(b) + mat4_22(a) * mat4_23(b) +
	    mat4_23(a) * mat4_33(b) + mat4_24(a) * mat4_43(b),

	    mat4_21(a) * mat4_14(b) + mat4_22(a) * mat4_24(b) +
	    mat4_23(a) * mat4_34(b) + mat4_24(a) * mat4_44(b),

	    mat4_31(a) * mat4_11(b) + mat4_32(a) * mat4_21(b) +
	    mat4_33(a) * mat4_31(b) + mat4_34(a) * mat4_41(b),

	    mat4_31(a) * mat4_12(b) + mat4_32(a) * mat4_22(b) +
	    mat4_33(a) * mat4_32(b) + mat4_34(a) * mat4_42(b),

	    mat4_31(a) * mat4_13(b) + mat4_32(a) * mat4_23(b) +
	    mat4_33(a) * mat4_33(b) + mat4_34(a) * mat4_43(b),

	    mat4_31(a) * mat4_14(b) + mat4_32(a) * mat4_24(b) +
	    mat4_33(a) * mat4_34(b) + mat4_34(a) * mat4_44(b),

	    mat4_41(a) * mat4_11(b) + mat4_42(a) * mat4_21(b) +
	    mat4_43(a) * mat4_31(b) + mat4_44(a) * mat4_41(b),

	    mat4_41(a) * mat4_12(b) + mat4_42(a) * mat4_22(b) +
	    mat4_43(a) * mat4_32(b) + mat4_44(a) * mat4_42(b),

	    mat4_41(a) * mat4_13(b) + mat4_42(a) * mat4_23(b) +
	    mat4_43(a) * mat4_33(b) + mat4_44(a) * mat4_43(b),

	    mat4_41(a) * mat4_14(b) + mat4_42(a) * mat4_24(b) +
	    mat4_43(a) * mat4_34(b) + mat4_44(a) * mat4_44(b)
	);
}

mat4d
mat4d_product(mat4d a, mat4d b)
{
	return mat4d_make(
	    mat4_11(a) * mat4_11(b) + mat4_12(a) * mat4_21(b) +
	    mat4_13(a) * mat4_31(b) + mat4_14(a) * mat4_41(b),

	    mat4_11(a) * mat4_12(b) + mat4_12(a) * mat4_22(b) +
	    mat4_13(a) * mat4_32(b) + mat4_14(a) * mat4_42(b),

	    mat4_11(a) * mat4_13(b) + mat4_12(a) * mat4_23(b) +
	    mat4_13(a) * mat4_33(b) + mat4_14(a) * mat4_43(b),

	    mat4_11(a) * mat4_14(b) + mat4_12(a) * mat4_24(b) +
	    mat4_13(a) * mat4_34(b) + mat4_14(a) * mat4_44(b),

	    mat4_21(a) * mat4_11(b) + mat4_22(a) * mat4_21(b) +
	    mat4_23(a) * mat4_31(b) + mat4_24(a) * mat4_41(b),

	    mat4_21(a) * mat4_12(b) + mat4_22(a) * mat4_22(b) +
	    mat4_23(a) * mat4_32(b) + mat4_24(a) * mat4_42(b),

	    mat4_21(a) * mat4_13(b) + mat4_22(a) * mat4_23(b) +
	    mat4_23(a) * mat4_33(b) + mat4_24(a) * mat4_43(b),

	    mat4_21(a) * mat4_14(b) + mat4_22(a) * mat4_24(b) +
	    mat4_23(a) * mat4_34(b) + mat4_24(a) * mat4_44(b),

	    mat4_31(a) * mat4_11(b) + mat4_32(a) * mat4_21(b) +
	    mat4_33(a) * mat4_31(b) + mat4_34(a) * mat4_41(b),

	    mat4_31(a) * mat4_12(b) + mat4_32(a) * mat4_22(b) +
	    mat4_33(a) * mat4_32(b) + mat4_34(a) * mat4_42(b),

	    mat4_31(a) * mat4_13(b) + mat4_32(a) * mat4_23(b) +
	    mat4_33(a) * mat4_33(b) + mat4_34(a) * mat4_43(b),

	    mat4_31(a) * mat4_14(b) + mat4_32(a) * mat4_24(b) +
	    mat4_33(a) * mat4_34(b) + mat4_34(a) * mat4_44(b),

	    mat4_41(a) * mat4_11(b) + mat4_42(a) * mat4_21(b) +
	    mat4_43(a) * mat4_31(b) + mat4_44(a) * mat4_41(b),

	    mat4_41(a) * mat4_12(b) + mat4_42(a) * mat4_22(b) +
	    mat4_43(a) * mat4_32(b) + mat4_44(a) * mat4_42(b),

	    mat4_41(a) * mat4_13(b) + mat4_42(a) * mat4_23(b) +
	    mat4_43(a) * mat4_33(b) + mat4_44(a) * mat4_43(b),

	    mat4_41(a) * mat4_14(b) + mat4_42(a) * mat4_24(b) +
	    mat4_43(a) * mat4_34(b) + mat4_44(a) * mat4_44(b)
	);
}

vec2f
mat2f_v_product(mat2f m, vec2f v)
{
	return vec2f_make(
	    mat2_11(m) * vec_x(v) + mat2_12(m) * vec_y(v),
	    mat2_21(m) * vec_x(v) + mat2_22(m) * vec_y(v)
	);
}

vec2d
mat2d_v_product(mat2d m, vec2d v)
{
	return vec2d_make(
	    mat2_11(m) * vec_x(v) + mat2_12(m) * vec_y(v),
	    mat2_21(m) * vec_x(v) + mat2_22(m) * vec_y(v)
	);
}

vec3f
mat3f_v_product(mat3f m, vec3f v)
{
	return vec3f_make(
	    mat3_11(m) * vec_x(v) + mat3_12(m) * vec_y(v) + mat3_13(m) * vec_z(v),
	    mat3_21(m) * vec_x(v) + mat3_22(m) * vec_y(v) + mat3_23(m) * vec_z(v),
	    mat3_31(m) * vec_x(v) + mat3_32(m) * vec_y(v) + mat3_33(m) * vec_z(v)
	);
}

vec3d
mat3d_v_product(mat3d m, vec3d v)
{
	return vec3d_make(
	    mat3_11(m) * vec_x(v) + mat3_12(m) * vec_y(v) + mat3_13(m) * vec_z(v),
	    mat3_21(m) * vec_x(v) + mat3_22(m) * vec_y(v) + mat3_23(m) * vec_z(v),
	    mat3_31(m) * vec_x(v) + mat3_32(m) * vec_y(v) + mat3_33(m) * vec_z(v)
	);
}

vec4f
mat4f_v_product(mat4f m, vec4f v)
{
	return vec4f_make(
	    mat4_11(m) * vec_x(v) + mat4_12(m) * vec_y(v) +
	    mat4_13(m) * vec_z(v) + mat4_14(m) * vec_w(v),

	    mat4_21(m) * vec_x(v) + mat4_22(m) * vec_y(v) +
	    mat4_23(m) * vec_z(v) + mat4_24(m) * vec_w(v),

	    mat4_31(m) * vec_x(v) + mat4_32(m) * vec_y(v) +
	    mat4_33(m) * vec_z(v) + mat4_34(m) * vec_w(v),

	    mat4_41(m) * vec_x(v) + mat4_42(m) * vec_y(v) +
	    mat4_43(m) * vec_z(v) + mat4_44(m) * vec_w(v)
	);
}

vec4d
mat4d_v_product(mat4d m, vec4d v)
{
	return vec4d_make(
	    mat4_11(m) * vec_x(v) + mat4_12(m) * vec_y(v) +
	    mat4_13(m) * vec_z(v) + mat4_14(m) * vec_w(v),

	    mat4_21(m) * vec_x(v) + mat4_22(m) * vec_y(v) +
	    mat4_23(m) * vec_z(v) + mat4_24(m) * vec_w(v),

	    mat4_31(m) * vec_x(v) + mat4_32(m) * vec_y(v) +
	    mat4_33(m) * vec_z(v) + mat4_34(m) * vec_w(v),

	    mat4_41(m) * vec_x(v) + mat4_42(m) * vec_y(v) +
	    mat4_43(m) * vec_z(v) + mat4_44(m) * vec_w(v)
	);
}

mat2f
mat2f_tensor(vec2f v, vec2f w)
{
	vec2f wx = vec2f_mul_scalar(w, vec_x(v));
	vec2f wy = vec2f_mul_scalar(w, vec_y(v));
	return mat2f_from_rows(wx, wy);
}

mat2d
mat2d_tensor(vec2d v, vec2d w)
{
	vec2d wx = vec2d_mul_scalar(w, vec_x(v));
	vec2d wy = vec2d_mul_scalar(w, vec_y(v));
	return mat2d_from_rows(wx, wy);
}

mat3f
mat3f_tensor(vec3f v, vec3f w)
{
	vec3f wx = vec3f_mul_scalar(w, vec_x(v));
	vec3f wy = vec3f_mul_scalar(w, vec_y(v));
	vec3f wz = vec3f_mul_scalar(w, vec_z(v));
	return mat3f_from_rows(wx, wy, wz);
}

mat3d
mat3d_tensor(vec3d v, vec3d w)
{
	vec3d wx = vec3d_mul_scalar(w, vec_x(v));
	vec3d wy = vec3d_mul_scalar(w, vec_y(v));
	vec3d wz = vec3d_mul_scalar(w, vec_z(v));
	return mat3d_from_rows(wx, wy, wz);
}

mat4f
mat4f_tensor(vec4f v, vec4f w)
{
	vec4f wx = vec4f_mul_scalar(w, vec_x(v));
	vec4f wy = vec4f_mul_scalar(w, vec_y(v));
	vec4f wz = vec4f_mul_scalar(w, vec_z(v));
	vec4f ww = vec4f_mul_scalar(w, vec_w(v));
	return mat4f_from_rows(wx, wy, wz, ww);
}

mat4d
mat4d_tensor(vec4d v, vec4d w)
{
	vec4d wx = vec4d_mul_scalar(w, vec_x(v));
	vec4d wy = vec4d_mul_scalar(w, vec_y(v));
	vec4d wz = vec4d_mul_scalar(w, vec_z(v));
	vec4d ww = vec4d_mul_scalar(w, vec_w(v));
	return mat4d_from_rows(wx, wy, wz, ww);
}

mat2f
mat2f_rotation(float a)
{
	float sin_a = sin(a);
	float cos_a = cos(a);
	return mat2f_make(	    
	    cos_a,	-sin_a,
	    sin_a,	cos_a
	);
}

mat2d
mat2d_rotation(double a)
{
	double sin_a = sin(a);
	double cos_a = cos(a);
	return mat2d_make(	    
	    cos_a,	-sin_a,
	    sin_a,	cos_a
	);
}

mat3f
mat3f_x_rotation(float a)
{
	float sin_a = sin(a);
	float cos_a = cos(a);
	return mat3f_make(
	    1,		0,	0,
	    0,		cos_a,	-sin_a,
	    0,		sin_a,	cos_a
	);
}

mat3d
mat3d_x_rotation(double a)
{
	double sin_a = sin(a);
	double cos_a = cos(a);
	return mat3d_make(
	    1,		0,	0,
	    0,		cos_a,	-sin_a,
	    0,		sin_a,	cos_a
	);
}

mat3f
mat3f_y_rotation(float a)
{
	float sin_a = sin(a);
	float cos_a = cos(a);
	return mat3f_make(
	    cos_a,	0,	sin_a,
	    0,		1,	0,
	    -sin_a,	0,	cos_a
	);
}

mat3d
mat3d_y_rotation(double a)
{
	double sin_a = sin(a);
	double cos_a = cos(a);
	return mat3d_make(
	    cos_a,	0,	sin_a,
	    0,		1,	0,
	    -sin_a,	0,	cos_a
	);
}

mat3f
mat3f_z_rotation(float a)
{
	float sin_a = sin(a);
	float cos_a = cos(a);
	return mat3f_make(
	    cos_a,	-sin_a,	0,
	    sin_a,	cos_a,	0,
	    0,		0,	1
	);
}

mat3d
mat3d_z_rotation(double a)
{
	double sin_a = sin(a);
	double cos_a = cos(a);
	return mat3d_make(
	    cos_a,	-sin_a,	0,
	    sin_a,	cos_a,	0,
	    0,		0,	1
	);
}

mat3f
mat3f_v_rotation(vec3f v, float a)
{
	float sin_a = sin(a);
	float cos_a = cos(a);
	float cos_b = 1 - cos_a;
	v = vec3f_unit(v);
	return mat3f_make(
	    vec_x(v) * vec_x(v) * cos_b + cos_a,
	    vec_x(v) * vec_y(v) * cos_b - vec_z(v) * sin_a,
	    vec_x(v) * vec_z(v) * cos_b + vec_y(v) * sin_a,

	    vec_x(v) * vec_y(v) * cos_b + vec_z(v) * sin_a,
	    vec_y(v) * vec_y(v) * cos_b + cos_a,
	    vec_y(v) * vec_z(v) * cos_b - vec_x(v) * sin_a,

	    vec_x(v) * vec_z(v) * cos_b - vec_y(v) * sin_a,
	    vec_y(v) * vec_z(v) * cos_b + vec_x(v) * sin_a,
	    vec_z(v) * vec_z(v) * cos_b + cos_a
	);
}

mat3d
mat3d_v_rotation(vec3d v, double a)
{
	double sin_a = sin(a);
	double cos_a = cos(a);
	double cos_b = 1 - cos_a;
	v = vec3d_unit(v);
	return mat3d_make(
	    vec_x(v) * vec_x(v) * cos_b + cos_a,
	    vec_x(v) * vec_y(v) * cos_b - vec_z(v) * sin_a,
	    vec_x(v) * vec_z(v) * cos_b + vec_y(v) * sin_a,

	    vec_x(v) * vec_y(v) * cos_b + vec_z(v) * sin_a,
	    vec_y(v) * vec_y(v) * cos_b + cos_a,
	    vec_y(v) * vec_z(v) * cos_b - vec_x(v) * sin_a,

	    vec_x(v) * vec_z(v) * cos_b - vec_y(v) * sin_a,
	    vec_y(v) * vec_z(v) * cos_b + vec_x(v) * sin_a,
	    vec_z(v) * vec_z(v) * cos_b + cos_a
	);
}

mat2f
mat2d_to_f(mat2d m)
{
	return mat2f_make(
	    mat2_11(m), mat2_12(m),
	    mat2_21(m), mat2_22(m)
	);
}

mat2d
mat2f_to_d(mat2f m)
{
	return mat2d_make(
	    mat2_11(m), mat2_12(m),
	    mat2_21(m), mat2_22(m)
	);
}

mat3f
mat3d_to_f(mat3d m)
{
	return mat3f_make(
	    mat3_11(m), mat3_12(m), mat3_13(m),
	    mat3_21(m), mat3_22(m), mat3_23(m),
	    mat3_31(m), mat3_32(m), mat3_33(m)
	);
}

mat3d
mat3f_to_d(mat3f m)
{
	return mat3d_make(
	    mat3_11(m), mat3_12(m), mat3_13(m),
	    mat3_21(m), mat3_22(m), mat3_23(m),
	    mat3_31(m), mat3_32(m), mat3_33(m)
	);
}

mat4f
mat4d_to_f(mat4d m)
{
	return mat4f_make(
	    mat4_11(m), mat4_12(m), mat4_13(m), mat4_14(m),
	    mat4_21(m), mat4_22(m), mat4_23(m), mat4_24(m),
	    mat4_31(m), mat4_32(m), mat4_33(m), mat4_34(m),
	    mat4_41(m), mat4_42(m), mat4_43(m), mat4_44(m)
	);
}

mat4d
mat4f_to_d(mat4f m)
{
	return mat4d_make(
	    mat4_11(m), mat4_12(m), mat4_13(m), mat4_14(m),
	    mat4_21(m), mat4_22(m), mat4_23(m), mat4_24(m),
	    mat4_31(m), mat4_32(m), mat4_33(m), mat4_34(m),
	    mat4_41(m), mat4_42(m), mat4_43(m), mat4_44(m)
	);
}
