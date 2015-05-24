#ifndef _ARROW_VECTOR_H_
#define _ARROW_VECTOR_H_

#include "basic.h"
#include "types.h"

/* Vector constructors. */
vec2f	vec2f_make(float, float);
vec2d	vec2d_make(double, double);
vec3f	vec3f_make(float, float, float);
vec3d	vec3d_make(double, double, double);
vec4f	vec4f_make(float, float, float, float);
vec4d	vec4d_make(double, double, double, double);

vec2f	vec2f_with(float);
vec2d	vec2d_with(double);
vec3f	vec3f_with(float);
vec3d	vec3d_with(double);
vec4f	vec4f_with(float);
vec4d	vec4d_with(double);

vec2f	vec2f_zero(void);
vec2d	vec2d_zero(void);
vec3f	vec3f_zero(void);
vec3d	vec3d_zero(void);
vec4f	vec4f_zero(void);
vec4d	vec4d_zero(void);

/* General vector functions. */
float	vec2f_dot(vec2f, vec2f);
double	vec2d_dot(vec2d, vec2d);
float	vec3f_dot(vec3f, vec3f);
double	vec3d_dot(vec3d, vec3d);
float	vec4f_dot(vec4f, vec4f);
double	vec4d_dot(vec4d, vec4d);

float	vec2f_norm(vec2f);
double	vec2d_norm(vec2d);
float	vec3f_norm(vec3f);
double	vec3d_norm(vec3d);
float	vec4f_norm(vec4f);
double	vec4d_norm(vec4d);

vec2f	vec2f_unit(vec2f);
vec2d	vec2d_unit(vec2d);
vec3f	vec3f_unit(vec3f);
vec3d	vec3d_unit(vec3d);
vec4f	vec4f_unit(vec4f);
vec4d	vec4d_unit(vec4d);

float	vec2f_angle(vec2f, vec2f);
double	vec2d_angle(vec2d, vec2d);
float	vec3f_angle(vec3f, vec3f);
double	vec3d_angle(vec3d, vec3d);
float	vec4f_angle(vec4f, vec4f);
double	vec4d_angle(vec4d, vec4d);

vec2f	vec2f_vproject(vec2f, vec2f);
vec2d	vec2d_vproject(vec2d, vec2d);
vec3f	vec3f_vproject(vec3f, vec3f);
vec3d	vec3d_vproject(vec3d, vec3d);
vec4f	vec4f_vproject(vec4f, vec4f);
vec4d	vec4d_vproject(vec4d, vec4d);

float	vec2f_sproject(vec2f, vec2f);
double	vec2d_sproject(vec2d, vec2d);
float	vec3f_sproject(vec3f, vec3f);
double	vec3d_sproject(vec3d, vec3d);
float	vec4f_sproject(vec4f, vec4f);
double	vec4d_sproject(vec4d, vec4d);

/* 2D vector functions. */
vec2f	vec2f_rotate(vec2f, float);
vec2d	vec2d_rotate(vec2d, double);
vec2f	vec2f_perp(vec2f);
vec2d	vec2d_perp(vec2d);
vec2f	vec2f_cperp(vec2f);
vec2d	vec2d_cperp(vec2d);

/* 3D vector functions. */
vec3f	vec3f_cross(vec3f, vec3f);
vec3d	vec3d_cross(vec3d, vec3d);
float	vec3f_stp(vec3f, vec3f, vec3f);
double	vec3d_stp(vec3d, vec3d, vec3d);

/* Vector type conversion functions. */
vec2f	vec2d_to_f(vec2d);
vec2d	vec2f_to_d(vec2f);
vec3f	vec3d_to_f(vec3d);
vec3d	vec3f_to_d(vec3f);
vec4f	vec4d_to_f(vec4d);
vec4d	vec4f_to_d(vec4f);

/* Vector size conversion functions. */
vec2f	vec3f_to_2(vec3f);
vec2f	vec4f_to_2(vec4f);
vec2d	vec3d_to_2(vec3d);
vec2d	vec4d_to_2(vec4d);
vec3f	vec2f_to_3(vec2f);
vec3f	vec4f_to_3(vec4f);
vec3d	vec2d_to_3(vec2d);
vec3d	vec4d_to_3(vec4d);
vec4f	vec2f_to_4(vec2f);
vec4f	vec3f_to_4(vec3f);
vec4d	vec2d_to_4(vec2d);
vec4d	vec3d_to_4(vec3d);

#endif
