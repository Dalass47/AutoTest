// header.h

#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
#include <vector>

// Class Client
class Client {
public:
    // Attributes
    std::string lastName;
    std::string firstName;
    std::string middleName;
    std::string carNumber;
    std::string contactInfo;

    // Methods
    void registerClient();
    void modifyData();
    void deleteClient();
};

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

// Class Parts
class Parts {
public:
    // Attributes
    std::string partName;
    double cost;
    int quantityInStock;

    // Methods
    void trackParts();
    void replenishStock();
    void useParts();
};

// Class FinancialOperations
class FinancialOperations {
public:
    // Attributes
    std::string carNumber;
    std::string typeOfService;
    double amount;
    std::string paymentDate;

    // Methods
    void registerOperation();
    void generateReports();
};

// Class Reports
class Reports {
public:
    // Attributes
    std::string typeOfReport;
    std::string period;
    double totalProfit;
    std::vector<std::string> completedWorks;

    // Methods
    void generateReport();
    void analyzeProfitability();
};

// Class Administrator
class Administrator {
public:
    // Methods
    void enterNewClient();
    void changeClientStatus();
    void deleteClient();
    void generateReports();
};

// Class NotificationSystem
class NotificationSystem {
public:
    // Methods
    void sendNotification();
    void receiveNotification();
};

// Class Interface
class Interface {
public:
    // Attributes
    std::string interfaceSettings;
    std::string operationResults;

    // Methods
    void displayInterface();
    void inputData();
    void displayResults();
    void authentication();
    void generateReport();
};

#endif // HEADER_H
