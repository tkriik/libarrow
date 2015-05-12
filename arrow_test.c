#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "matrix.h"
#include "vector.h"

#define deg_to_rad(r) ((M_PI * (r)) / 180)

static void
vec2f_print(vec2f v)
{
	printf("%f, %f\n", v[0], v[1]);
}

static void
vec3f_print(vec3f v)
{
	printf("%f, %f, %f\n", v[0], v[1], v[2]);
}

static void
vec4f_print(vec4f v)
{
	printf("%f, %f, %f, %f\n", v[0], v[1], v[2], v[3]);
}

static void
mat2f_print(mat2f m)
{
	printf("%f, %f\n", m[0], m[1]);
	printf("%f, %f\n", m[2], m[3]);
}

static void
mat3f_print(mat3f m)
{
	printf("%f, %f, %f\n", m[0], m[1], m[2]);
	printf("%f, %f, %f\n", m[3], m[4], m[5]);
	printf("%f, %f, %f\n", m[6], m[7], m[8]);
}

static void
mat4f_print(mat4f m)
{
	printf("%f, %f, %f, %f\n", m[0], m[1], m[2], m[3]);
	printf("%f, %f, %f, %f\n", m[4], m[5], m[6], m[7]);
	printf("%f, %f, %f, %f\n", m[8], m[9], m[10], m[11]);
	printf("%f, %f, %f, %f\n", m[12], m[13], m[14], m[15]);
}

int
main(void)
{
	vec2f v2fa = vec2f_make(1, 2);
	vec2f v2fb = vec2f_make(3, 4);

	vec3f v3fa = vec3f_make(1, 2, 3);
	vec3f v3fb = vec3f_make(4, 5, 6);

	vec4f v4fa = vec4f_make(1, 2, 3, 4);
	vec4f v4fb = vec4f_make(5, 6, 7, 8);

	mat2f m2fa = {
	    1, 2,
	    3, 4
	};

	mat2f m2fb = {
	    5, 6,
	    7, 8
	};

	mat3f m3fa = {
	    1, 2, 3,
	    4, 5, 6,
	    7, 8, 9
	};

	mat3f m3fb = {
	    10, 11, 12,
	    13, 14, 15,
	    16, 17, 18
	};

	mat4f m4fa = {
	    1, 2, 3, 4,
	    5, 6, 7, 8,
	    9, 10, 11, 12,
	    13, 14, 15, 16
	};

	mat4f m4fb = {
	    17, 18, 19, 20,
	    21, 22, 23, 24,
	    25, 26, 27, 28,
	    29, 30, 31, 32
	};
	
	vec2f_print(v2fa);
	vec2f_print(v2fb);
	vec3f_print(v3fa);
	vec3f_print(v3fb);
	vec4f_print(v4fa);
	vec4f_print(v4fb);

	mat2f_print(m2fa);
	mat2f_print(m2fb);
	mat3f_print(m3fa);
	mat3f_print(m3fb);
	mat4f_print(m4fa);
	mat4f_print(m4fb);

	return 0;
}
