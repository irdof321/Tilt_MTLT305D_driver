#ifndef READ_SERIAL_MTLD305D_H
#define READ_SERIAL_MTLD305D_H

#include <drivers/interface.h>



class ReadSerialMTLD305DData : public IMULowLevelData
{
public:
    ReadSerialMTLD305DData(unsigned short packet_type, char length, unsigned short checksum, const char data[256])
    ~ReadSerialMTLD305DData();

    private:
        unsigned short packet_type;
        char length;
        unsigned short checksum;
        char data[256];
};

class ReadSerialMTLD305D : public IMULowLevelInterface
{
public:
    ReadSerialMTLD305D();
    ~ReadSerialMTLD305D();

    // Low-level IMU operations
    void openConnection();
    /**
     * example preambule/type/size/data/checksum
    */
    void readRawData(IMULowLevelData* data); // Replace with actual data type
    void closeConnection();

protected:
    // Protected members (if any)
};  


#endif // READ_SERIAL_MTLD305D_H