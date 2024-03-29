// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// ebb_crossprob_cor_R
double ebb_crossprob_cor_R(int d, NumericVector bounds, NumericVector correlations);
RcppExport SEXP _GBJ_ebb_crossprob_cor_R(SEXP dSEXP, SEXP boundsSEXP, SEXP correlationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bounds(boundsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type correlations(correlationsSEXP);
    rcpp_result_gen = Rcpp::wrap(ebb_crossprob_cor_R(d, bounds, correlations));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_GBJ_ebb_crossprob_cor_R", (DL_FUNC) &_GBJ_ebb_crossprob_cor_R, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_GBJ(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
