#! /usr/bin/env python

import os
from distutils.core import setup
from glob import glob
from distutils.extension import Extension

incdir_src = os.path.abspath("../../include")
incdir_build = os.path.abspath("../../include")
libdir = os.path.abspath("../../src/.libs")

ext = Extension("lhapdf",
                ["lhapdf.cpp"],
                include_dirs = [incdir_src, incdir_build],
                extra_compile_args= "-I/afs/cern.ch/sw/lcg/external/Boost/1.47.0_python2.6/x86_64-slc5-gcc43-opt/include/boost-1_47 -I/afs/cern.ch/work/h/hbehnami/WPolar/LHAPDF/LHAPDF-6.1.4/../local/include".split(),
                library_dirs = [libdir],
                language = "C++",
                libraries = ["stdc++", "LHAPDF"])

setup(name = "LHAPDF",
      version = "6.1.4",
      ext_modules = [ext])
