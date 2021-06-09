/*========================== begin_copyright_notice ============================

Copyright (C) 2017-2021 Intel Corporation

SPDX-License-Identifier: MIT

============================= end_copyright_notice ===========================*/

#ifndef GED_ENUM_TYPES_H
#define GED_ENUM_TYPES_H


/*!
 * Type for representing the various return values GED can return. Use @ref GED_GetReturnValueString to retrieve the strings representing them.
 */
typedef enum
{
    GED_RETURN_VALUE_SUCCESS,
    GED_RETURN_VALUE_CYCLIC_DEPENDENCY,
    GED_RETURN_VALUE_NULL_POINTER,
    GED_RETURN_VALUE_OPCODE_NOT_SUPPORTED,
    GED_RETURN_VALUE_NO_COMPACT_FORM,
    GED_RETURN_VALUE_INVALID_FIELD,
    GED_RETURN_VALUE_INVALID_VALUE,
    GED_RETURN_VALUE_INVALID_INTERPRETER,
    GED_RETURN_VALUE_FILE_OPEN_FAILED,
    GED_RETURN_VALUE_FILE_READ_FAILED,
    GED_RETURN_VALUE_INVALID_OPERAND,
    GED_RETURN_VALUE_BAD_COMPACT_ENCODING,
    GED_RETURN_VALUE_INVALID_MODEL,
    GED_RETURN_VALUE_BUFFER_TOO_SHORT,
    GED_RETURN_VALUE_SIZE,
} GED_RETURN_VALUE;


/*!
 * Type for representing an instruction's type.
 */
typedef enum
{
    GED_INS_TYPE_NATIVE = 0,
    GED_INS_TYPE_COMPACT,
} GED_INS_TYPE;

extern const char* GEDInsTypeStr;

#endif // GED_ENUM_TYPES_H
