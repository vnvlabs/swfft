#ifndef EuclideanError_H
#define EuclideanError_H

#include <math.h>

#include <iostream>
#include <vector>

#include "VnV.h"
#include "interfaces/ITest.h"

using namespace VnV;

/**
  Test SWFFT

**/
INJECTION_TEST(SWFFT, EuclideanError) {
  auto measured = GetRef_NoCheck("measured", std::vector<double>);
  auto exact = GetRef_NoCheck("exact",std::vector<double>);

  if (measured.size() != exact.size()) {
    double m1 = -1;
   engine->Put>Put("l2_error", m1);
   engine->Put("l1_error", m1);
   engine->Put("linf_error", m1);
    return FAILURE;
  }

  double l2(0), l1(0), linf(0);
  for (std::size_t i = 0; i < measured.size(); i++) {
    double diff = fabs(measured[i] - exact[i]);
    l1 += diff;
    l2 += diff * diff;
    linf = (diff > linf) ? diff : linf;
  }

  l2 = sqrt(l2);
 engine->Put("l2_error", l2);
 engine->Put("l1_error", l1);
 engine->Put("linf_error", linf);
  return SUCCESS;
}

#endif
