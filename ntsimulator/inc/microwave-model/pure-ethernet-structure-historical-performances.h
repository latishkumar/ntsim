/*
 * pure-ethernet-structure-historical-performances.h
 *
 *  Created on: Feb 15, 2019
 *      Author: parallels
 */

#ifndef EXAMPLES_NTSIMULATOR_PURE_ETHERNET_STRUCTURE_HISTORICAL_PERFORMANCES_H_
#define EXAMPLES_NTSIMULATOR_PURE_ETHERNET_STRUCTURE_HISTORICAL_PERFORMANCES_H_

#include "utils.h"

int pure_ethernet_structure_historical_performances_cb(const char *xpath, sr_val_t **values, size_t *values_cnt,
        uint64_t request_id, const char *original_xpath, void *private_ctx);

#endif /* EXAMPLES_NTSIMULATOR_PURE_ETHERNET_STRUCTURE_HISTORICAL_PERFORMANCES_H_ */