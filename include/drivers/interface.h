#ifndef IMU_INTERFACE_H
#define IMU_INTERFACE_H


class IMUData
{
public:
    IMUData() = default;
    virtual ~IMUData() = default;
};

class IMUInterface
{
public:
    IMUInterface() = default;
    virtual ~IMUInterface() = default;

    // High-level IMU functionalities
    virtual void initialize() = 0;
    virtual void readProcessedData(IMULowLevelData* data) = 0;
    virtual void shutdown() = 0;

protected:
    // Protected members (if any)
};

class IMULowLevelData
{
    public:
        IMULowLevelData() = default;
        virtual ~IMULowLevelData() = default;
};

class IMULowLevelInterface
{
public:
    IMULowLevelInterface() = default;
    virtual ~IMULowLevelInterface() = default;

    // Low-level IMU operations
    virtual void openConnection() = 0;
    /**
     * example preambule/type/size/data/checksum
    */
    // virtual void readRawData(IMULowLevelData* data) = 0; // Replace with actual data type
    virtual void closeConnection() = 0;

protected:
    // Protected members (if any)
};



#endif // IMU_INTERFACE_H
