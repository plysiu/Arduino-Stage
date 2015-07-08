#include <Stage.h>
Button Stage::up = Button(2, PULLUP);
Button Stage::down = Button(3, PULLUP);
/**
 *
 */
unsigned int Stage::value = 0;
/**
 *
 */
void Stage::increase() {
  if (Stage::value < 9) {
    Stage::value++;
  }
};
/**
 *
 */
void Stage::decrease() {
  if (Stage::value > 0) {
    Stage::value--;
  }
};
void Stage::check() {
  if (up.uniquePress()) {
    Stage::increase();
  }
  if (down.uniquePress()) {
    Stage::decrease();
  }
};