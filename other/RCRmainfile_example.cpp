#include "stdafx.h"
#include "RCR.h"
#include <iostream>
#include <iterator>
#include <fstream>

// SEE STARTER GUIDE ATTACHED IN .ZIP FILE FOR BASIC HOW-TO INSTRUCTIONS

// EXAMPLE CODE FOR FUNCTIONAL / MODEL-FITTING RCR COMMENTED OUT BELOW:

/*
// ENTER YOUR FUNCTION HERE (either with one independent variable, or multiple, in a vector.
//also takes vector of parameters in as argument
//function arguments need to be defined in that order:
//example function given: y = b*exp(m(x-0.5))

double func(double x, std::vector <double> params) {
	double b = params[0];
	double m = params[1];

	return b * std::exp(m *(x - 0.5));
}

//example function for >1 indep. variable, y = a_0 + a_1*x_1 + a_2*x_2 (plane)
double func_ND(std::vector <double> x, std::vector <double> params) {
	double a0 = params[0];
	double a1 = params[1];
	double a2 = params[2];

	double x1 = x[0];
	double x2 = x[1];

	return a0 + a1*x1 + a2*x2;

}
// ENTER THE PARTIAL DERIVATIVES HERE, IN ORDER OF PARAMETERS
// EXAMPLE PARTIALS FOR y=b*exp(mx) shown

double partial1(double x, std::vector <double> params) //example of case of 1 indep var
{
	//here you may declare the needed parameters. MAKE SURE TO USE THE CORRECT ORDERING OF PARAMS AS THAT OF YOUR PARAM VECTOR
	double b = params[0];
	double m = params[1];

	//now return the partial with everything plugged in.
	return std::exp(m *(x - 0.5));

};

double partial2(double x, std::vector <double> params) //example of case of 1 indep var
{
	//here you may declare the needed parameters. MAKE SURE TO USE THE CORRECT ORDERING OF PARAMS AS THAT OF YOUR PARAM VECTOR
	double b = params[0];
	double m = params[1];

	//now return the partial with everything plugged in.
	return (x-0.5) * b * std::exp(m *(x - 0.5));

};

// EXAMPLE PARTIALS FOR >1 INDEP VARIABLES SHOWN for y = a0 + a1*x1 + a2*x2
// (in this case, these independent "x" variables are in a vector. In the below example, x = {x1, x2})

double NDpartial1(std::vector <double> x, std::vector <double> params) {

	return 1.0;
}

double NDpartial2(std::vector <double> x, std::vector <double> params) {

	double x1 = x[0];

	return x1;
}

double NDpartial3(std::vector <double> x, std::vector <double> params) {

	double x2 = x[1];

	return x2;
}

//Next create your vector of partial derivatives for use in the jacobian (use the lower definition if you have >1 independent variable):

// CASE OF ONLY ONE INDEP VARIABLE:
std::vector <double(*)(double, std::vector <double>)> partialsvector = { partial1, partial2 };

// CASE OF >1 INDEP VARIABLES:
std::vector <double(*)(std::vector <double>, std::vector <double>)> partialsvector_ND = { NDpartial1, NDpartial2, NDpartial3 };
*/

int main()
{
	// SEE STARTER GUIDE ATTACHED IN .ZIP FILE FOR BASIC HOW-TO INSTRUCTIONS

	//  ----------EXAMPLE CODE FOR EXECUTION OF RCR COMMENTED OUT BELOW: ----------

	/*
	// EXAMPLES SHOWN BELOW USE SS_MEDIAN_DL AND BULK REJECTION TECHNIQUES

	
	// ----------BASIC RCR ----------

	// UNWEIGHTED DATA
	RCR rcr = RCR(SS_MEDIAN_DL);
	rcr.performBulkRejection(y);

	// WEIGHTED DATA
	RCR rcr = RCR(SS_MEDIAN_DL);
	rcr.performBulkRejection(weights, y);

	//  ----------NON-PARAMETRIC RCR ----------

	// UNWEIGHTED DATA
	NonParametric model = NonParametric();
	RCR rcr = RCR(SS_MEDIAN_DL);
	rcr.setNonParametricModel(model);
	rcr.performBulkRejection(weights, y);

	// WEIGHTED DATA
	NonParametric model = NonParametric();
	RCR rcr = RCR(SS_MEDIAN_DL);
	rcr.setNonParametricModel(model);
	rcr.performBulkRejection(weights, y);

	//  ----------PARAMETRIC/FUNCTIONAL FORM RCR ----------
	// (SEE ABOVE int.main() FOR EXMAPLES OF FUNCTION, PARTIALS, ETC. DEFINITIONS


	// UNWEIGHTED DATA, SINGLE INDEPENDENT VARIABLE IN MODEL FUNCTION
	FunctionalForm model = FunctionalForm(func, x, y, sigma_y, partialsvector, tolerance, guess);
	RCR rcr = RCR(SS_MEDIAN_DL);
	rcr.setParametricModel(model);
	rcr.performBulkRejection(weights, y);

	// UNWEIGHTED DATA, MULTIPLE INDEPENDENT VARIABLES IN MODEL FUNCTION
	FunctionalForm model = FunctionalForm(func, x_ND, y, sigma_y, partialsvector_ND, tolerance, guess);
	RCR rcr = RCR(SS_MEDIAN_DL);
	rcr.setParametricModel(model);
	rcr.performBulkRejection(weights, y);

	// WEIGHTED DATA, SINGLE INDEPENDENT VARIABLE IN MODEL FUNCTION
	FunctionalForm model = FunctionalForm(func, x, y, sigma_y, partialsvector, tolerance, guess, weights);
	RCR rcr = RCR(SS_MEDIAN_DL);
	rcr.setParametricModel(model);
	rcr.performBulkRejection(weights, y);

	// WEIGHTED DATA, MULTIPLE INDEPENDENT VARIABLES IN MODEL FUNCTION
	FunctionalForm model = FunctionalForm(func, x_ND, y, sigma_y, partialsvector_ND, tolerance, guess, weights);
	RCR rcr = RCR(SS_MEDIAN_DL);
	rcr.setParametricModel(model);
	rcr.performBulkRejection(weights, y);
	*/

}

