#include "Status.h"
#include <stdarg.h>
#include <stdio.h>
// #include <windows.h>

void Status::Set(const char *fmt, ...) {

  Status *status = Status::GetInstance();
  if (!status)
    return;

  char buffer[128];
  va_list args;
  va_start(args, fmt);

  vsprintf(buffer, fmt, args);
  status->Print(buffer);

  va_end(args);
}
