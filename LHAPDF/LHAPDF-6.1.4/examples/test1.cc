// -*- C++ -*-
// LHAPDFv5/v6 compatibility example

#include "LHAPDF/LHAPDF.h"
#include <iostream>
//using namespace LHAPDF;

int main() {
  const double x = 1e-3, Q = 200;
/*
  #if defined LHAPDF_MAJOR_VERSION && LHAPDF_MAJOR_VERSION == 6
  LHAPDF::PDF* pdf = LHAPDF::mkPDF("cteq6l1", 0);
  std::cout << "xf_g = " << pdf->xfxQ(21, x, Q) << std::endl;
  delete pdf;
  #else
*/
std::cout<<"@@@@@@@@@@"<<std::endl;
  LHAPDF::initPDFSet("cteq6l1", LHAPDF::LHGRID, 0);
  std::cout << "xf_g = " << LHAPDF::xfx(x, Q, 0) << std::endl;
//  #endif

  return 0;
}


//g++  -L `root-config --libdir` -lCore -lCint -lRIO -lNet -lHist -lGraf -lGraf3d -lGpad -lTree -lRint -lPostscript -lMatrix -lPhysics -lMathCore -lThread -lGui -lEG -lTreePlayer -lGeom -lGed -lRGL -lEve -pthread -lm -ldl -rdynamic `root-config --cflags`  `root-config --cflags --libs` -L $ROOTSYS/lib -L/afs/cern.ch/work/h/hbehnami/WPolar/LHAPDF/LHAPDF-6.1.4/../local/lib -lLHAPDF -I/afs/cern.ch/work/h/hbehnami/WPolar/LHAPDF/LHAPDF-6.1.4/../local/include -lHtml -lMinuit test.cc
