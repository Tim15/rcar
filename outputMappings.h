typedef enum PinType {
  PIN_ENABLE,
  PIN_RIGHT,
  PIN_LEFT
} PinType

class Mapping {
public:
int[] pinIDs;
PinType[] mapping;
}

class OutputMapping {
  virtual void init();
  virtual Mapping getMappings();
}
