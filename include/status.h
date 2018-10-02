/*
 * *****************************************************************************
 *
 * Copyright 2018 Gavin D. Howard
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR
 * OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 *
 * *****************************************************************************
 *
 * All bc status codes.
 *
 */

#ifndef BC_STATUS_H
#define BC_STATUS_H

typedef enum BcStatus {

	BC_STATUS_SUCCESS,

	BC_STATUS_ALLOC_ERR,
	BC_STATUS_IO_ERR,
	BC_STATUS_BIN_FILE,

	BC_STATUS_LEX_BAD_CHAR,
	BC_STATUS_LEX_NO_STRING_END,
	BC_STATUS_LEX_NO_COMMENT_END,
	BC_STATUS_LEX_EOF,

	BC_STATUS_PARSE_BAD_TOKEN,
	BC_STATUS_PARSE_BAD_EXP,
	BC_STATUS_PARSE_EMPTY_EXP,
	BC_STATUS_PARSE_BAD_PRINT,
	BC_STATUS_PARSE_BAD_FUNC,
	BC_STATUS_PARSE_BAD_ASSIGN,
	BC_STATUS_PARSE_NO_AUTO,
	BC_STATUS_PARSE_DUPLICATE_LOCAL,
	BC_STATUS_PARSE_NO_BLOCK_END,

	BC_STATUS_MATH_NEGATIVE,
	BC_STATUS_MATH_NON_INTEGER,
	BC_STATUS_MATH_OVERFLOW,
	BC_STATUS_MATH_DIVIDE_BY_ZERO,
	BC_STATUS_MATH_NEG_SQRT,
	BC_STATUS_MATH_BAD_STRING,
#ifdef DC_CONFIG
	BC_STATUS_MATH_BASE_OVERFLOW,
#endif // DC_CONFIG

	BC_STATUS_EXEC_FILE_ERR,
	BC_STATUS_EXEC_MISMATCHED_PARAMS,
	BC_STATUS_EXEC_UNDEFINED_FUNC,
	BC_STATUS_EXEC_FILE_NOT_EXECUTABLE,
	BC_STATUS_EXEC_SIGACTION_FAIL,
	BC_STATUS_EXEC_BAD_SCALE,
	BC_STATUS_EXEC_BAD_IBASE,
	BC_STATUS_EXEC_NUM_LEN,
	BC_STATUS_EXEC_NAME_LEN,
	BC_STATUS_EXEC_STRING_LEN,
	BC_STATUS_EXEC_ARRAY_LEN,
	BC_STATUS_EXEC_BAD_OBASE,
	BC_STATUS_EXEC_BAD_READ_EXPR,
	BC_STATUS_EXEC_REC_READ,
	BC_STATUS_EXEC_BAD_TYPE,
	BC_STATUS_EXEC_SIGNAL,
	BC_STATUS_EXEC_SMALL_STACK,

	BC_STATUS_POSIX_NAME_LEN,
	BC_STATUS_POSIX_SCRIPT_COMMENT,
	BC_STATUS_POSIX_BAD_KEYWORD,
	BC_STATUS_POSIX_DOT_LAST,
	BC_STATUS_POSIX_RETURN_PARENS,
	BC_STATUS_POSIX_BOOL_OPS,
	BC_STATUS_POSIX_REL_OUTSIDE,
	BC_STATUS_POSIX_MULTIPLE_REL,
	BC_STATUS_POSIX_NO_FOR_INIT,
	BC_STATUS_POSIX_NO_FOR_COND,
	BC_STATUS_POSIX_NO_FOR_UPDATE,
	BC_STATUS_POSIX_HEADER_BRACE,

	BC_STATUS_VEC_OUT_OF_BOUNDS,
	BC_STATUS_VEC_ITEM_EXISTS,

	BC_STATUS_QUIT,
	BC_STATUS_LIMITS,

	BC_STATUS_INVALID_OPTION,

} BcStatus;

#define BC_ERR_IDX_VM (0)
#define BC_ERR_IDX_LEX (1)
#define BC_ERR_IDX_PARSE (2)
#define BC_ERR_IDX_MATH (3)
#define BC_ERR_IDX_EXEC (4)
#define BC_ERR_IDX_POSIX (5)
#define BC_ERR_IDX_VEC (6)

#endif // BC_STATUS_H
