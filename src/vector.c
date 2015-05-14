#include <math.h>

#include "vector.h"

vec2f
vec2f_make(float x, float y)
{
	return (vec2f){x, y};
}

vec2d
vec2d_make(double x, double y)
{
	return (vec2d){x, y};
}

vec3f
vec3f_make(float x, float y, float z)
{
	return (vec3f){x, y, z};
}

vec3d
vec3d_make(double x, double y, double z)
{
	return (vec3d){x, y, z};
}

vec4f
vec4f_make(float x, float y, float z, float w)
{
	return (vec4f){x, y, z, w};
}

vec4d
vec4d_make(double x, double y, double z, double w)
{
	return (vec4d){x, y, z, w};
}

vec2f
vec2f_with(float n)
{
	return vec2f_make(n, n);
}

vec2d
vec2d_with(double n)
{
	return vec2d_make(n, n);
}

vec3f
vec3f_with(float n)
{
	return vec3f_make(n, n, n);
}

vec3d
vec3d_with(double n)
{
	return vec3d_make(n, n, n);
}

vec4f
vec4f_with(float n)
{
	return vec4f_make(n, n, n, n);
}

vec4d
vec4d_with(double n)
{
	return vec4d_make(n, n, n, n);
}

vec2f
vec2f_zero(void)
{
	return vec2f_make(0, 0);
}

vec2d
vec2d_zero(void)
{
	return vec2d_make(0, 0);
}

vec3f
vec3f_zero(void)
{
	return vec3f_make(0, 0, 0);
}

vec3d
vec3d_zero(void)
{
	return vec3d_make(0, 0, 0);
}

vec4f
vec4f_zero(void)
{
	return vec4f_make(0, 0, 0, 0);
}

vec4d
vec4d_zero(void)
{
	return vec4d_make(0, 0, 0, 0);
}

float
vec2f_dot(vec2f v, vec2f w)
{
	vec2f u = v * w;
	return vec_x(u) + vec_y(u);
}

double
vec2d_dot(vec2d v, vec2d w)
{
	vec2d u = v * w;
	return vec_x(u) + vec_y(u);
}

float
vec3f_dot(vec3f v, vec3f w)
{
	vec3f u = v * w;
	return vec_x(u) + vec_y(u) + vec_z(u);
}

double
vec3d_dot(vec3d v, vec3d w)
{
	vec3d u = v * w;
	return vec_x(u) + vec_y(u) + vec_z(u);
}

float
vec4f_dot(vec4f v, vec4f w)
{
	vec4f u = v * w;
	return vec_x(u) + vec_y(u) + vec_z(u) + vec_w(u);
}

double
vec4d_dot(vec4d v, vec4d w)
{
	vec4d u = v * w;
	return vec_x(u) + vec_y(u) + vec_z(u) + vec_w(u);
}

float
vec2f_norm(vec2f v)
{
	return sqrt(vec2f_dot(v, v));
}

double
vec2d_norm(vec2d v)
{
	return sqrt(vec2d_dot(v, v));
}

float
vec3f_norm(vec3f v)
{
	return sqrt(vec3f_dot(v, v));
}

double
vec3d_norm(vec3d v)
{
	return sqrt(vec3d_dot(v, v));
}

float
vec4f_norm(vec4f v)
{
	return sqrt(vec4f_dot(v, v));
}

double
vec4d_norm(vec4d v)
{
	return sqrt(vec4d_dot(v, v));
}

float
vec2f_angle(vec2f v, vec2f w)
{
	return acos(vec2f_dot(v, w) / (vec2f_norm(v) * vec2f_norm(w)));
}

double
vec2d_angle(vec2d v, vec2d w)
{
	return acos(vec2d_dot(v, w) / (vec2d_norm(v) * vec2d_norm(w)));
}

float
vec3f_angle(vec3f v, vec3f w)
{
	return acos(vec3f_dot(v, w) / (vec3f_norm(v) * vec3f_norm(w)));
}

double
vec3d_angle(vec3d v, vec3d w)
{
	return acos(vec3d_dot(v, w) / (vec3d_norm(v) * vec3d_norm(w)));
}

float
vec4f_angle(vec4f v, vec4f w)
{
	return acos(vec4f_dot(v, w) / (vec4f_norm(v) * vec4f_norm(w)));
}

double
vec4d_angle(vec4d v, vec4d w)
{
	return acos(vec4d_dot(v, w) / (vec4d_norm(v) * vec4d_norm(w)));
}

vec2f
vec2f_unit(vec2f v)
{
	return v / vec2f_norm(v);
}

vec2d
vec2d_unit(vec2d v)
{
	return v / vec2d_norm(v);
}

vec3f
vec3f_unit(vec3f v)
{
	return v / vec3f_norm(v);
}

vec3d
vec3d_unit(vec3d v)
{
	return v / vec3d_norm(v);
}

vec4f
vec4f_unit(vec4f v)
{
	return v / vec4f_norm(v);
}

vec4d
vec4d_unit(vec4d v)
{
	return v / vec4d_norm(v);
}

vec2f
vec2f_vproject(vec2f v, vec2f w)
{
	return w * (vec2f_dot(v, w) / vec2f_dot(w, w));
}

vec2d
vec2d_vproject(vec2d v, vec2d w)
{
	return w * (vec2d_dot(v, w) / vec2d_dot(w, w));
}

vec3f
vec3f_vproject(vec3f v, vec3f w)
{
	return w * (vec3f_dot(v, w) / vec3f_dot(w, w));
}

vec3d
vec3d_vproject(vec3d v, vec3d w)
{
	return w * (vec3d_dot(v, w) / vec3d_dot(w, w));
}

