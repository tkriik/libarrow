#ifndef _ARROW_TYPES_STANDARD_H_
#define _ARROW_TYPES_STANDARD_H_

/* Vector type definitions. */
typedef struct {
	float x, y;
} vec2f;

typedef struct {
	double x, y;
} vec2d;

typedef struct {
	float x, y, z;
} vec3f;

typedef struct {
	double x, y, z;
} vec3d;

typedef struct {
	float x, y, z, w;
} vec4f;

typedef struct {
	double x, y, z, w;
} vec4d;

/* Vector indexing macros. */
#define vec_x(v) ((v).x)
#define vec_y(v) ((v).y)
#define vec_z(v) ((v).z)
#define vec_w(v) ((v).w)

/* Matrix type definitions. */
typedef struct {
	float data[4];
} mat2f;

typedef struct {
	double data[4];
} mat2d;

typedef struct {
	float data[9];
} mat3f;

typedef struct {
	double data[9];
} mat3d;

typedef struct {
	float data[16];
} mat4f;

typedef struct {
	double data[16];
} mat4d;

/* Matrix indexing macros. */
#define mat_i(m, i)		((m).data[i])
#define mat2_rc(m, r, c)	((m).data[(r) * 2 + (c)])
#define mat3_rc(m, r, c) 	((m).data[(r) * 3 + (c)])
#define mat4_rc(m, r, c) 	((m).data[(r) * 4 + (c)])
#define mat2_11(m)		((m).data[0])
#define mat2_12(m) 		((m).data[1])
#define mat2_21(m) 		((m).data[2])
#define mat2_22(m) 		((m).data[3])
#define mat3_11(m) 		((m).data[0])
#define mat3_12(m) 		((m).data[1])
#define mat3_13(m) 		((m).data[2])
#define mat3_21(m) 		((m).data[3])
#define mat3_22(m) 		((m).data[4])
#define mat3_23(m) 		((m).data[5])
#define mat3_31(m) 		((m).data[6])
#define mat3_32(m) 		((m).data[7])
#define mat3_33(m) 		((m).data[8])
#define mat4_11(m) 		((m).data[0])
#define mat4_12(m) 		((m).data[1])
#define mat4_13(m) 		((m).data[2])
#define mat4_14(m) 		((m).data[3])
#define mat4_21(m) 		((m).data[4])
#define mat4_22(m) 		((m).data[5])
#define mat4_23(m) 		((m).data[6])
#define mat4_24(m) 		((m).data[7])
#define mat4_31(m) 		((m).data[8])
#define mat4_32(m) 		((m).data[9])
#define mat4_33(m) 		((m).data[10])
#define mat4_34(m) 		((m).data[11])
#define mat4_41(m) 		((m).data[12])
#define mat4_42(m) 		((m).data[13])
#define mat4_43(m) 		((m).data[14])
#define mat4_44(m) 		((m).data[15])

/* Quaternion type definitions. */
typedef struct {
	float x, y, z, w;
} quatf;

typedef struct {
	double x, y, z, w;
} quatd;

/* Quaternion indexing macros. */
#define quat_x(q) ((q).x)
#define quat_y(q) ((q).y)
#define quat_z(q) ((q).z)
#define quat_w(q) ((q).w)

#endif
