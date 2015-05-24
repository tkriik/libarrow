#ifndef _ARROW_TYPES_VECTORIZED_H_
#define _ARROW_TYPES_VECTORIZED_H_

#ifdef __clang__

#if !(__has_extension(attribute_ext_vector_type))
#error Clang with vector extensions required.
#endif

typedef float	vec2f __attribute__ ((ext_vector_type(2)));
typedef double	vec2d __attribute__ ((ext_vector_type(2)));
typedef float 	vec3f __attribute__ ((ext_vector_type(3)));
typedef double 	vec3d __attribute__ ((ext_vector_type(3)));
typedef float 	vec4f __attribute__ ((ext_vector_type(4)));
typedef double 	vec4d __attribute__ ((ext_vector_type(4)));
typedef float	mat2f __attribute__ ((ext_vector_type(4)));
typedef double	mat2d __attribute__ ((ext_vector_type(4)));
typedef float	mat3f __attribute__ ((ext_vector_type(9)));
typedef double	mat3d __attribute__ ((ext_vector_type(9)));
typedef float	mat4f __attribute__ ((ext_vector_type(16)));
typedef double	mat4d __attribute__ ((ext_vector_type(16)));
typedef float	quatf __attribute__ ((ext_vector_type(4)));
typedef double	quatd __attribute__ ((ext_vector_type(4)));

#elif defined(__GNUC__)

/* GCC 8-byte vectors misbehave on 32-bit platforms. */
typedef float	vec2f __attribute__ ((vector_size(16)));
typedef float	vec2f __attribute__ ((vector_size(8)));
typedef double	vec2d __attribute__ ((vector_size(16)));
typedef float	vec3f __attribute__ ((vector_size(16)));
typedef double	vec3d __attribute__ ((vector_size(32)));
typedef float	vec4f __attribute__ ((vector_size(16)));
typedef double	vec4d __attribute__ ((vector_size(32)));
typedef float	mat2f __attribute__ ((vector_size(16)));
typedef double	mat2d __attribute__ ((vector_size(32)));
typedef float	mat3f __attribute__ ((vector_size(64)));
typedef double	mat3d __attribute__ ((vector_size(128)));
typedef float	mat4f __attribute__ ((vector_size(64)));
typedef double	mat4d __attribute__ ((vector_size(128)));
typedef float	quatf __attribute__ ((vector_size(16)));
typedef double	quatd __attribute__ ((vector_size(32)));

#else
#error Clang or GCC with vector extensions required.
#endif /* __clang__ */

/* Vector indexing macros. */
#define vec_x(v) ((v)[0])
#define vec_y(v) ((v)[1])
#define vec_z(v) ((v)[2])
#define vec_w(v) ((v)[3])

/* Matrix indexing macros. */
#define mat_i(m, i)		((m)[i])
#define mat2_rc(m, r, c)	((m)[(r) * 2 + (c)])
#define mat3_rc(m, r, c)	((m)[(r) * 3 + (c)])
#define mat4_rc(m, r, c) 	((m)[(r) * 4 + (c)])
#define mat2_11(m)		((m)[0])
#define mat2_12(m) 		((m)[1])
#define mat2_21(m) 		((m)[2])
#define mat2_22(m) 		((m)[3])
#define mat3_11(m) 		((m)[0])
#define mat3_12(m) 		((m)[1])
#define mat3_13(m) 		((m)[2])
#define mat3_21(m) 		((m)[3])
#define mat3_22(m) 		((m)[4])
#define mat3_23(m) 		((m)[5])
#define mat3_31(m) 		((m)[6])
#define mat3_32(m) 		((m)[7])
#define mat3_33(m) 		((m)[8])
#define mat4_11(m) 		((m)[0])
#define mat4_12(m) 		((m)[1])
#define mat4_13(m) 		((m)[2])
#define mat4_14(m) 		((m)[3])
#define mat4_21(m) 		((m)[4])
#define mat4_22(m) 		((m)[5])
#define mat4_23(m) 		((m)[6])
#define mat4_24(m) 		((m)[7])
#define mat4_31(m) 		((m)[8])
#define mat4_32(m) 		((m)[9])
#define mat4_33(m) 		((m)[10])
#define mat4_34(m) 		((m)[11])
#define mat4_41(m) 		((m)[12])
#define mat4_42(m) 		((m)[13])
#define mat4_43(m) 		((m)[14])
#define mat4_44(m) 		((m)[15])

/* Quaternion indexing macros. */
#define quat_x(q) ((q)[0])
#define quat_y(q) ((q)[1])
#define quat_z(q) ((q)[2])
#define quat_w(q) ((q)[3])

#endif
