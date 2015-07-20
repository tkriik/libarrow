#include "basic.h"
#include "types.h"

#ifndef _ARROW_VECTORIZED

vec2f
vec2f_add(vec2f a, vec2f b)
{
	vec_x(a) += vec_x(b), vec_y(a) += vec_y(b);
	return a;
}

vec2d
vec2d_add(vec2d a, vec2d b)
{
	vec_x(a) += vec_x(b), vec_y(a) += vec_y(b);
	return a;
}

vec3f
vec3f_add(vec3f a, vec3f b)
{
	vec_x(a) += vec_x(b), vec_y(a) += vec_y(b), vec_z(a) += vec_z(b);
	return a;
}

vec3d
vec3d_add(vec3d a, vec3d b)
{
	vec_x(a) += vec_x(b), vec_y(a) += vec_y(b), vec_z(a) += vec_z(b);
	return a;
}

vec4f
vec4f_add(vec4f a, vec4f b)
{
	vec_x(a) += vec_x(b), vec_y(a) += vec_y(b);
	vec_z(a) += vec_z(b), vec_w(a) += vec_w(b);
	return a;
}

vec4d
vec4d_add(vec4d a, vec4d b)
{
	vec_x(a) += vec_x(b), vec_y(a) += vec_y(b);
	vec_z(a) += vec_z(b), vec_w(a) += vec_w(b);
	return a;
}

mat2f
mat2f_add(mat2f a, mat2f b)
{
	mat2_11(a) += mat2_11(b);
	mat2_12(a) += mat2_12(b);
	mat2_21(a) += mat2_21(b);
	mat2_22(a) += mat2_22(b);
	return a;
}

mat2d
mat2d_add(mat2d a, mat2d b)
{
	mat2_11(a) += mat2_11(b);
	mat2_12(a) += mat2_12(b);
	mat2_21(a) += mat2_21(b);
	mat2_22(a) += mat2_22(b);
	return a;
}

mat3f
mat3f_add(mat3f a, mat3f b)
{
	mat3_11(a) += mat3_11(b);
	mat3_12(a) += mat3_12(b);
	mat3_13(a) += mat3_13(b);
	mat3_21(a) += mat3_21(b);
	mat3_22(a) += mat3_22(b);
	mat3_23(a) += mat3_23(b);
	mat3_31(a) += mat3_31(b);
	mat3_32(a) += mat3_32(b);
	mat3_33(a) += mat3_33(b);
	return a;
}

mat3d
mat3d_add(mat3d a, mat3d b)
{
	mat3_11(a) += mat3_11(b);
	mat3_12(a) += mat3_12(b);
	mat3_13(a) += mat3_13(b);
	mat3_21(a) += mat3_21(b);
	mat3_22(a) += mat3_22(b);
	mat3_23(a) += mat3_23(b);
	mat3_31(a) += mat3_31(b);
	mat3_32(a) += mat3_32(b);
	mat3_33(a) += mat3_33(b);
	return a;
}

mat4f
mat4f_add(mat4f a, mat4f b)
{
	mat4_11(a) += mat4_11(b);
	mat4_12(a) += mat4_12(b);
	mat4_13(a) += mat4_13(b);
	mat4_14(a) += mat4_14(b);
	mat4_21(a) += mat4_21(b);
	mat4_22(a) += mat4_22(b);
	mat4_23(a) += mat4_23(b);
	mat4_24(a) += mat4_24(b);
	mat4_31(a) += mat4_31(b);
	mat4_32(a) += mat4_32(b);
	mat4_33(a) += mat4_33(b);
	mat4_34(a) += mat4_34(b);
	mat4_41(a) += mat4_41(b);
	mat4_42(a) += mat4_42(b);
	mat4_43(a) += mat4_43(b);
	mat4_44(a) += mat4_44(b);
	return a;
}

mat4d
mat4d_add(mat4d a, mat4d b)
{
	mat4_11(a) += mat4_11(b);
	mat4_12(a) += mat4_12(b);
	mat4_13(a) += mat4_13(b);
	mat4_14(a) += mat4_14(b);
	mat4_21(a) += mat4_21(b);
	mat4_22(a) += mat4_22(b);
	mat4_23(a) += mat4_23(b);
	mat4_24(a) += mat4_24(b);
	mat4_31(a) += mat4_31(b);
	mat4_32(a) += mat4_32(b);
	mat4_33(a) += mat4_33(b);
	mat4_34(a) += mat4_34(b);
	mat4_41(a) += mat4_41(b);
	mat4_42(a) += mat4_42(b);
	mat4_43(a) += mat4_43(b);
	mat4_44(a) += mat4_44(b);
	return a;
}

quatf
quatf_add(quatf a, quatf b)
{
	quat_x(a) += quat_x(b), quat_y(a) += quat_y(b);
	quat_z(a) += quat_z(b), quat_w(a) += quat_w(b);
	return a;
}

quatd
quatd_add(quatd a, quatd b)
{
	quat_x(a) += quat_x(b), quat_y(a) += quat_y(b);
	quat_z(a) += quat_z(b), quat_w(a) += quat_w(b);
	return a;
}

vec2f
vec2f_sub(vec2f a, vec2f b)
{
	vec_x(a) -= vec_x(b), vec_y(a) -= vec_y(b);
	return a;
}

vec2d
vec2d_sub(vec2d a, vec2d b)
{
	vec_x(a) -= vec_x(b), vec_y(a) -= vec_y(b);
	return a;
}

vec3f
vec3f_sub(vec3f a, vec3f b)
{
	vec_x(a) -= vec_x(b), vec_y(a) -= vec_y(b), vec_z(a) -= vec_z(b);
	return a;
}

vec3d
vec3d_sub(vec3d a, vec3d b)
{
	vec_x(a) -= vec_x(b), vec_y(a) -= vec_y(b), vec_z(a) -= vec_z(b);
	return a;
}

