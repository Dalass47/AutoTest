#ifndef CLIENT
#define CLIENT

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

#endif // CLIENT

