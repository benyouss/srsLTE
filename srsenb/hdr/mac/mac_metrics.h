/**
 *
 * \section COPYRIGHT
 *
 * Copyright 2013-2017 Software Radio Systems Limited
 *
 * \section LICENSE
 *
 * This file is part of srsLTE.
 *
 * srsUE is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * srsUE is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * A copy of the GNU Affero General Public License can be found in
 * the LICENSE file in the top-level directory of this distribution
 * and at http://www.gnu.org/licenses/.
 *
 */

#ifndef ENB_MAC_METRICS_H
#define ENB_MAC_METRICS_H


namespace srsenb {

// MAC metrics per user   
  
struct mac_metrics_t
{
  uint16_t rnti; 
  int tx_pkts;
  int tx_errors;
  int tx_brate;
  int rx_pkts;
  int rx_errors;
  int rx_brate;
  int ul_buffer;
  int dl_buffer;
  float phr; 
};

} // namespace srsenb

#endif // ENB_MAC_METRICS_H