vec4f
vec4f_sub(vec4f a, vec4f b)
{
	vec_x(a) -= vec_x(b), vec_y(a) -= vec_y(b);
	vec_z(a) -= vec_z(b), vec_w(a) -= vec_w(b);
	return a;
}

vec4d
vec4d_sub(vec4d a, vec4d b)
{
	vec_x(a) -= vec_x(b), vec_y(a) -= vec_y(b);
	vec_z(a) -= vec_z(b), vec_w(a) -= vec_w(b);
	return a;
}

mat2f
mat2f_sub(mat2f a, mat2f b)
{
	mat2_11(a) -= mat2_11(b);
	mat2_12(a) -= mat2_12(b);
	mat2_21(a) -= mat2_21(b);
	mat2_22(a) -= mat2_22(b);
	return a;
}

mat2d
mat2d_sub(mat2d a, mat2d b)
{
	mat2_11(a) -= mat2_11(b);
	mat2_12(a) -= mat2_12(b);
	mat2_21(a) -= mat2_21(b);
	mat2_22(a) -= mat2_22(b);
	return a;
}

mat3f
mat3f_sub(mat3f a, mat3f b)
{
	mat3_11(a) -= mat3_11(b);
	mat3_12(a) -= mat3_12(b);
	mat3_13(a) -= mat3_13(b);
	mat3_21(a) -= mat3_21(b);
	mat3_22(a) -= mat3_22(b);
	mat3_23(a) -= mat3_23(b);
	mat3_31(a) -= mat3_31(b);
	mat3_32(a) -= mat3_32(b);
	mat3_33(a) -= mat3_33(b);
	return a;
}

mat3d
mat3d_sub(mat3d a, mat3d b)
{
	mat3_11(a) -= mat3_11(b);
	mat3_12(a) -= mat3_12(b);
	mat3_13(a) -= mat3_13(b);
	mat3_21(a) -= mat3_21(b);
	mat3_22(a) -= mat3_22(b);
	mat3_23(a) -= mat3_23(b);
	mat3_31(a) -= mat3_31(b);
	mat3_32(a) -= mat3_32(b);
	mat3_33(a) -= mat3_33(b);
	return a;
}

mat4f
mat4f_sub(mat4f a, mat4f b)
{
	mat4_11(a) -= mat4_11(b);
	mat4_12(a) -= mat4_12(b);
	mat4_13(a) -= mat4_13(b);
	mat4_14(a) -= mat4_14(b);
	mat4_21(a) -= mat4_21(b);
	mat4_22(a) -= mat4_22(b);
	mat4_23(a) -= mat4_23(b);
	mat4_24(a) -= mat4_24(b);
	mat4_31(a) -= mat4_31(b);
	mat4_32(a) -= mat4_32(b);
	mat4_33(a) -= mat4_33(b);
	mat4_34(a) -= mat4_34(b);
	mat4_41(a) -= mat4_41(b);
	mat4_42(a) -= mat4_42(b);
	mat4_43(a) -= mat4_43(b);
	mat4_44(a) -= mat4_44(b);
	return a;
}

mat4d
mat4d_sub(mat4d a, mat4d b)
{
	mat4_11(a) -= mat4_11(b);
	mat4_12(a) -= mat4_12(b);
	mat4_13(a) -= mat4_13(b);
	mat4_14(a) -= mat4_14(b);
	mat4_21(a) -= mat4_21(b);
	mat4_22(a) -= mat4_22(b);
	mat4_23(a) -= mat4_23(b);
	mat4_24(a) -= mat4_24(b);
	mat4_31(a) -= mat4_31(b);
	mat4_32(a) -= mat4_32(b);
	mat4_33(a) -= mat4_33(b);
	mat4_34(a) -= mat4_34(b);
	mat4_41(a) -= mat4_41(b);
	mat4_42(a) -= mat4_42(b);
	mat4_43(a) -= mat4_43(b);
	mat4_44(a) -= mat4_44(b);
	return a;
}

quatf
quatf_sub(quatf a, quatf b)
{
	quat_x(a) -= quat_x(b), quat_y(a) -= quat_y(b);
	quat_z(a) -= quat_z(b), quat_w(a) -= quat_w(b);
	return a;
}

quatd
quatd_sub(quatd a, quatd b)
{
	quat_x(a) -= quat_x(b), quat_y(a) -= quat_y(b);
	quat_z(a) -= quat_z(b), quat_w(a) -= quat_w(b);
	return a;
}

vec2f
vec2f_mul(vec2f a, vec2f b)
{
	vec_x(a) *= vec_x(b), vec_y(a) *= vec_y(b);
	return a;
}

vec2d
vec2d_mul(vec2d a, vec2d b)
{
	vec_x(a) *= vec_x(b), vec_y(a) *= vec_y(b);
	return a;
}

vec3f
vec3f_mul(vec3f a, vec3f b)
{
	vec_x(a) *= vec_x(b), vec_y(a) *= vec_y(b), vec_z(a) *= vec_z(b);
	return a;
}

vec3d
vec3d_mul(vec3d a, vec3d b)
{
	vec_x(a) *= vec_x(b), vec_y(a) *= vec_y(b), vec_z(a) *= vec_z(b);
	return a;
}

vec4f
vec4f_mul(vec4f a, vec4f b)
{
	vec_x(a) *= vec_x(b), vec_y(a) *= vec_y(b);
	vec_z(a) *= vec_z(b), vec_w(a) *= vec_w(b);
	return a;
}

vec4d
vec4d_mul(vec4d a, vec4d b)
{
	vec_x(a) *= vec_x(b), vec_y(a) *= vec_y(b);
	vec_z(a) *= vec_z(b), vec_w(a) *= vec_w(b);
	return a;
}

