#include <iostream>
#include <fstream>
#include <iomanip>
#include <unistd.h>
#include <cstdlib>
#include <new>
#include <algorithm>    // std::reverse
#include <iterator>
#include "checkPacket.h"
#include "checkSum.h"
#include <vector>
#include <memory>

using namespace std;

//void packetIdentifier2(unsigned char uc, std::vector<string> &goodData,std::vector<string> &badData,std::string &buf);
void packetIdentifier2(unsigned char uc,std::vector<string> &badData,std::string &buf,std::string header);



//void packetIdentifier2(unsigned char uc, std::vector<string> &goodData,std::vector<string> &badData); // this one works

//void handleData(std::vector<dataStick>& buf,std::vector<string> &goodData,std::vector<string> &badData);

