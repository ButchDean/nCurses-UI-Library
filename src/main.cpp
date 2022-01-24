#include <UI.hpp>

int main()
{
  UI ui;
  ui.make_new_window (1, 1, 20, 10, "Main Window", true);
  ui.write_to_window (0, "Hello World!", false);
  ui.pause_until_input();

  return 0;
}