mat2f
mat2f_mul(mat2f a, mat2f b)
{
	mat2_11(a) *= mat2_11(b);
	mat2_12(a) *= mat2_12(b);
	mat2_21(a) *= mat2_21(b);
	mat2_22(a) *= mat2_22(b);
	return a;
}

mat2d
mat2d_mul(mat2d a, mat2d b)
{
	mat2_11(a) *= mat2_11(b);
	mat2_12(a) *= mat2_12(b);
	mat2_21(a) *= mat2_21(b);
	mat2_22(a) *= mat2_22(b);
	return a;
}

mat3f
mat3f_mul(mat3f a, mat3f b)
{
	mat3_11(a) *= mat3_11(b);
	mat3_12(a) *= mat3_12(b);
	mat3_13(a) *= mat3_13(b);
	mat3_21(a) *= mat3_21(b);
	mat3_22(a) *= mat3_22(b);
	mat3_23(a) *= mat3_23(b);
	mat3_31(a) *= mat3_31(b);
	mat3_32(a) *= mat3_32(b);
	mat3_33(a) *= mat3_33(b);
	return a;
}

mat3d
mat3d_mul(mat3d a, mat3d b)
{
	mat3_11(a) *= mat3_11(b);
	mat3_12(a) *= mat3_12(b);
	mat3_13(a) *= mat3_13(b);
	mat3_21(a) *= mat3_21(b);
	mat3_22(a) *= mat3_22(b);
	mat3_23(a) *= mat3_23(b);
	mat3_31(a) *= mat3_31(b);
	mat3_32(a) *= mat3_32(b);
	mat3_33(a) *= mat3_33(b);
	return a;
}

mat4f
mat4f_mul(mat4f a, mat4f b)
{
	mat4_11(a) *= mat4_11(b);
	mat4_12(a) *= mat4_12(b);
	mat4_13(a) *= mat4_13(b);
	mat4_14(a) *= mat4_14(b);
	mat4_21(a) *= mat4_21(b);
	mat4_22(a) *= mat4_22(b);
	mat4_23(a) *= mat4_23(b);
	mat4_24(a) *= mat4_24(b);
	mat4_31(a) *= mat4_31(b);
	mat4_32(a) *= mat4_32(b);
	mat4_33(a) *= mat4_33(b);
	mat4_34(a) *= mat4_34(b);
	mat4_41(a) *= mat4_41(b);
	mat4_42(a) *= mat4_42(b);
	mat4_43(a) *= mat4_43(b);
	mat4_44(a) *= mat4_44(b);
	return a;
}

mat4d
mat4d_mul(mat4d a, mat4d b)
{
	mat4_11(a) *= mat4_11(b);
	mat4_12(a) *= mat4_12(b);
	mat4_13(a) *= mat4_13(b);
	mat4_14(a) *= mat4_14(b);
	mat4_21(a) *= mat4_21(b);
	mat4_22(a) *= mat4_22(b);
	mat4_23(a) *= mat4_23(b);
	mat4_24(a) *= mat4_24(b);
	mat4_31(a) *= mat4_31(b);
	mat4_32(a) *= mat4_32(b);
	mat4_33(a) *= mat4_33(b);
	mat4_34(a) *= mat4_34(b);
	mat4_41(a) *= mat4_41(b);
	mat4_42(a) *= mat4_42(b);
	mat4_43(a) *= mat4_43(b);
	mat4_44(a) *= mat4_44(b);
	return a;
}

quatf
quatf_mul(quatf a, quatf b)
{
	quat_x(a) *= quat_x(b), quat_y(a) *= quat_y(b);
	quat_z(a) *= quat_z(b), quat_w(a) *= quat_w(b);
	return a;
}

quatd
quatd_mul(quatd a, quatd b)
{
	quat_x(a) *= quat_x(b), quat_y(a) *= quat_y(b);
	quat_z(a) *= quat_z(b), quat_w(a) *= quat_w(b);
	return a;
}

vec2f
vec2f_div(vec2f a, vec2f b)
{
	vec_x(a) /= vec_x(b), vec_y(a) /= vec_y(b);
	return a;
}

vec2d
vec2d_div(vec2d a, vec2d b)
{
	vec_x(a) /= vec_x(b), vec_y(a) /= vec_y(b);
	return a;
}

vec3f
vec3f_div(vec3f a, vec3f b)
{
	vec_x(a) /= vec_x(b), vec_y(a) /= vec_y(b), vec_z(a) /= vec_z(b);
	return a;
}

vec3d
vec3d_div(vec3d a, vec3d b)
{
	vec_x(a) /= vec_x(b), vec_y(a) /= vec_y(b), vec_z(a) /= vec_z(b);
	return a;
}

vec4f
vec4f_div(vec4f a, vec4f b)
{
	vec_x(a) /= vec_x(b), vec_y(a) /= vec_y(b);
	vec_z(a) /= vec_z(b), vec_w(a) /= vec_w(b);
	return a;
}

vec4d
vec4d_div(vec4d a, vec4d b)
{
	vec_x(a) /= vec_x(b), vec_y(a) /= vec_y(b);
	vec_z(a) /= vec_z(b), vec_w(a) /= vec_w(b);
	return a;
}

mat2f
mat2f_div(mat2f a, mat2f b)
{
	mat2_11(a) /= mat2_11(b);
	mat2_12(a) /= mat2_12(b);
	mat2_21(a) /= mat2_21(b);
	mat2_22(a) /= mat2_22(b);
	return a;
}

mat2d
mat2d_div(mat2d a, mat2d b)
{
	mat2_11(a) /= mat2_11(b);
	mat2_12(a) /= mat2_12(b);
	mat2_21(a) /= mat2_21(b);
	mat2_22(a) /= mat2_22(b);
	return a;
}

