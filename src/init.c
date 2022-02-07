#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

extern SEXP test_c(SEXP);

static const R_CallMethodDef CallEntries[] = {
  {"test_c", (DL_FUNC) &test_c, 1},
  {NULL, NULL, 0}
};

void R_init_testcppautocomplete(DllInfo *dll)
{
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
