#ifndef _ARROW_BASIC_H_
#define _ARROW_BASIC_H_

#ifndef _ARROW_VECTORIZED
#include "types_standard.h"
#else
#include "types_vectorized.h"
#endif /* _ARROW_VECTORIZED */

vec2f vec2f_add(vec2f, vec2f);
vec2d vec2d_add(vec2d, vec2d);
vec3f vec3f_add(vec3f, vec3f);
vec3d vec3d_add(vec3d, vec3d);
vec4f vec4f_add(vec4f, vec4f);
vec4d vec4d_add(vec4d, vec4d);
mat2f mat2f_add(mat2f, mat2f);
mat2d mat2d_add(mat2d, mat2d);
mat3f mat3f_add(mat3f, mat3f);
mat3d mat3d_add(mat3d, mat3d);
mat4f mat4f_add(mat4f, mat4f);
mat4d mat4d_add(mat4d, mat4d);
quatf quatf_add(quatf, quatf);
quatd quatd_add(quatd, quatd);

vec2f vec2f_sub(vec2f, vec2f);
vec2d vec2d_sub(vec2d, vec2d);
vec3f vec3f_sub(vec3f, vec3f);
vec3d vec3d_sub(vec3d, vec3d);
vec4f vec4f_sub(vec4f, vec4f);
vec4d vec4d_sub(vec4d, vec4d);
mat2f mat2f_sub(mat2f, mat2f);
mat2d mat2d_sub(mat2d, mat2d);
mat3f mat3f_sub(mat3f, mat3f);
mat3d mat3d_sub(mat3d, mat3d);
mat4f mat4f_sub(mat4f, mat4f);
mat4d mat4d_sub(mat4d, mat4d);
quatf quatf_sub(quatf, quatf);
quatd quatd_sub(quatd, quatd);

vec2f vec2f_mul(vec2f, vec2f);
vec2d vec2d_mul(vec2d, vec2d);
vec3f vec3f_mul(vec3f, vec3f);
vec3d vec3d_mul(vec3d, vec3d);
vec4f vec4f_mul(vec4f, vec4f);
vec4d vec4d_mul(vec4d, vec4d);
mat2f mat2f_mul(mat2f, mat2f);
mat2d mat2d_mul(mat2d, mat2d);
mat3f mat3f_mul(mat3f, mat3f);
mat3d mat3d_mul(mat3d, mat3d);
mat4f mat4f_mul(mat4f, mat4f);
mat4d mat4d_mul(mat4d, mat4d);
quatf quatf_mul(quatf, quatf);
quatd quatd_mul(quatd, quatd);

vec2f vec2f_div(vec2f, vec2f);
vec2d vec2d_div(vec2d, vec2d);
vec3f vec3f_div(vec3f, vec3f);
vec3d vec3d_div(vec3d, vec3d);
vec4f vec4f_div(vec4f, vec4f);
vec4d vec4d_div(vec4d, vec4d);
mat2f mat2f_div(mat2f, mat2f);
mat2d mat2d_div(mat2d, mat2d);
mat3f mat3f_div(mat3f, mat3f);
mat3d mat3d_div(mat3d, mat3d);
mat4f mat4f_div(mat4f, mat4f);
mat4d mat4d_div(mat4d, mat4d);
quatf quatf_div(quatf, quatf);
quatd quatd_div(quatd, quatd);

vec2f vec2f_add_scalar(vec2f, float);
vec2d vec2d_add_scalar(vec2d, double);
vec3f vec3f_add_scalar(vec3f, float);
vec3d vec3d_add_scalar(vec3d, double);
vec4f vec4f_add_scalar(vec4f, float);
vec4d vec4d_add_scalar(vec4d, double);
mat2f mat2f_add_scalar(mat2f, float);
mat2d mat2d_add_scalar(mat2d, double);
mat3f mat3f_add_scalar(mat3f, float);
mat3d mat3d_add_scalar(mat3d, double);
mat4f mat4f_add_scalar(mat4f, float);
mat4d mat4d_add_scalar(mat4d, double);
quatf quatf_add_scalar(quatf, float);
quatd quatd_add_scalar(quatd, double);

vec2f vec2f_sub_scalar(vec2f, float);
vec2d vec2d_sub_scalar(vec2d, double);
vec3f vec3f_sub_scalar(vec3f, float);
vec3d vec3d_sub_scalar(vec3d, double);
vec4f vec4f_sub_scalar(vec4f, float);
vec4d vec4d_sub_scalar(vec4d, double);
mat2f mat2f_sub_scalar(mat2f, float);
mat2d mat2d_sub_scalar(mat2d, double);
mat3f mat3f_sub_scalar(mat3f, float);
mat3d mat3d_sub_scalar(mat3d, double);
mat4f mat4f_sub_scalar(mat4f, float);
mat4d mat4d_sub_scalar(mat4d, double);
quatf quatf_sub_scalar(quatf, float);
quatd quatd_sub_scalar(quatd, double);

vec2f vec2f_mul_scalar(vec2f, float);
vec2d vec2d_mul_scalar(vec2d, double);
vec3f vec3f_mul_scalar(vec3f, float);
vec3d vec3d_mul_scalar(vec3d, double);
vec4f vec4f_mul_scalar(vec4f, float);
vec4d vec4d_mul_scalar(vec4d, double);
mat2f mat2f_mul_scalar(mat2f, float);
mat2d mat2d_mul_scalar(mat2d, double);
mat3f mat3f_mul_scalar(mat3f, float);
mat3d mat3d_mul_scalar(mat3d, double);
mat4f mat4f_mul_scalar(mat4f, float);
mat4d mat4d_mul_scalar(mat4d, double);
quatf quatf_mul_scalar(quatf, float);
quatd quatd_mul_scalar(quatd, double);

vec2f vec2f_div_scalar(vec2f, float);
vec2d vec2d_div_scalar(vec2d, double);
vec3f vec3f_div_scalar(vec3f, float);
vec3d vec3d_div_scalar(vec3d, double);
vec4f vec4f_div_scalar(vec4f, float);
vec4d vec4d_div_scalar(vec4d, double);
mat2f mat2f_div_scalar(mat2f, float);
mat2d mat2d_div_scalar(mat2d, double);
mat3f mat3f_div_scalar(mat3f, float);
mat3d mat3d_div_scalar(mat3d, double);
mat4f mat4f_div_scalar(mat4f, float);
mat4d mat4d_div_scalar(mat4d, double);
quatf quatf_div_scalar(quatf, float);
quatd quatd_div_scalar(quatd, double);

#endif