mat3f
mat3f_div(mat3f a, mat3f b)
{
	mat3_11(a) /= mat3_11(b);
	mat3_12(a) /= mat3_12(b);
	mat3_13(a) /= mat3_13(b);
	mat3_21(a) /= mat3_21(b);
	mat3_22(a) /= mat3_22(b);
	mat3_23(a) /= mat3_23(b);
	mat3_31(a) /= mat3_31(b);
	mat3_32(a) /= mat3_32(b);
	mat3_33(a) /= mat3_33(b);
	return a;
}

mat3d
mat3d_div(mat3d a, mat3d b)
{
	mat3_11(a) /= mat3_11(b);
	mat3_12(a) /= mat3_12(b);
	mat3_13(a) /= mat3_13(b);
	mat3_21(a) /= mat3_21(b);
	mat3_22(a) /= mat3_22(b);
	mat3_23(a) /= mat3_23(b);
	mat3_31(a) /= mat3_31(b);
	mat3_32(a) /= mat3_32(b);
	mat3_33(a) /= mat3_33(b);
	return a;
}

mat4f
mat4f_div(mat4f a, mat4f b)
{
	mat4_11(a) /= mat4_11(b);
	mat4_12(a) /= mat4_12(b);
	mat4_13(a) /= mat4_13(b);
	mat4_14(a) /= mat4_14(b);
	mat4_21(a) /= mat4_21(b);
	mat4_22(a) /= mat4_22(b);
	mat4_23(a) /= mat4_23(b);
	mat4_24(a) /= mat4_24(b);
	mat4_31(a) /= mat4_31(b);
	mat4_32(a) /= mat4_32(b);
	mat4_33(a) /= mat4_33(b);
	mat4_34(a) /= mat4_34(b);
	mat4_41(a) /= mat4_41(b);
	mat4_42(a) /= mat4_42(b);
	mat4_43(a) /= mat4_43(b);
	mat4_44(a) /= mat4_44(b);
	return a;
}

mat4d
mat4d_div(mat4d a, mat4d b)
{
	mat4_11(a) /= mat4_11(b);
	mat4_12(a) /= mat4_12(b);
	mat4_13(a) /= mat4_13(b);
	mat4_14(a) /= mat4_14(b);
	mat4_21(a) /= mat4_21(b);
	mat4_22(a) /= mat4_22(b);
	mat4_23(a) /= mat4_23(b);
	mat4_24(a) /= mat4_24(b);
	mat4_31(a) /= mat4_31(b);
	mat4_32(a) /= mat4_32(b);
	mat4_33(a) /= mat4_33(b);
	mat4_34(a) /= mat4_34(b);
	mat4_41(a) /= mat4_41(b);
	mat4_42(a) /= mat4_42(b);
	mat4_43(a) /= mat4_43(b);
	mat4_44(a) /= mat4_44(b);
	return a;
}

quatf
quatf_div(quatf a, quatf b)
{
	quat_x(a) /= quat_x(b), quat_y(a) /= quat_y(b);
	quat_z(a) /= quat_z(b), quat_w(a) /= quat_w(b);
	return a;
}

quatd
quatd_div(quatd a, quatd b)
{
	quat_x(a) /= quat_x(b), quat_y(a) /= quat_y(b);
	quat_z(a) /= quat_z(b), quat_w(a) /= quat_w(b);
	return a;
}

vec2f
vec2f_add_scalar(vec2f a, float b)
{
	vec_x(a) += b, vec_y(a) += b;
	return a;
}

vec2d
vec2d_add_scalar(vec2d a, double b)
{
	vec_x(a) += b, vec_y(a) += b;
	return a;
}

vec3f
vec3f_add_scalar(vec3f a, float b)
{
	vec_x(a) += b, vec_y(a) += b, vec_z(a) += b;
	return a;
}

vec3d
vec3d_add_scalar(vec3d a, double b)
{
	vec_x(a) += b, vec_y(a) += b, vec_z(a) += b;
	return a;
}

vec4f
vec4f_add_scalar(vec4f a, float b)
{
	vec_x(a) += b, vec_y(a) += b, vec_z(a) += b, vec_w(a) += b;
	return a;
}

vec4d
vec4d_add_scalar(vec4d a, double b)
{
	vec_x(a) += b, vec_y(a) += b, vec_z(a) += b, vec_w(a) += b;
	return a;
}

mat2f
mat2f_add_scalar(mat2f a, float b)
{
	mat2_11(a) += b;
	mat2_12(a) += b;
	mat2_21(a) += b;
	mat2_22(a) += b;
	return a;
}

mat2d
mat2d_add_scalar(mat2d a, double b)
{
	mat2_11(a) += b;
	mat2_12(a) += b;
	mat2_21(a) += b;
	mat2_22(a) += b;
	return a;
}

mat3f
mat3f_add_scalar(mat3f a, float b)
{
	mat3_11(a) += b;
	mat3_12(a) += b;
	mat3_13(a) += b;
	mat3_21(a) += b;
	mat3_22(a) += b;
	mat3_23(a) += b;
	mat3_31(a) += b;
	mat3_32(a) += b;
	mat3_33(a) += b;
	return a;
}

mat3d
mat3d_add_scalar(mat3d a, double b)
{
	mat3_11(a) += b;
	mat3_12(a) += b;
	mat3_13(a) += b;
	mat3_21(a) += b;
	mat3_22(a) += b;
	mat3_23(a) += b;
	mat3_31(a) += b;
	mat3_32(a) += b;
	mat3_33(a) += b;
	return a;
}

mat4f
mat4f_add_scalar(mat4f a, float b)
{
	mat4_11(a) += b;
	mat4_12(a) += b;
	mat4_13(a) += b;
	mat4_14(a) += b;
	mat4_21(a) += b;
	mat4_22(a) += b;
	mat4_23(a) += b;
	mat4_24(a) += b;
	mat4_31(a) += b;
	mat4_32(a) += b;
	mat4_33(a) += b;
	mat4_34(a) += b;
	mat4_41(a) += b;
	mat4_42(a) += b;
	mat4_43(a) += b;
	mat4_44(a) += b;
	return a;
}

