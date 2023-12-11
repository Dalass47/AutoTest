#ifndef FINANCIALOPERATIONS
#define FINANCIALOPERATIONS

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

#endif // FINANCIALOPERATIONS

