#ifndef _H_TERRNO_H
#define _H_TERRNO_H

typedef enum tlibc_error_code_e
{
    E_TLIBC_NOERROR = 0,
    E_TLIBC_ERROR = -1,	
    E_TLIBC_OUT_OF_MEMORY = -2,
	E_TLIBC_NOT_FOUND = -3,
	E_TLIBC_SYNTAX = -4,
	E_TLIBC_MISMATCH = -5,
	E_TLIBC_ERRNO = -6,
	E_TLIBC_WOULD_BLOCK = -7,
	E_TLIBC_BAD_FILE = -8,
	E_TLIBC_EOF = -9,	
	E_TLIBC_EMPTY = -10,
	E_TLIBC_INTEGER_OVERFLOW = -11,
	E_TLIBC_IGNORE = -12,
	E_TLIBC_PLEASE_READ_ENUM_NAME = -13,
	E_TLIBC_FILE_IS_ALREADY_ON_THE_STACK = -14,

	E_TLIBC_NO_MEMORY = -15,
	E_TLIBC_CAN_NOT_OPEN_FILE = -16,
	E_TLIBC_CLOSE = -17,
    E_TLIBC_TBUS_NOT_ENOUGH_SPACE = -18,
    E_TLIBC_TOO_MANY_SOCKET = -19,
    E_TLIBC_BAD_PACKAGE = -20,
	E_TLIBC_MYSQL_ERROR = 21,
}tlibc_error_code_t;

#endif