mat4d
mat4d_add_scalar(mat4d a, double b)
{
	mat4_11(a) += b;
	mat4_12(a) += b;
	mat4_13(a) += b;
	mat4_14(a) += b;
	mat4_21(a) += b;
	mat4_22(a) += b;
	mat4_23(a) += b;
	mat4_24(a) += b;
	mat4_31(a) += b;
	mat4_32(a) += b;
	mat4_33(a) += b;
	mat4_34(a) += b;
	mat4_41(a) += b;
	mat4_42(a) += b;
	mat4_43(a) += b;
	mat4_44(a) += b;
	return a;
}

quatf
quatf_add_scalar(quatf a, float b)
{
	quat_x(a) += b, quat_y(a) += b, quat_z(a) += b, quat_w(a) += b;
	return a;
}

quatd
quatd_add_scalar(quatd a, double b)
{
	quat_x(a) += b, quat_y(a) += b, quat_z(a) += b, quat_w(a) += b;
	return a;
}

vec2f
vec2f_sub_scalar(vec2f a, float b)
{
	vec_x(a) -= b, vec_y(a) -= b;
	return a;
}

vec2d
vec2d_sub_scalar(vec2d a, double b)
{
	vec_x(a) -= b, vec_y(a) -= b;
	return a;
}

vec3f
vec3f_sub_scalar(vec3f a, float b)
{
	vec_x(a) -= b, vec_y(a) -= b, vec_z(a) -= b;
	return a;
}

vec3d
vec3d_sub_scalar(vec3d a, double b)
{
	vec_x(a) -= b, vec_y(a) -= b, vec_z(a) -= b;
	return a;
}

vec4f
vec4f_sub_scalar(vec4f a, float b)
{
	vec_x(a) -= b, vec_y(a) -= b, vec_z(a) -= b, vec_w(a) -= b;
	return a;
}

vec4d
vec4d_sub_scalar(vec4d a, double b)
{
	vec_x(a) -= b, vec_y(a) -= b, vec_z(a) -= b, vec_w(a) -= b;
	return a;
}

mat2f
mat2f_sub_scalar(mat2f a, float b)
{
	mat2_11(a) -= b;
	mat2_12(a) -= b;
	mat2_21(a) -= b;
	mat2_22(a) -= b;
	return a;
}

mat2d
mat2d_sub_scalar(mat2d a, double b)
{
	mat2_11(a) -= b;
	mat2_12(a) -= b;
	mat2_21(a) -= b;
	mat2_22(a) -= b;
	return a;
}

mat3f
mat3f_sub_scalar(mat3f a, float b)
{
	mat3_11(a) -= b;
	mat3_12(a) -= b;
	mat3_13(a) -= b;
	mat3_21(a) -= b;
	mat3_22(a) -= b;
	mat3_23(a) -= b;
	mat3_31(a) -= b;
	mat3_32(a) -= b;
	mat3_33(a) -= b;
	return a;
}

mat3d
mat3d_sub_scalar(mat3d a, double b)
{
	mat3_11(a) -= b;
	mat3_12(a) -= b;
	mat3_13(a) -= b;
	mat3_21(a) -= b;
	mat3_22(a) -= b;
	mat3_23(a) -= b;
	mat3_31(a) -= b;
	mat3_32(a) -= b;
	mat3_33(a) -= b;
	return a;
}

mat4f
mat4f_sub_scalar(mat4f a, float b)
{
	mat4_11(a) -= b;
	mat4_12(a) -= b;
	mat4_13(a) -= b;
	mat4_14(a) -= b;
	mat4_21(a) -= b;
	mat4_22(a) -= b;
	mat4_23(a) -= b;
	mat4_24(a) -= b;
	mat4_31(a) -= b;
	mat4_32(a) -= b;
	mat4_33(a) -= b;
	mat4_34(a) -= b;
	mat4_41(a) -= b;
	mat4_42(a) -= b;
	mat4_43(a) -= b;
	mat4_44(a) -= b;
	return a;
}

mat4d
mat4d_sub_scalar(mat4d a, double b)
{
	mat4_11(a) -= b;
	mat4_12(a) -= b;
	mat4_13(a) -= b;
	mat4_14(a) -= b;
	mat4_21(a) -= b;
	mat4_22(a) -= b;
	mat4_23(a) -= b;
	mat4_24(a) -= b;
	mat4_31(a) -= b;
	mat4_32(a) -= b;
	mat4_33(a) -= b;
	mat4_34(a) -= b;
	mat4_41(a) -= b;
	mat4_42(a) -= b;
	mat4_43(a) -= b;
	mat4_44(a) -= b;
	return a;
}

quatf
quatf_sub_scalar(quatf a, float b)
{
	quat_x(a) -= b, quat_y(a) -= b, quat_z(a) -= b, quat_w(a) -= b;
	return a;
}

quatd
quatd_sub_scalar(quatd a, double b)
{
	quat_x(a) -= b, quat_y(a) -= b, quat_z(a) -= b, quat_w(a) -= b;
	return a;
}

vec2f
vec2f_mul_scalar(vec2f a, float b)
{
	vec_x(a) *= b, vec_y(a) *= b;
	return a;
}

vec2d
vec2d_mul_scalar(vec2d a, double b)
{
	vec_x(a) *= b, vec_y(a) *= b;
	return a;
}

vec3f
vec3f_mul_scalar(vec3f a, float b)
{
	vec_x(a) *= b, vec_y(a) *= b, vec_z(a) *= b;
	return a;
}

vec3d
vec3d_mul_scalar(vec3d a, double b)
{
	vec_x(a) *= b, vec_y(a) *= b, vec_z(a) *= b;
	return a;
}

vec4f
vec4f_mul_scalar(vec4f a, float b)
{
	vec_x(a) *= b, vec_y(a) *= b, vec_z(a) *= b, vec_w(a) *= b;
	return a;
}

