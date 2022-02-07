#define R_NO_REMAP
#include <R.h>
#include <Rinternals.h>

SEXP test_c(SEXP x) {
  return x;
}
