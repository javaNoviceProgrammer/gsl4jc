/*
 * stats.cpp
 *
 *  Created on: Jun 20, 2020
 *      Author: meisam
 */

#include <gsl/gsl_math.h>
#include <gsl/gsl_statistics_double.h>
#include "../headers/org_gsl4j_statistics_Stats.h"


 /* stride: distance between elements of the array to choose from
  * for example: x = {1.0, 2.0, 3.0, 4.0} --> stride = 1 means pick
  * all the elements. stride = 2 means pick every other element {1.0, 3.0}
  * and etc. */

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    mean
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_mean
  (JNIEnv *env, jclass Stats, jdoubleArray jdata) {
	jint len = env -> GetArrayLength(jdata) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble jresult = gsl_stats_mean(data, 1, len) ;
	delete[] data ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    variance
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_variance
  (JNIEnv *env, jclass Stats, jdoubleArray jdata) {
	jint len = env -> GetArrayLength(jdata) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble jresult = gsl_stats_variance(data, 1, len) ;
	delete[] data ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    varianceMean
 * Signature: ([DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_varianceMean
  (JNIEnv *env, jclass Stats, jdoubleArray jdata, jdouble mean) {
	jint len = env -> GetArrayLength(jdata) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble jresult = gsl_stats_variance_m(data, 1, len, mean) ;
	delete[] data ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    sd
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_sd
  (JNIEnv *env, jclass Stats, jdoubleArray jdata) {
	jint len = env -> GetArrayLength(jdata) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble jresult = gsl_stats_sd(data, 1, len) ;
	delete[] data ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    sdMean
 * Signature: ([DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_sdMean
  (JNIEnv *env, jclass Stats, jdoubleArray jdata, jdouble mean) {
	jint len = env -> GetArrayLength(jdata) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble jresult = gsl_stats_sd_m(data, 1, len, mean) ;
	delete[] data ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    totSumSquares
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_totSumSquares
  (JNIEnv *env, jclass Stats, jdoubleArray jdata) {
	jint len = env -> GetArrayLength(jdata) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble jresult = gsl_stats_tss(data, 1, len) ;
	delete[] data ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    totSumSquaresMean
 * Signature: ([DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_totSumSquaresMean
  (JNIEnv *env, jclass Stats, jdoubleArray jdata, jdouble mean) {
	jint len = env -> GetArrayLength(jdata) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble jresult = gsl_stats_tss_m(data, 1, len, mean) ;
	delete[] data ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    varianceWithFixedMean
 * Signature: ([DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_varianceWithFixedMean
  (JNIEnv *env, jclass Stats, jdoubleArray jdata, jdouble mean) {
	jint len = env -> GetArrayLength(jdata) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble jresult = gsl_stats_variance_with_fixed_mean(data, 1, len, mean) ;
	delete[] data ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    sdWithFixedMean
 * Signature: ([DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_sdWithFixedMean
  (JNIEnv *env, jclass Stats, jdoubleArray jdata, jdouble mean) {
	jint len = env -> GetArrayLength(jdata) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble jresult = gsl_stats_sd_with_fixed_mean(data, 1, len, mean) ;
	delete[] data ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    absdev
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_absdev
  (JNIEnv *env, jclass Stats, jdoubleArray jdata) {
	jint len = env -> GetArrayLength(jdata) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble jresult = gsl_stats_absdev(data, 1, len) ;
	delete[] data ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    absdevMean
 * Signature: ([DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_absdevMean
  (JNIEnv *env, jclass Stats, jdoubleArray jdata, jdouble mean) {
	jint len = env -> GetArrayLength(jdata) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble jresult = gsl_stats_absdev_m(data, 1, len, mean) ;
	delete[] data ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    skew
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_skew
  (JNIEnv *env, jclass Stats, jdoubleArray jdata) {
	jint len = env -> GetArrayLength(jdata) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble jresult = gsl_stats_skew(data, 1, len) ;
	delete[] data ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    skewMeanSd
 * Signature: ([DDD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_skewMeanSd
  (JNIEnv *env, jclass Stats, jdoubleArray jdata, jdouble mean, jdouble sd) {
	jint len = env -> GetArrayLength(jdata) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble jresult = gsl_stats_skew_m_sd(data, 1, len, mean, sd) ;
	delete[] data ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    kurtosis
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_kurtosis
  (JNIEnv *env, jclass Stats, jdoubleArray jdata) {
	jint len = env -> GetArrayLength(jdata) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble jresult = gsl_stats_kurtosis(data, 1, len) ;
	delete[] data ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    kurtosisMeanSd
 * Signature: ([DDD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_kurtosisMeanSd
  (JNIEnv *env, jclass Stats, jdoubleArray jdata, jdouble mean, jdouble sd) {
	jint len = env -> GetArrayLength(jdata) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble jresult = gsl_stats_kurtosis_m_sd(data, 1, len, mean, sd) ;
	delete[] data ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    lag1Autocorrelation
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_lag1Autocorrelation
  (JNIEnv *env, jclass Stats, jdoubleArray jdata) {
	jint len = env -> GetArrayLength(jdata) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble jresult = gsl_stats_lag1_autocorrelation(data, 1, len) ;
	delete[] data ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    lag1AutocorrelationMean
 * Signature: ([DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_lag1AutocorrelationMean
  (JNIEnv *env, jclass Stats, jdoubleArray jdata, jdouble mean) {
	jint len = env -> GetArrayLength(jdata) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble jresult = gsl_stats_lag1_autocorrelation_m(data, 1, len, mean) ;
	delete[] data ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    covariance
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_covariance
  (JNIEnv *env, jclass Stats, jdoubleArray jdata1, jdoubleArray jdata2) {
	jint len1 = env -> GetArrayLength(jdata1) ;
	jint len2 = env -> GetArrayLength(jdata2) ;
	jint len = gsl_min(len1, len2) ;
	jdouble *data1 = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata1, 0, len, data1) ;
	jdouble *data2 = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata2, 0, len, data2) ;
	jdouble jresult = gsl_stats_covariance(data1, 1, data2, 1, len) ;
	delete[] data1 ;
	delete[] data2 ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    covarianceMean
 * Signature: ([D[DDD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_covarianceMean
  (JNIEnv *env, jclass Stats, jdoubleArray jdata1, jdoubleArray jdata2, jdouble mean1, jdouble mean2) {
	jint len1 = env -> GetArrayLength(jdata1) ;
	jint len2 = env -> GetArrayLength(jdata2) ;
	jint len = gsl_min(len1, len2) ;
	jdouble *data1 = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata1, 0, len, data1) ;
	jdouble *data2 = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata2, 0, len, data2) ;
	jdouble jresult = gsl_stats_covariance_m(data1, 1, data2, 1, len, mean1, mean2) ;
	delete[] data1 ;
	delete[] data2 ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    correlation
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_correlation
  (JNIEnv *env, jclass Stats, jdoubleArray jdata1, jdoubleArray jdata2) {
	jint len1 = env -> GetArrayLength(jdata1) ;
	jint len2 = env -> GetArrayLength(jdata2) ;
	jint len = gsl_min(len1, len2) ;
	jdouble *data1 = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata1, 0, len, data1) ;
	jdouble *data2 = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata2, 0, len, data2) ;
	jdouble jresult = gsl_stats_correlation(data1, 1, data2, 1, len) ;
	delete[] data1 ;
	delete[] data2 ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    spearman
 * Signature: ([D[D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_spearman
  (JNIEnv *env, jclass Stats, jdoubleArray jdata1, jdoubleArray jdata2, jdoubleArray jwork) {
	jint len1 = env -> GetArrayLength(jdata1) ;
	jint len2 = env -> GetArrayLength(jdata2) ;
	jint len = gsl_min(len1, len2) ;
	jdouble *data1 = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata1, 0, len, data1) ;
	jdouble *data2 = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata2, 0, len, data2) ;
	jdouble *work = new jdouble[2*len] ;
	env -> GetDoubleArrayRegion(jwork, 0, 2*len, work) ;
	jdouble jresult = gsl_stats_spearman(data1, 1, data2, 1, len, work) ;
	delete[] data1 ;
	delete[] data2 ;
	delete[] work ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedMean
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedMean
  (JNIEnv *env, jclass Stats, jdoubleArray jdata, jdoubleArray jweights) {
	jint len1 = env -> GetArrayLength(jdata) ;
	jint len2 = env -> GetArrayLength(jweights) ;
	jint len = gsl_min(len1, len2) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble *weights = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jweights, 0, len, weights) ;
	jdouble jresult = gsl_stats_wmean(weights, 1, data, 1, len) ;
	delete[] data ;
	delete[] weights ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedVariance
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedVariance
  (JNIEnv *env, jclass Stats, jdoubleArray jdata, jdoubleArray jweights) {
	jint len1 = env -> GetArrayLength(jdata) ;
	jint len2 = env -> GetArrayLength(jweights) ;
	jint len = gsl_min(len1, len2) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble *weights = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jweights, 0, len, weights) ;
	jdouble jresult = gsl_stats_wvariance(weights, 1, data, 1, len) ;
	delete[] data ;
	delete[] weights ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedVarianceMean
 * Signature: ([D[DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedVarianceMean
  (JNIEnv *env, jclass Stats, jdoubleArray jdata, jdoubleArray jweights, jdouble jmean) {
	jint len1 = env -> GetArrayLength(jdata) ;
	jint len2 = env -> GetArrayLength(jweights) ;
	jint len = gsl_min(len1, len2) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble *weights = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jweights, 0, len, weights) ;
	jdouble jresult = gsl_stats_wvariance_m(weights, 1, data, 1, len, jmean) ;
	delete[] data ;
	delete[] weights ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedSd
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedSd
  (JNIEnv *env, jclass Stats, jdoubleArray jdata, jdoubleArray jweights) {
	jint len1 = env -> GetArrayLength(jdata) ;
	jint len2 = env -> GetArrayLength(jweights) ;
	jint len = gsl_min(len1, len2) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble *weights = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jweights, 0, len, weights) ;
	jdouble jresult = gsl_stats_wsd(weights, 1, data, 1, len) ;
	delete[] data ;
	delete[] weights ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedSdMean
 * Signature: ([D[DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedSdMean
  (JNIEnv *env, jclass Stats, jdoubleArray jdata, jdoubleArray jweights, jdouble jmean) {
	jint len1 = env -> GetArrayLength(jdata) ;
	jint len2 = env -> GetArrayLength(jweights) ;
	jint len = gsl_min(len1, len2) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble *weights = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jweights, 0, len, weights) ;
	jdouble jresult = gsl_stats_wsd_m(weights, 1, data, 1, len, jmean) ;
	delete[] data ;
	delete[] weights ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedVarianceWithFixedMean
 * Signature: ([D[DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedVarianceWithFixedMean
  (JNIEnv *env, jclass Stats, jdoubleArray jdata, jdoubleArray jweights, jdouble jmean) {
	jint len1 = env -> GetArrayLength(jdata) ;
	jint len2 = env -> GetArrayLength(jweights) ;
	jint len = gsl_min(len1, len2) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble *weights = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jweights, 0, len, weights) ;
	jdouble jresult = gsl_stats_wvariance_with_fixed_mean(weights, 1, data, 1, len, jmean) ;
	delete[] data ;
	delete[] weights ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedSdWithFixedMean
 * Signature: ([D[DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedSdWithFixedMean
  (JNIEnv *env, jclass Stats, jdoubleArray jdata, jdoubleArray jweights, jdouble jmean) {
	jint len1 = env -> GetArrayLength(jdata) ;
	jint len2 = env -> GetArrayLength(jweights) ;
	jint len = gsl_min(len1, len2) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble *weights = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jweights, 0, len, weights) ;
	jdouble jresult = gsl_stats_wsd_with_fixed_mean(weights, 1, data, 1, len, jmean) ;
	delete[] data ;
	delete[] weights ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedTotSumOfSquares
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedTotSumOfSquares
  (JNIEnv *env, jclass Stats, jdoubleArray jdata, jdoubleArray jweights) {
	jint len1 = env -> GetArrayLength(jdata) ;
	jint len2 = env -> GetArrayLength(jweights) ;
	jint len = gsl_min(len1, len2) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble *weights = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jweights, 0, len, weights) ;
	jdouble jresult = gsl_stats_wtss(weights, 1, data, 1, len) ;
	delete[] data ;
	delete[] weights ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedTotSumOfSquaresMean
 * Signature: ([D[DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedTotSumOfSquaresMean
  (JNIEnv *env, jclass Stats, jdoubleArray jdata, jdoubleArray jweights, jdouble jmean) {
	jint len1 = env -> GetArrayLength(jdata) ;
	jint len2 = env -> GetArrayLength(jweights) ;
	jint len = gsl_min(len1, len2) ;
	jdouble *data = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jdata, 0, len, data) ;
	jdouble *weights = new jdouble[len] ;
	env -> GetDoubleArrayRegion(jweights, 0, len, weights) ;
	jdouble jresult = gsl_stats_wtss_m(weights, 1, data, 1, len, jmean) ;
	delete[] data ;
	delete[] weights ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedAbsoluteSd
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedAbsoluteSd
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedAbsoluteSdMean
 * Signature: ([D[DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedAbsoluteSdMean
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedSkew
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedSkew
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedSkewMeanSd
 * Signature: ([D[DDD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedSkewMeanSd
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdouble, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedKurtosis
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedKurtosis
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedKurtosisMeanSd
 * Signature: ([D[DDD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedKurtosisMeanSd
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdouble, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    max
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_max
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    min
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_min
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    minmax
 * Signature: ([D)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_org_gsl4j_statistics_Stats_minmax
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    maxIndex
 * Signature: ([D)I
 */
JNIEXPORT jint JNICALL Java_org_gsl4j_statistics_Stats_maxIndex
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    minIndex
 * Signature: ([D)I
 */
JNIEXPORT jint JNICALL Java_org_gsl4j_statistics_Stats_minIndex
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    minmaxIndex
 * Signature: ([D)[I
 */
JNIEXPORT jintArray JNICALL Java_org_gsl4j_statistics_Stats_minmaxIndex
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    medianFromSortedData
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_medianFromSortedData
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    median
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_median
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    quantileFromSortedData
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_quantileFromSortedData
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    select
 * Signature: ([DI)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_select
  (JNIEnv *, jclass, jdoubleArray, jint);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    trmeanFromSortedData
 * Signature: ([DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_trmeanFromSortedData
  (JNIEnv *, jclass, jdoubleArray, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    gastwirthFromSortedData
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_gastwirthFromSortedData
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    mad0
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_mad0
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    mad
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_mad
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    sn0FromSortedData
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_sn0FromSortedData
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    snFromSortedData
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_snFromSortedData
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    qn0FromSortedData
 * Signature: ([D[D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_qn0FromSortedData
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    qnFromSortedData
 * Signature: ([D[D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_qnFromSortedData
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdoubleArray);