vec4d
vec4d_mul_scalar(vec4d a, double b)
{
	vec_x(a) *= b, vec_y(a) *= b, vec_z(a) *= b, vec_w(a) *= b;
	return a;
}

mat2f
mat2f_mul_scalar(mat2f a, float b)
{
	mat2_11(a) *= b;
	mat2_12(a) *= b;
	mat2_21(a) *= b;
	mat2_22(a) *= b;
	return a;
}

mat2d
mat2d_mul_scalar(mat2d a, double b)
{
	mat2_11(a) *= b;
	mat2_12(a) *= b;
	mat2_21(a) *= b;
	mat2_22(a) *= b;
	return a;
}

mat3f
mat3f_mul_scalar(mat3f a, float b)
{
	mat3_11(a) *= b;
	mat3_12(a) *= b;
	mat3_13(a) *= b;
	mat3_21(a) *= b;
	mat3_22(a) *= b;
	mat3_23(a) *= b;
	mat3_31(a) *= b;
	mat3_32(a) *= b;
	mat3_33(a) *= b;
	return a;
}

mat3d
mat3d_mul_scalar(mat3d a, double b)
{
	mat3_11(a) *= b;
	mat3_12(a) *= b;
	mat3_13(a) *= b;
	mat3_21(a) *= b;
	mat3_22(a) *= b;
	mat3_23(a) *= b;
	mat3_31(a) *= b;
	mat3_32(a) *= b;
	mat3_33(a) *= b;
	return a;
}

mat4f
mat4f_mul_scalar(mat4f a, float b)
{
	mat4_11(a) *= b;
	mat4_12(a) *= b;
	mat4_13(a) *= b;
	mat4_14(a) *= b;
	mat4_21(a) *= b;
	mat4_22(a) *= b;
	mat4_23(a) *= b;
	mat4_24(a) *= b;
	mat4_31(a) *= b;
	mat4_32(a) *= b;
	mat4_33(a) *= b;
	mat4_34(a) *= b;
	mat4_41(a) *= b;
	mat4_42(a) *= b;
	mat4_43(a) *= b;
	mat4_44(a) *= b;
	return a;
}

mat4d
mat4d_mul_scalar(mat4d a, double b)
{
	mat4_11(a) *= b;
	mat4_12(a) *= b;
	mat4_13(a) *= b;
	mat4_14(a) *= b;
	mat4_21(a) *= b;
	mat4_22(a) *= b;
	mat4_23(a) *= b;
	mat4_24(a) *= b;
	mat4_31(a) *= b;
	mat4_32(a) *= b;
	mat4_33(a) *= b;
	mat4_34(a) *= b;
	mat4_41(a) *= b;
	mat4_42(a) *= b;
	mat4_43(a) *= b;
	mat4_44(a) *= b;
	return a;
}

quatf
quatf_mul_scalar(quatf a, float b)
{
	quat_x(a) *= b, quat_y(a) *= b, quat_z(a) *= b, quat_w(a) *= b;
	return a;
}

quatd
quatd_mul_scalar(quatd a, double b)
{
	quat_x(a) *= b, quat_y(a) *= b, quat_z(a) *= b, quat_w(a) *= b;
	return a;
}

vec2f
vec2f_div_scalar(vec2f a, float b)
{
	vec_x(a) /= b, vec_y(a) /= b;
	return a;
}

vec2d
vec2d_div_scalar(vec2d a, double b)
{
	vec_x(a) /= b, vec_y(a) /= b;
	return a;
}

vec3f
vec3f_div_scalar(vec3f a, float b)
{
	vec_x(a) /= b, vec_y(a) /= b, vec_z(a) /= b;
	return a;
}

vec3d
vec3d_div_scalar(vec3d a, double b)
{
	vec_x(a) /= b, vec_y(a) /= b, vec_z(a) /= b;
	return a;
}

vec4f
vec4f_div_scalar(vec4f a, float b)
{
	vec_x(a) /= b, vec_y(a) /= b, vec_z(a) /= b, vec_w(a) /= b;
	return a;
}

mat2f
mat2f_div_scalar(mat2f a, float b)
{
	mat2_11(a) /= b;
	mat2_12(a) /= b;
	mat2_21(a) /= b;
	mat2_22(a) /= b;
	return a;
}

mat2d
mat2d_div_scalar(mat2d a, double b)
{
	mat2_11(a) /= b;
	mat2_12(a) /= b;
	mat2_21(a) /= b;
	mat2_22(a) /= b;
	return a;
}

mat3f
mat3f_div_scalar(mat3f a, float b)
{
	mat3_11(a) /= b;
	mat3_12(a) /= b;
	mat3_13(a) /= b;
	mat3_21(a) /= b;
	mat3_22(a) /= b;
	mat3_23(a) /= b;
	mat3_31(a) /= b;
	mat3_32(a) /= b;
	mat3_33(a) /= b;
	return a;
}

mat3d
mat3d_div_scalar(mat3d a, double b)
{
	mat3_11(a) /= b;
	mat3_12(a) /= b;
	mat3_13(a) /= b;
	mat3_21(a) /= b;
	mat3_22(a) /= b;
	mat3_23(a) /= b;
	mat3_31(a) /= b;
	mat3_32(a) /= b;
	mat3_33(a) /= b;
	return a;
}

mat4f
mat4f_div_scalar(mat4f a, float b)
{
	mat4_11(a) /= b;
	mat4_12(a) /= b;
	mat4_13(a) /= b;
	mat4_14(a) /= b;
	mat4_21(a) /= b;
	mat4_22(a) /= b;
	mat4_23(a) /= b;
	mat4_24(a) /= b;
	mat4_31(a) /= b;
	mat4_32(a) /= b;
	mat4_33(a) /= b;
	mat4_34(a) /= b;
	mat4_41(a) /= b;
	mat4_42(a) /= b;
	mat4_43(a) /= b;
	mat4_44(a) /= b;
	return a;
}

