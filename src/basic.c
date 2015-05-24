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
