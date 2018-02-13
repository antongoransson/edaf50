#include "nameserverinterface.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <unordered_map>

class UMNS : public NameServerInterface {
public:
  UMNS();
  void insert(const HostName& hn, const IPAddress& ip) override;
  bool remove(const HostName& hn) override;
  IPAddress lookup(const HostName& hn) const override;
private:
  std::unordered_map<HostName, unsigned int> nameservers;
};
