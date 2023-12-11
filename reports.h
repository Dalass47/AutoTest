#ifndef REPORTS
#define REPORTS

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

#endif // REPORTS