vec4f
vec4f_vproject(vec4f v, vec4f w)
{
	return w * (vec4f_dot(v, w) / vec4f_dot(w, w));
}

vec4d
vec4d_vproject(vec4d v, vec4d w)
{
	return w * (vec4d_dot(v, w) / vec4d_dot(w, w));
}

float
vec2f_sproject(vec2f v, vec2f w)
{
	return vec2f_dot(v, w) / vec2f_norm(w);
}

double
vec2d_sproject(vec2d v, vec2d w)
{
	return vec2d_dot(v, w) / vec2d_norm(w);
}

float
vec3f_sproject(vec3f v, vec3f w)
{
	return vec3f_dot(v, w) / vec3f_norm(w);
}

double
vec3d_sproject(vec3d v, vec3d w)
{
	return vec3d_dot(v, w) / vec3d_norm(w);
}

float
vec4f_sproject(vec4f v, vec4f w)
{
	return vec4f_dot(v, w) / vec4f_norm(w);
}

double
vec4d_sproject(vec4d v, vec4d w)
{
	return vec4d_dot(v, w) / vec4d_norm(w);
}

vec2f
vec2f_rotate(vec2f v, float a)
{
	float sin_a = sin(a);
	float cos_a = cos(a);
	return vec2f_make(
	    vec_x(v) * cos_a - vec_y(v) * sin_a,
	    vec_x(v) * sin_a + vec_y(v) * cos_a
	);
}

vec2d
vec2d_rotate(vec2d v, double a)
{
	double sin_a = sin(a);
	double cos_a = cos(a);
	return vec2d_make(
	    vec_x(v) * cos_a - vec_y(v) * sin_a,
	    vec_x(v) * sin_a + vec_y(v) * cos_a
	);
}

vec2f
vec2f_perp(vec2f v)
{
	return vec2f_make(-vec_y(v), vec_x(v));
}

vec2d
vec2d_perp(vec2d v)
{
	return vec2d_make(-vec_y(v), vec_x(v));
}

vec2f
vec2f_cperp(vec2f v)
{
	return vec2f_make(vec_y(v), -vec_x(v));
}

vec2d
vec2d_cperp(vec2d v)
{
	return vec2d_make(vec_y(v), -vec_x(v));
}

vec3f
vec3f_cross(vec3f v, vec3f w)
{
	return vec3f_make(
	    vec_y(v) * vec_z(w) - vec_z(v) * vec_y(w),
	    vec_z(v) * vec_x(w) - vec_x(v) * vec_z(w),
	    vec_x(v) * vec_y(w) - vec_y(v) * vec_x(w)
	);
}

vec3d
vec3d_cross(vec3d v, vec3d w)
{
	return vec3d_make(
	    vec_y(v) * vec_z(w) - vec_z(v) * vec_y(w),
	    vec_z(v) * vec_x(w) - vec_x(v) * vec_z(w),
	    vec_x(v) * vec_y(w) - vec_y(v) * vec_x(w)
	);
}

float
vec3f_stp(vec3f v, vec3f w, vec3f u)
{
	return vec3f_dot(vec3f_cross(v, w), u);
}

double
vec3d_stp(vec3d v, vec3d w, vec3d u)
{
	return vec3d_dot(vec3d_cross(v, w), u);
}

vec2f
vec2d_to_f(vec2d v)
{
	return vec2f_make(vec_x(v), vec_y(v));
}

vec2d
vec2f_to_d(vec2f v)
{
	return vec2d_make(vec_x(v), vec_y(v));
}

vec3f
vec3d_to_f(vec3d v)
{
	return vec3f_make(vec_x(v), vec_y(v), vec_z(v));
}

vec3d
vec3f_to_d(vec3f v)
{
	return vec3d_make(vec_x(v), vec_y(v), vec_z(v));
}

vec4f
vec4d_to_f(vec4d v)
{
	return vec4f_make(vec_x(v), vec_y(v), vec_z(v), vec_w(v));
}

vec4d
vec4f_to_d(vec4f v)
{
	return vec4d_make(vec_x(v), vec_y(v), vec_z(v), vec_w(v));
}

vec2f
vec3f_to_2(vec3f v)
{
	return vec2f_make(vec_x(v), vec_y(v));
}

vec2d
vec3d_to_2(vec3d v)
{
	return vec2d_make(vec_x(v), vec_y(v));
}

vec2f
vec4f_to_2(vec4f v)
{
	return vec2f_make(vec_x(v), vec_y(v));
}

vec2d
vec4d_to_2(vec4d v)
{
	return vec2d_make(vec_x(v), vec_y(v));
}

vec3f
vec2f_to_3(vec2f v)
{
	return vec3f_make(vec_x(v), vec_y(v), 0);
}

vec3d
vec2d_to_3(vec2d v)
{
	return vec3d_make(vec_x(v), vec_y(v), 0);
}

vec3f
vec4f_to_3(vec4f v)
{
	return vec3f_make(vec_x(v), vec_y(v), vec_z(v));
}

vec3d
vec4d_to_3(vec4d v)
{
	return vec3d_make(vec_x(v), vec_y(v), vec_z(v));
}

vec4f
vec2f_to_4(vec2f v)
{
	return vec4f_make(vec_x(v), vec_y(v), 0, 0);
}

vec4d
vec2d_to_4(vec2d v)
{
	return vec4d_make(vec_x(v), vec_y(v), 0, 0);
}

vec4f
vec3f_to_4(vec3f v)
{
	return vec4f_make(vec_x(v), vec_y(v), vec_z(v), 0);
}

vec4d
vec3d_to_4(vec3d v)
{
	return vec4d_make(vec_x(v), vec_y(v), vec_z(v), 0);
}
