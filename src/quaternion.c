#include <math.h>

#include "matrix.h"
#include "quaternion.h"
#include "vector.h"

quatf
quatf_make(float x, float y, float z, float w)
{
	quatf q;
	quat_x(q) = x;
	quat_y(q) = y;
	quat_z(q) = z;
	quat_w(q) = w;
	return q;
}

quatd
quatd_make(double x, double y, double z, double w)
{
	quatd q;
	quat_x(q) = x;
	quat_y(q) = y;
	quat_z(q) = z;
	quat_w(q) = w;
	return q;
}

quatf
quatf_zero(void)
{
	return quatf_make(0, 0, 0, 0);
}

quatd
quatd_zero(void)
{
	return quatd_make(0, 0, 0, 0);
}

float
quatf_dot(quatf q, quatf r)
{
	q *= r;
	return quat_x(q) + quat_y(q) + quat_z(q) + quat_w(q);
}

double
quatd_dot(quatd q, quatd r)
{
	q *= r;
	return quat_x(q) + quat_y(q) + quat_z(q) + quat_w(q);
}

float
quatf_norm(quatf q)
{
	return sqrt(quatf_dot(q, q));
}

double
quatd_norm(quatd q)
{
	return sqrt(quatd_dot(q, q));
}

quatf
quatf_conj(quatf q)
{
	return q * quatf_make(-1, -1, -1, 1);
}

quatd
quatd_conj(quatd q)
{
	return q * quatd_make(-1, -1, -1, 1);
}

quatf
quatf_inv(quatf q)
{
	float d = quatf_dot(q, q);
	if (d == 0)
		return quatf_zero();
	return quatf_conj(q) / d;
}

quatd
quatd_inv(quatd q)
{
	double d = quatd_dot(q, q);
	if (d == 0)
		return quatd_zero();
	return quatd_conj(q) / d;
}

quatf
quatf_unit(quatf q)
{
	float d = quatf_norm(q);
	if (d == 0)
		return quatf_zero();
	return q / d;
}

quatd
quatd_unit(quatd q)
{
	double d = quatd_norm(q);
	if (d == 0)
		return quatd_zero();
	return q / d;
}

quatf
quatf_mul(quatf q, quatf p)
{
	return quatf_make(
	    quat_w(q) * quat_x(p) + quat_x(q) * quat_w(p) +
	    quat_y(q) * quat_z(p) - quat_z(q) * quat_y(p),

	    quat_w(q) * quat_y(p) - quat_x(q) * quat_z(p) +
	    quat_y(q) * quat_w(p) + quat_z(q) * quat_x(p),

	    quat_w(q) * quat_z(p) + quat_x(q) * quat_y(p) -
	    quat_y(q) * quat_x(p) + quat_z(q) * quat_w(p),

	    quat_w(q) * quat_w(p) - quat_x(q) * quat_x(p) -
	    quat_y(q) * quat_y(p) - quat_z(q) * quat_z(p)
	);
}

quatd
quatd_mul(quatd q, quatd p)
{
	return quatd_make(
	    quat_w(q) * quat_x(p) + quat_x(q) * quat_w(p) +
	    quat_y(q) * quat_z(p) - quat_z(q) * quat_y(p),

	    quat_w(q) * quat_y(p) - quat_x(q) * quat_z(p) +
	    quat_y(q) * quat_w(p) + quat_z(q) * quat_x(p),

	    quat_w(q) * quat_z(p) + quat_x(q) * quat_y(p) -
	    quat_y(q) * quat_x(p) + quat_z(q) * quat_w(p),

	    quat_w(q) * quat_w(p) - quat_x(q) * quat_x(p) -
	    quat_y(q) * quat_y(p) - quat_z(q) * quat_z(p)
	);
}

quatf
quatd_to_f(quatd q)
{
	return quatf_make(quat_x(q), quat_y(q), quat_z(q), quat_w(q));
}

quatd
quatf_to_d(quatf q)
{
	return quatd_make(quat_x(q), quat_y(q), quat_z(q), quat_w(q));
}

vec3f
quatf_to_vec3(quatf q)
{
	return vec3f_make(quat_x(q), quat_y(q), quat_z(q));
}

vec3d
quatd_to_vec3(quatd q)
{
	return vec3d_make(quat_x(q), quat_y(q), quat_z(q));
}

vec4f
quatf_to_vec4(quatf q)
{
	return vec4f_make(quat_x(q), quat_y(q), quat_z(q), quat_w(q));
}

vec4d
quatd_to_vec4(quatd q)
{
	return vec4d_make(quat_x(q), quat_y(q), quat_z(q), quat_w(q));
}

quatf
vec3f_to_quat(vec3f v)
{
	return quatf_make(vec_x(v), vec_y(v), vec_z(v), 0);
}

quatd
vec3d_to_quat(vec3d v)
{
	return quatd_make(vec_x(v), vec_y(v), vec_z(v), 0);
}

quatf
vec4f_to_quat(vec4f v)
{
	return quatf_make(vec_x(v), vec_y(v), vec_z(v), vec_w(v));
}

quatd
vec4d_to_quat(vec4d v)
{
	return quatd_make(vec_x(v), vec_y(v), vec_z(v), vec_w(v));
}