mat4d
mat4d_div_scalar(mat4d a, double b)
{
	mat4_11(a) /= b;
	mat4_12(a) /= b;
	mat4_13(a) /= b;
	mat4_14(a) /= b;
	mat4_21(a) /= b;
	mat4_22(a) /= b;
	mat4_23(a) /= b;
	mat4_24(a) /= b;
	mat4_31(a) /= b;
	mat4_32(a) /= b;
	mat4_33(a) /= b;
	mat4_34(a) /= b;
	mat4_41(a) /= b;
	mat4_42(a) /= b;
	mat4_43(a) /= b;
	mat4_44(a) /= b;
	return a;
}

vec4d
vec4d_div_scalar(vec4d a, double b)
{
	vec_x(a) /= b, vec_y(a) /= b, vec_z(a) /= b, vec_w(a) /= b;
	return a;
}

quatf
quatf_div_scalar(quatf a, float b)
{
	quat_x(a) /= b, quat_y(a) /= b, quat_z(a) /= b, quat_w(a) /= b;
	return a;
}

quatd
quatd_div_scalar(quatd a, double b)
{
	quat_x(a) /= b, quat_y(a) /= b, quat_z(a) /= b, quat_w(a) /= b;
	return a;
}

#else /* _ARROW_VECTORIZED */

vec2f
vec2f_add(vec2f a, vec2f b)
{
	return a + b;
}

vec2d
vec2d_add(vec2d a, vec2d b)
{
	return a + b;
}

vec3f
vec3f_add(vec3f a, vec3f b)
{
	return a + b;
}

vec3d
vec3d_add(vec3d a, vec3d b)
{
	return a + b;
}

vec4f
vec4f_add(vec4f a, vec4f b)
{
	return a + b;
}

vec4d
vec4d_add(vec4d a, vec4d b)
{
	return a + b;
}

mat2f
mat2f_add(mat2f a, mat2f b)
{
	return a + b;
}

mat2d
mat2d_add(mat2d a, mat2d b)
{
	return a + b;
}

mat3f
mat3f_add(mat3f a, mat3f b)
{
	return a + b;
}

mat3d
mat3d_add(mat3d a, mat3d b)
{
	return a + b;
}

mat4f
mat4f_add(mat4f a, mat4f b)
{
	return a + b;
}

mat4d
mat4d_add(mat4d a, mat4d b)
{
	return a + b;
}

quatf
quatf_add(quatf a, quatf b)
{
	return a + b;
}

quatd
quatd_add(quatd a, quatd b)
{
	return a + b;
}

vec2f
vec2f_sub(vec2f a, vec2f b)
{
	return a - b;
}

vec2d
vec2d_sub(vec2d a, vec2d b)
{
	return a - b;
}

vec3f
vec3f_sub(vec3f a, vec3f b)
{
	return a - b;
}

vec3d
vec3d_sub(vec3d a, vec3d b)
{
	return a - b;
}

vec4f
vec4f_sub(vec4f a, vec4f b)
{
	return a - b;
}

vec4d
vec4d_sub(vec4d a, vec4d b)
{
	return a - b;
}

mat2f
mat2f_sub(mat2f a, mat2f b)
{
	return a - b;
}

mat2d
mat2d_sub(mat2d a, mat2d b)
{
	return a - b;
}

mat3f
mat3f_sub(mat3f a, mat3f b)
{
	return a - b;
}

mat3d
mat3d_sub(mat3d a, mat3d b)
{
	return a - b;
}

mat4f
mat4f_sub(mat4f a, mat4f b)
{
	return a - b;
}

mat4d
mat4d_sub(mat4d a, mat4d b)
{
	return a - b;
}

quatf
quatf_sub(quatf a, quatf b)
{
	return a - b;
}

quatd
quatd_sub(quatd a, quatd b)
{
	return a - b;
}

vec2f
vec2f_mul(vec2f a, vec2f b)
{
	return a * b;
}

vec2d
vec2d_mul(vec2d a, vec2d b)
{
	return a * b;
}

vec3f
vec3f_mul(vec3f a, vec3f b)
{
	return a * b;
}

vec3d
vec3d_mul(vec3d a, vec3d b)
{
	return a * b;
}

vec4f
vec4f_mul(vec4f a, vec4f b)
{
	return a * b;
}

vec4d
vec4d_mul(vec4d a, vec4d b)
{
	return a * b;
}

mat2f
mat2f_mul(mat2f a, mat2f b)
{
	return a * b;
}

mat2d
mat2d_mul(mat2d a, mat2d b)
{
	return a * b;
}

mat3f
mat3f_mul(mat3f a, mat3f b)
{
	return a * b;
}

mat3d
mat3d_mul(mat3d a, mat3d b)
{
	return a * b;
}

mat4f
mat4f_mul(mat4f a, mat4f b)
{
	return a * b;
}

mat4d
mat4d_mul(mat4d a, mat4d b)
{
	return a * b;
}

quatf
quatf_mul(quatf a, quatf b)
{
	return a * b;
}

quatd
quatd_mul(quatd a, quatd b)
{
	return a * b;
}

vec2f
vec2f_div(vec2f a, vec2f b)
{
	return a / b;
}

vec2d
vec2d_div(vec2d a, vec2d b)
{
	return a / b;
}

vec3f
vec3f_div(vec3f a, vec3f b)
{
	return a / b;
}

vec3d
vec3d_div(vec3d a, vec3d b)
{
	return a / b;
}

vec4f
vec4f_div(vec4f a, vec4f b)
{
	return a / b;
}

vec4d
vec4d_div(vec4d a, vec4d b)
{
	return a / b;
}

mat2f
mat2f_div(mat2f a, mat2f b)
{
	return a / b;
}

