#pragma once

// Will define a method that returns a reference as const, and non-const with the same body
#define CONST_NOCONST_METHOD(header, body) \
header \
body \
\
const header const \
body \
