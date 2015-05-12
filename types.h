#ifndef _ARROW_TYPES_H_
#define _ARROW_TYPES_H_

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
#if defined(__i386__) || defined(_X86_)
typedef float	vec2f __attribute__ ((vector_size(16)));
#else
typedef float	vec2f __attribute__ ((vector_size(8)));
#endif
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
#error Clang or GCC required.
#endif /* __clang__ */

#endif /* _ARROW_TYPES_H_ */
