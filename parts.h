#ifndef PARTS
#define PARTS

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

#endif // PARTS

