#ifndef _ARROW_LOG_H_
#define _ARROW_LOG_H_

#include <stdio.h>
#include <stdlib.h>

#define LOG_RETURN(cond) do {							\
	if (!(cond)) {								\
		fprintf(stderr, "\x1b[31m[FAIL] %s\x1b[0m\n", __func__);	\
		return EXIT_FAILURE;						\
	} else {								\
		fprintf(stdout, "\x1b[32m[PASS] %s\x1b[0m\n", __func__);	\
		return EXIT_SUCCESS;						\
	}									\
} while (0);
	

#endif
