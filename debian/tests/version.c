#include <onnxruntime_c_api.h>

#include <stdio.h>

int main(void) {
  printf("%s\n", OrtGetApiBase()->GetVersionString());
  return 0;
}
