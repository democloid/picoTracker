
#ifndef _SERVICE_H_
#define _SERVICE_H_

#include "Foundation/T_SimpleList.h"
#include "SubService.h"

class Service : protected T_SimpleList<SubService> {
public:
  Service(int fourCC);
  virtual ~Service();
  virtual void Register(SubService *);
  virtual void Unregister(SubService *);
  int GetFourCC() { return fourCC_; };

private:
  int fourCC_;
};
#endif
