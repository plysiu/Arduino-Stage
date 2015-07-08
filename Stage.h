
#include <Button.h>
class Stage {
  private:
    static Button up;
    static Button down;
  public:
    static unsigned int value;
    enum Name  {
      HEATING_METHANOL = 1,
      METHANOL = 2,
      HEATING_ETHANOL = 3,
      ETHANOL = 4,
      HEATING_THIRD = 5,
      THIRD = 6,
      HEATING_FOURTH = 7,
      FOURTH = 8
    };
    static void increase();
    static void decrease();
    static void check();
};