#include <stdio.h>
#include <stdlib.h>
#include <xcselect.h>

#ifndef HOST_SDK_POLICY
#define HOST_SDK_POLICY XCSELECT_HOST_SDK_POLICY_LATEST
#endif

int main() {
  char *p = 0;

  if (xcselect_host_sdk_path(HOST_SDK_POLICY, &p))
    return 1;

  printf("%s\n", p);
  free(p);

  return 0;
}
