#ifndef _ARROW_QUATERNION_H_
#define _ARROW_QUATERNION_H_

#include "types.h"
#include "vector.h"

/* Quaternion indexing macros. */
#define quat_x(q) ((q)[0])
#define quat_y(q) ((q)[1])
#define quat_z(q) ((q)[2])
#define quat_w(q) ((q)[3])

/* Quaternion constuctors. */
quatf	quatf_make(float, float, float, float);
quatd	quatd_make(double, double, double, double);

quatf	quatf_zero(void);
quatd	quatd_zero(void);

/* Quaternion functions. */
float	quatf_dot(quatf, quatf);
double	quatd_dot(quatd, quatd);

float	quatf_norm(quatf);
double	quatd_norm(quatd);

quatf	quatf_conj(quatf);
quatd	quatd_conj(quatd);

quatf	quatf_inv(quatf);
quatd	quatd_inv(quatd);

quatf	quatf_unit(quatf);
quatd	quatd_unit(quatd);

quatf	quatf_mul(quatf, quatf);
quatd	quatd_mul(quatd, quatd);

/* Quaternion size conversion functions. */
quatf	quatd_to_f(quatd);
quatd	quatf_to_d(quatf);

/* Quaternion-vector conversion functions. */
quatf	vec3f_to_quat(vec3f);
quatd	vec3d_to_quat(vec3d);
quatf	vec4f_to_quat(vec4f);
quatd	vec4d_to_quat(vec4d);
vec3f	quatf_to_vec3(quatf);
vec3d	quatd_to_vec3(quatd);
vec4f	quatf_to_vec4(quatf);
vec4d	quatd_to_vec4(quatd);

#endif
