// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// gliding_box
DataFrame gliding_box(arma::ucube C, IntegerVector box_sizes);
RcppExport SEXP _lacunaRity_gliding_box(SEXP CSEXP, SEXP box_sizesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::ucube >::type C(CSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type box_sizes(box_sizesSEXP);
    rcpp_result_gen = Rcpp::wrap(gliding_box(C, box_sizes));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_lacunaRity_gliding_box", (DL_FUNC) &_lacunaRity_gliding_box, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_lacunaRity(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
