#pragma once

class CSteger1D
{
public:
	CSteger1D(void);
	~CSteger1D(void);
	// Tableau de la gaussienne 1D
	double *GaussianKernel;
	// Tableau Deriv�e premi�re 
	double* GaussianKernelD1;
	// Tableau D�riv�e seconde
	double *GaussianKernelD2;
	// Tableau pour la d�riv�e troisi�me qu'on pourra �ventuellement utilis�e pour la d�tection de contours
	double *GaussianKernelD3;
	// Ecart-Type
	double Theta;
	double *ResultatFiltrage;
	void InitKernels(double ValTheta, double ValTaille);
	double Pi;
	double DeuxPi;
	double *TabResult;
	// Fonction r�alisant la convolution avec les gaussiennes
	void ConvolutionKernels(double * Signal, long TailleSignal, long TailleKernel,double ValTheta);
	double *TabResultD1;
	double *TabResultD2;
	void EffaceTab(void);
	void InitTabResult(long TailleSignal);
};
