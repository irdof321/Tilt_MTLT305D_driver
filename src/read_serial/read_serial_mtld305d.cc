#include "read_serial/read_serial_mtld305d.h"
#include <algorithm> // for std::copy


/**ReadSerialMTLD305DData**/

ReadSerialMTLD305DData::ReadSerialMTLD305DData(unsigned short packet_type, char length, unsigned short checksum, char data[256]) 
: packet_type(packet_type), length(length), checksum(checksum)
{
    std::copy(data, data + 256, this->data);
}

ReadSerialMTLD305DData::~ReadSerialMTLD305DData() {}

/**ReadSerialMTLD305D**/

ReadSerialMTLD305D::ReadSerialMTLD305D() {}

ReadSerialMTLD305D::~ReadSerialMTLD305D() {}

void ReadSerialMTLD305D::openConnection()
{
    // TODO
}

void ReadSerialMTLD305D::readRawData(IMULowLevelData* data)
{
    // TODO
}

void ReadSerialMTLD305D::closeConnection()
{
    // TODO
}


