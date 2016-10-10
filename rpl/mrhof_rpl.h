#ifndef _MRHOF_RPL_H_
#define _MRHOF_RPL_H_

#include <stdint.h>
#include <stdbool.h>

#include "../util/list.h"
#include "../util/defs.h"

#define N_TIMESLOTS_MRHOF_RPL  (N_TIMESLOTS_PER_KA * 5)   // Number of timeslot for each RPL update

bool mrhofUpdateDAGRanks(Node_t *node);

#endif // _MRHOF_RPL_H_

