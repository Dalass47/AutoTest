#ifndef MAINTENANCEWORKS
#define MAINTENANCEWORKS

// Class MaintenanceWorks
class MaintenanceWorks {
public:
    // Attributes
    std::string carNumber;
    std::string typeOfWork;
    std::string startDate;
    std::string endDate;
    std::string timeSpent;
    std::vector<std::string> usedParts;

    // Methods
    void trackWorks();
    void registerWork();
    void analyzeCosts();
};

#endif // MAINTENANCEWORKS

