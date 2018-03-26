#include "ViewerFigures.hpp"

ViewerFigures::ViewerFigures(int argc, char** argv) : _kit(argc, argv) {
  _window.set_title("Principale");
  _window.set_default_size(640,480);
}

void ViewerFigures::run() {
  _kit.run(_window);
}
