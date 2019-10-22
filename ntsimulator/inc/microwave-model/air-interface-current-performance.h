/*
 * air-interface-current-performance.h
 *
 *  Created on: Feb 15, 2019
 *      Author: parallels
 */

#ifndef EXAMPLES_NTSIMULATOR_AIR_INTERFACE_CURRENT_PERFORMANCE_H_
#define EXAMPLES_NTSIMULATOR_AIR_INTERFACE_CURRENT_PERFORMANCE_H_

#include "utils.h"

int air_interface_current_performance_cb(const char *xpath, sr_val_t **values, size_t *values_cnt,
        uint64_t request_id, const char *original_xpath, void *private_ctx);

#endif /* EXAMPLES_NTSIMULATOR_AIR_INTERFACE_CURRENT_PERFORMANCE_H_ */
