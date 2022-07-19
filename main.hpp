#include <string>

template<typename T>
struct Position {
  T x, y, z;
};

class Entity {
public:
  Entity(unsigned char *entity) {
    (void) entity; // Variable is unused; pretend to use it to suppress warnings
  }

  void _get_pos(float *x, float *y, float *z) {
    *x = 1.2;
    *y = 3.4;
    *z = 5.6;
  }

  template<typename T>
  Position<T> get_pos() {
    float x, y, z;
    _get_pos(&x, &y, &z); // Use underlying get_pos()

    return (Position<T>) {
      (T) x,
      (T) y,
      (T) z
    };
  }

  std::string get_pos_str() {
    float x, y, z;
    _get_pos(&x, &y, &z); // Ditto

    return (
      std::to_string(x) + ", " +
      std::to_string(y) + ", " +
      std::to_string(z)
    );
  }
};
