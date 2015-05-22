#ifndef _ARROW_MATRIX_H_
#define _ARROW_MATRIX_H_

#include "types.h"
#include "vector.h"

/* Matrix indexing macros. */
#define mat2_i(m, i, j) ((m)[(i) * 2 + (j)])
#define mat3_i(m, i, j) ((m)[(i) * 3 + (j)])
#define mat4_i(m, i, j) ((m)[(i) * 4 + (j)])

#define mat2_11(m) ((m)[0])
#define mat2_12(m) ((m)[1])
#define mat2_21(m) ((m)[2])
#define mat2_22(m) ((m)[3])

#define mat3_11(m) ((m)[0])
#define mat3_12(m) ((m)[1])
#define mat3_13(m) ((m)[2])
#define mat3_21(m) ((m)[3])
#define mat3_22(m) ((m)[4])
#define mat3_23(m) ((m)[5])
#define mat3_31(m) ((m)[6])
#define mat3_32(m) ((m)[7])
#define mat3_33(m) ((m)[8])

#define mat4_11(m) ((m)[0])
#define mat4_12(m) ((m)[1])
#define mat4_13(m) ((m)[2])
#define mat4_14(m) ((m)[3])
#define mat4_21(m) ((m)[4])
#define mat4_22(m) ((m)[5])
#define mat4_23(m) ((m)[6])
#define mat4_24(m) ((m)[7])
#define mat4_31(m) ((m)[8])
#define mat4_32(m) ((m)[9])
#define mat4_33(m) ((m)[10])
#define mat4_34(m) ((m)[11])
#define mat4_41(m) ((m)[12])
#define mat4_42(m) ((m)[13])
#define mat4_43(m) ((m)[14])
#define mat4_44(m) ((m)[15])

/* Matrix constructors. */
mat2f	mat2f_make(
	    float, float,
	    float, float);
mat2d	mat2d_make(
	    double, double,
	    double, double);
mat3f	mat3f_make(
	    float, float, float,
	    float, float, float,
	    float, float, float);
mat3d	mat3d_make(
	    double, double, double,
	    double, double, double,
	    double, double, double);
mat4f	mat4f_make(
	    float, float, float, float,
	    float, float, float, float,
	    float, float, float, float,
	    float, float, float, float);
mat4d	mat4d_make(
	    double, double, double, double,
	    double, double, double, double,
	    double, double, double, double,
	    double, double, double, double);

mat2f	mat2f_from_rows(vec2f, vec2f);
mat2d	mat2d_from_rows(vec2d, vec2d);
mat3f	mat3f_from_rows(vec3f, vec3f, vec3f);
mat3d	mat3d_from_rows(vec3d, vec3d, vec3d);
mat4f	mat4f_from_rows(vec4f, vec4f, vec4f, vec4f);
mat4d	mat4d_from_rows(vec4d, vec4d, vec4d, vec4d);

mat2f	mat2f_from_columns(vec2f, vec2f);
mat2d	mat2d_from_columns(vec2d, vec2d);
mat3f	mat3f_from_columns(vec3f, vec3f, vec3f);
mat3d	mat3d_from_columns(vec3d, vec3d, vec3d);
mat4f	mat4f_from_columns(vec4f, vec4f, vec4f, vec4f);
mat4d	mat4d_from_columns(vec4d, vec4d, vec4d, vec4d);

mat2f	mat2f_with(float);
mat2d	mat2d_with(double);
mat3f	mat3f_with(float);
mat3d	mat3d_with(double);
mat4f	mat4f_with(float);
mat4d	mat4d_with(double);

mat2f	mat2f_zero(void);
mat2d	mat2d_zero(void);
mat3f	mat3f_zero(void);
mat3d	mat3d_zero(void);
mat4f	mat4f_zero(void);
mat4d	mat4d_zero(void);

mat2f	mat2f_ident(void);
mat2d	mat2d_ident(void);
mat3f	mat3f_ident(void);
mat3d	mat3d_ident(void);
mat4f	mat4f_ident(void);
mat4d	mat4d_ident(void);

/* General matrix functions. */
mat2f	mat2f_transpose(mat2f);
mat2d 	mat2d_transpose(mat2d);
mat3f 	mat3f_transpose(mat3f);
mat3d 	mat3d_transpose(mat3d);
mat4f 	mat4f_transpose(mat4f);
mat4d 	mat4d_transpose(mat4d);

float	mat2f_trace(mat2f);
double	mat2d_trace(mat2d);
float	mat3f_trace(mat3f);
double	mat3d_trace(mat3d);
float	mat4f_trace(mat4f);
double	mat4d_trace(mat4d);

float	mat2f_det(mat2f);
double	mat2d_det(mat2d);
float	mat3f_det(mat3f);
double	mat3d_det(mat3d);
float	mat4f_det(mat4f);
double	mat4d_det(mat4d);

/* Matrix and vector product functions. */
mat2f	mat2f_mul(mat2f, mat2f);
mat2d	mat2d_mul(mat2d, mat2d);
mat3f	mat3f_mul(mat3f, mat3f);
mat3d	mat3d_mul(mat3d, mat3d);
mat4f	mat4f_mul(mat4f, mat4f);
mat4d	mat4d_mul(mat4d, mat4d);

vec2f	mat2f_mul_vec(mat2f, vec2f);
vec2d	mat2d_mul_vec(mat2d, vec2d);
vec3f	mat3f_mul_vec(mat3f, vec3f);
vec3d	mat3d_mul_vec(mat3d, vec3d);
vec4f	mat4f_mul_vec(mat4f, vec4f);
vec4d	mat4d_mul_vec(mat4d, vec4d);

mat2f	mat2f_tensor(vec2f, vec2f);
mat2d	mat2d_tensor(vec2d, vec2d);
mat3f	mat3f_tensor(vec3f, vec3f);
mat3d	mat3d_tensor(vec3d, vec3d);
mat4f	mat4f_tensor(vec4f, vec4f);
mat4d	mat4d_tensor(vec4d, vec4d);

/* 2x2 and 3x3 rotation matrix constructors. */
mat2f	mat2f_rotation(float);
mat2d	mat2d_rotation(double);
mat3f	mat3f_x_rotation(float);
mat3d	mat3d_x_rotation(double);
mat3f	mat3f_y_rotation(float);
mat3d	mat3d_y_rotation(double);
mat3f	mat3f_z_rotation(float);
mat3d	mat3d_z_rotation(double);
mat3f	mat3f_v_rotation(vec3f, float);
mat3d	mat3d_v_rotation(vec3d, double);

/* Matrix type conversion functions. */
mat2f	mat2d_to_f(mat2d);
mat2d	mat2f_to_d(mat2f);
mat3f	mat3d_to_f(mat3d);
mat3d	mat3f_to_d(mat3f);
mat4f	mat4d_to_f(mat4d);
mat4d	mat4f_to_d(mat4f);

#endif
