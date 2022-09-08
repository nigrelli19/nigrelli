#!/usr/bin/env python

import os, re, string, subprocess, sys, importlib
Import('env')
sys.path.append(os.getenv("MUSE_WORK_DIR")+'/site_scons')
#------------------------------------------------------------------------------
# print("Stntuple/SConscript:muse branch: PWD:"+os.getenv("PWD"))

# pass the package name as a parameter

x = subprocess.call(os.getenv("MUSE_WORK_DIR")+'/nigrelli/scripts/build_config nigrelli',shell=True)
# print("Stntuple/SConscript back from build_config_muse")

nigrelli_env = env.Clone()
#------------------------------------------------------------------------------
# done
#------------------------------------------------------------------------------
exec(open(os.environ['MUSE_WORK_DIR']+"/site_scons/stntuple_site_init.py").read())

from stntuple_helper    import *

nigrelli_env.Append(BUILDERS = {'StntupleCodegen'  : stntuple_codegen })
nigrelli_env.Append(BUILDERS = {'StntupleRootCint' : stntuple_rootcint})

nigrelli_env['CPPPATH' ].append(os.environ['MUSE_WORK_DIR']+'/include');

nigrelli_env.Append(FORTRANPATH = [os.environ['MUSE_WORK_DIR']+'/include']);

# print(nigrelli_env.Dump())

Export('nigrelli_env')
Export('stntuple_helper')
