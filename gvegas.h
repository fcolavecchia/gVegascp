#ifndef GVEGAS_H
#define GVEGAS_H

#ifndef __MAIN_LOGIC
#define EXTERN extern
#else
#define EXTERN
#endif

EXTERN int nBlockSize;
EXTERN double timeVegasCall;
EXTERN double timeVegasCallAndFill;
EXTERN double timeVegasMove;
EXTERN double timeVegasFill;
EXTERN double timeVegasRefine;

#undef EXTERN

#endif
