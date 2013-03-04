// 02576 Rendering Framework
// Written by Jeppe Revall Frisvad, 2009
// Copyright (c) DTU Informatics 2009

#ifndef SPRECTRUM2RGB_H
#define SPRECTRUM2RGB_H

/*
  RGB color-mathcing functions 

  Table 3 from Stockman and Sharpe. Spectral sensitivities of the
  middle- and long-wavelength sensitive cones derived from
  measurements in observers of known genotype. Vision Research, 40,
  1711-1737. 2000.

*/

static const double spectrum_rgb[][4] = {
  { 390,   1.5000E-03,  -4.0000E-04,   6.2000E-03 },
  { 395,   3.8000E-03,  -1.0000E-03,   1.6100E-02 },
  { 400,   8.9000E-03,  -2.5000E-03,   4.0000E-02 },
  { 405,   1.8800E-02,  -5.9000E-03,   9.0600E-02 },
  { 410,   3.5000E-02,  -1.1900E-02,   1.8020E-01 },
  { 415,   5.3100E-02,  -2.0100E-02,   3.0880E-01 },
  { 420,   7.0200E-02,  -2.8900E-02,   4.6700E-01 },
  { 425,   7.6300E-02,  -3.3800E-02,   6.1520E-01 },
  { 430,   7.4500E-02,  -3.4900E-02,   7.6380E-01 },
  { 435,   5.6100E-02,  -2.7600E-02,   8.7780E-01 },
  { 440,   3.2300E-02,  -1.6900E-02,   9.7550E-01 },
  { 445,  -4.4000E-03,   2.4000E-03,   1.0019E+00 },
  { 450,  -4.7800E-02,   2.8300E-02,   9.9960E-01 },
  { 455,  -9.7000E-02,   6.3600E-02,   9.1390E-01 },
  { 460,  -1.5860E-01,   1.0820E-01,   8.2970E-01 },
  { 465,  -2.2350E-01,   1.6170E-01,   7.4170E-01 },
  { 470,  -2.8480E-01,   2.2010E-01,   6.1340E-01 },
  { 475,  -3.3460E-01,   2.7960E-01,   4.7200E-01 },
  { 480,  -3.7760E-01,   3.4280E-01,   3.4950E-01 },
  { 485,  -4.1360E-01,   4.0860E-01,   2.5640E-01 },
  { 490,  -4.3170E-01,   4.7160E-01,   1.8190E-01 },
  { 495,  -4.4520E-01,   5.4910E-01,   1.3070E-01 },
  { 500,  -4.3500E-01,   6.2600E-01,   9.1000E-02 },
  { 505,  -4.1400E-01,   7.0970E-01,   5.8000E-02 },
  { 510,  -3.6730E-01,   7.9350E-01,   3.5700E-02 },
  { 515,  -2.8450E-01,   8.7150E-01,   2.0000E-02 },
  { 520,  -1.8550E-01,   9.4770E-01,   9.5000E-03 },
  { 525,  -4.3500E-02,   9.9450E-01,   7.0000E-04 },
  { 530,   1.2700E-01,   1.0203E+00,  -4.3000E-03 },
  { 535,   3.1290E-01,   1.0375E+00,  -6.4000E-03 },
  { 540,   5.3620E-01,   1.0517E+00,  -8.2000E-03 },
  { 545,   7.7220E-01,   1.0390E+00,  -9.4000E-03 },
  { 550,   1.0059E+00,   1.0029E+00,  -9.7000E-03 },
  { 555,   1.2710E+00,   9.6980E-01,  -9.7000E-03 },
  { 560,   1.5574E+00,   9.1620E-01,  -9.3000E-03 },
  { 565,   1.8465E+00,   8.5710E-01,  -8.7000E-03 },
  { 570,   2.1511E+00,   7.8230E-01,  -8.0000E-03 },
  { 575,   2.4250E+00,   6.9530E-01,  -7.3000E-03 },
  { 580,   2.6574E+00,   5.9660E-01,  -6.3000E-03 },
  { 585,   2.9151E+00,   5.0630E-01,  -5.3700E-03 },
  { 590,   3.0779E+00,   4.2030E-01,  -4.4500E-03 },
  { 595,   3.1613E+00,   3.3600E-01,  -3.5700E-03 },
  { 600,   3.1673E+00,   2.5910E-01,  -2.7700E-03 },
  { 605,   3.1048E+00,   1.9170E-01,  -2.0800E-03 },
  { 610,   2.9462E+00,   1.3670E-01,  -1.5000E-03 },
  { 615,   2.7194E+00,   9.3800E-02,  -1.0300E-03 },
  { 620,   2.4526E+00,   6.1100E-02,  -6.8000E-04 },
  { 625,   2.1700E+00,   3.7100E-02,  -4.4200E-04 },
  { 630,   1.8358E+00,   2.1500E-02,  -2.7200E-04 },
  { 635,   1.5179E+00,   1.1200E-02,  -1.4100E-04 },
  { 640,   1.2428E+00,   4.4000E-03,  -5.4900E-05 },
  { 645,   1.0070E+00,   7.8000E-05,  -2.2000E-06 },
  { 650,   7.8270E-01,  -1.3680E-03,   2.3700E-05 },
  { 655,   5.9340E-01,  -1.9880E-03,   2.8600E-05 },
  { 660,   4.4420E-01,  -2.1680E-03,   2.6100E-05 },
  { 665,   3.2830E-01,  -2.0060E-03,   2.2500E-05 },
  { 670,   2.3940E-01,  -1.6420E-03,   1.8200E-05 },
  { 675,   1.7220E-01,  -1.2720E-03,   1.3900E-05 },
  { 680,   1.2210E-01,  -9.4700E-04,   1.0300E-05 },
  { 685,   8.5300E-02,  -6.8300E-04,   7.3800E-06 },
  { 690,   5.8600E-02,  -4.7800E-04,   5.2200E-06 },
  { 695,   4.0800E-02,  -3.3700E-04,   3.6700E-06 },
  { 700,   2.8400E-02,  -2.3500E-04,   2.5600E-06 },
  { 705,   1.9700E-02,  -1.6300E-04,   1.7600E-06 },
  { 710,   1.3500E-02,  -1.1100E-04,   1.2000E-06 },
  { 715,   9.2400E-03,  -7.4800E-05,   8.1700E-07 },
  { 720,   6.3800E-03,  -5.0800E-05,   5.5500E-07 },
  { 725,   4.4100E-03,  -3.4400E-05,   3.7500E-07 },
  { 730,   3.0700E-03,  -2.3400E-05,   2.5400E-07 },
  { 735,   2.1400E-03,  -1.5900E-05,   1.7100E-07 },
  { 740,   1.4900E-03,  -1.0700E-05,   1.1600E-07 },
  { 745,   1.0500E-03,  -7.2300E-06,   7.8500E-08 },
  { 750,   7.3900E-04,  -4.8700E-06,   5.3100E-08 },
  { 755,   5.2300E-04,  -3.2900E-06,   3.6000E-08 },
  { 760,   3.7200E-04,  -2.2200E-06,   2.4400E-08 },
  { 765,   2.6500E-04,  -1.5000E-06,   1.6500E-08 },
  { 770,   1.9000E-04,  -1.0200E-06,   1.1200E-08 },
  { 775,   1.3600E-04,  -6.8800E-07,   7.5300E-09 },
  { 780,   9.8400E-05,  -4.6500E-07,   5.0700E-09 },
  { 785,   7.1300E-05,  -3.1200E-07,   3.4000E-09 },
  { 790,   5.1800E-05,  -2.0800E-07,   2.2700E-09 },
  { 795,   3.7700E-05,  -1.3700E-07,   1.5000E-09 },
  { 800,   2.7600E-05,  -8.8000E-08,   9.8600E-10 },
  { 805,   2.0300E-05,  -5.5300E-08,   6.3900E-10 },
  { 810,   1.4900E-05,  -3.3600E-08,   4.0700E-10 },
  { 815,   1.1000E-05,  -1.9600E-08,   2.5300E-10 },
  { 820,   8.1800E-06,  -1.0900E-08,   1.5200E-10 },
  { 825,   6.0900E-06,  -5.7000E-09,   8.6400E-11 },
  { 830,   4.5500E-06,  -2.7700E-09,   4.4200E-11 }  };

static const int spectrum_rgb_samples = sizeof(spectrum_rgb) / sizeof(spectrum_rgb[0]);

inline unsigned int get_nearest_rgb_index(double wavelength)
{
  unsigned int i = (spectrum_rgb_samples - 1)/2;
  double n = spectrum_rgb_samples/2.0;
  while(n > 0.5)
  {
    n /= 2.0;
    if(wavelength < spectrum_rgb[i][0] && i != 0)
      i -= static_cast<unsigned int>(n + 0.5);
    else if(wavelength > spectrum_rgb[i][0])
      i += static_cast<unsigned int>(n + 0.5);
    else
      return i;
  }
  return i;
}

inline const double* get_nearest_rgb(double wavelength)
{
  return spectrum_rgb[get_nearest_rgb_index(wavelength)];
}

#endif // SPRECTRUM2RGB_H
