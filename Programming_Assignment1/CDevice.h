#include <iostream>

#pragma once

class CDevice
{
private:
	int			mUniqueID;
	std::string mDeviceName;
	std::string mManufacturer;
	bool		mStatus;
	bool		mConnection;
public:
	// Default Constructor
	CDevice();
	// Virtual Destructor
	virtual ~CDevice() = default;

	// Constructor with parameters
	CDevice(int id, std::string name, std::string manufacturer, bool status, bool connection);

	// Getter methods
	virtual int			getUniqueID()	 const { return mUniqueID; }
	virtual std::string getDeviceName()	 const { return mDeviceName; }
	virtual std::string getManufacturer() const { return mManufacturer; }
	virtual bool		getStatus()		 const { return mStatus; }
	virtual bool		getConnection()	 const { return mConnection; }

	// Setter methods
	virtual void setStatus	  (bool status)		{ mStatus = status; }
	virtual void setConnection(bool connection) { mConnection = connection; }

	// Device control methods
	void Activate();
	void Deactivate();
	bool CheckConnection();

	virtual void interactionEvent() = 0;
	virtual void viewInfo();
};