mat2d
mat2d_div(mat2d a, mat2d b)
{
	return a / b;
}

mat3f
mat3f_div(mat3f a, mat3f b)
{
	return a / b;
}

mat3d
mat3d_div(mat3d a, mat3d b)
{
	return a / b;
}

mat4f
mat4f_div(mat4f a, mat4f b)
{
	return a / b;
}

mat4d
mat4d_div(mat4d a, mat4d b)
{
	return a / b;
}

quatf
quatf_div(quatf a, quatf b)
{
	return a / b;
}

quatd
quatd_div(quatd a, quatd b)
{
	return a / b;
}

vec2f
vec2f_add_scalar(vec2f a, float b)
{
	return a + b;
}

vec2d
vec2d_add_scalar(vec2d a, double b)
{
	return a + b;
}

vec3f
vec3f_add_scalar(vec3f a, float b)
{
	return a + b;
}

vec3d
vec3d_add_scalar(vec3d a, double b)
{
	return a + b;
}

vec4f
vec4f_add_scalar(vec4f a, float b)
{
	return a + b;
}

vec4d
vec4d_add_scalar(vec4d a, double b)
{
	return a + b;
}

mat2f
mat2f_add_scalar(mat2f a, float b)
{
	return a + b;
}

mat2d
mat2d_add_scalar(mat2d a, double b)
{
	return a + b;
}

mat3f
mat3f_add_scalar(mat3f a, float b)
{
	return a + b;
}

mat3d
mat3d_add_scalar(mat3d a, double b)
{
	return a + b;
}

mat4f
mat4f_add_scalar(mat4f a, float b)
{
	return a + b;
}

mat4d
mat4d_add_scalar(mat4d a, double b)
{
	return a + b;
}

quatf
quatf_add_scalar(quatf a, float b)
{
	return a + b;
}

quatd
quatd_add_scalar(quatd a, double b)
{
	return a + b;
}

vec2f
vec2f_sub_scalar(vec2f a, float b)
{
	return a - b;
}

vec2d
vec2d_sub_scalar(vec2d a, double b)
{
	return a - b;
}

vec3f
vec3f_sub_scalar(vec3f a, float b)
{
	return a - b;
}

vec3d
vec3d_sub_scalar(vec3d a, double b)
{
	return a - b;
}

vec4f
vec4f_sub_scalar(vec4f a, float b)
{
	return a - b;
}

vec4d
vec4d_sub_scalar(vec4d a, double b)
{
	return a - b;
}

mat2f
mat2f_sub_scalar(mat2f a, float b)
{
	return a - b;
}

mat2d
mat2d_sub_scalar(mat2d a, double b)
{
	return a - b;
}

mat3f
mat3f_sub_scalar(mat3f a, float b)
{
	return a - b;
}

mat3d
mat3d_sub_scalar(mat3d a, double b)
{
	return a - b;
}

mat4f
mat4f_sub_scalar(mat4f a, float b)
{
	return a - b;
}

mat4d
mat4d_sub_scalar(mat4d a, double b)
{
	return a - b;
}

quatf
quatf_sub_scalar(quatf a, float b)
{
	return a - b;
}

quatd
quatd_sub_scalar(quatd a, double b)
{
	return a - b;
}

vec2f
vec2f_mul_scalar(vec2f a, float b)
{
	return a * b;
}

vec2d
vec2d_mul_scalar(vec2d a, double b)
{
	return a * b;
}

vec3f
vec3f_mul_scalar(vec3f a, float b)
{
	return a * b;
}

vec3d
vec3d_mul_scalar(vec3d a, double b)
{
	return a * b;
}

vec4f
vec4f_mul_scalar(vec4f a, float b)
{
	return a * b;
}

vec4d
vec4d_mul_scalar(vec4d a, double b)
{
	return a * b;
}

mat2f
mat2f_mul_scalar(mat2f a, float b)
{
	return a * b;
}

mat2d
mat2d_mul_scalar(mat2d a, double b)
{
	return a * b;
}

mat3f
mat3f_mul_scalar(mat3f a, float b)
{
	return a * b;
}

mat3d
mat3d_mul_scalar(mat3d a, double b)
{
	return a * b;
}

mat4f
mat4f_mul_scalar(mat4f a, float b)
{
	return a * b;
}

mat4d
mat4d_mul_scalar(mat4d a, double b)
{
	return a * b;
}

quatf
quatf_mul_scalar(quatf a, float b)
{
	return a * b;
}

quatd
quatd_mul_scalar(quatd a, double b)
{
	return a * b;
}

vec2f
vec2f_div_scalar(vec2f a, float b)
{
	return a / b;
}

vec2d
vec2d_div_scalar(vec2d a, double b)
{
	return a / b;
}

vec3f
vec3f_div_scalar(vec3f a, float b)
{
	return a / b;
}

vec3d
vec3d_div_scalar(vec3d a, double b)
{
	return a / b;
}

vec4f
vec4f_div_scalar(vec4f a, float b)
{
	return a / b;
}

vec4d
vec4d_div_scalar(vec4d a, double b)
{
	return a / b;
}

mat2f
mat2f_div_scalar(mat2f a, float b)
{
	return a / b;
}

mat2d
mat2d_div_scalar(mat2d a, double b)
{
	return a / b;
}

mat3f
mat3f_div_scalar(mat3f a, float b)
{
	return a / b;
}

mat3d
mat3d_div_scalar(mat3d a, double b)
{
	return a / b;
}

mat4f
mat4f_div_scalar(mat4f a, float b)
{
	return a / b;
}

mat4d
mat4d_div_scalar(mat4d a, double b)
{
	return a / b;
}

quatf
quatf_div_scalar(quatf a, float b)
{
	return a / b;
}

quatd
quatd_div_scalar(quatd a, double b)
{
	return a / b;
}

#endif /* _ARROW_VECTORIZED */
