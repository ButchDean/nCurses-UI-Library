#  nCurses UI Library

## Description
    -

## Background
    - Where this came from
    - Why files are separated how they are

## How to Use

### Small Example:
```C++
#include "UI.hpp"

int main()
{
    UI ui;
    ui.make_new_window (1, 1, 30, 20, "Main", true, true);
    ui.write_to_window(0, "Hello World!", false);
    getch();
}

```

![Small Example](./Images/Small-Example.png)

### Large Example:

```C++
#include "UI.hpp"

int main()
{
    // Declare UI object
    UI ui;

    // Helper ints to make changing this particular UI configuration simple
    const unsigned int x = 1;
    const unsigned int y = 1;
    const unsigned int width = 30;
    const unsigned int height = 20;
    const unsigned int x_window_distance = 2;

    // Make windows
    // Note: window creation is a dynamic procedure
    ui.make_new_window (x + (0 * (x_window_distance + width)), y, width, height, "Left Window", true, false);
    ui.make_new_window (x + (1 * (x_window_distance + width)), y, width, height, "Middle Window", true, false);
    ui.make_new_window (x + (2 * (x_window_distance + width)), y, width, height, "Right Window", true, false);

    // Enumerations to make remembering a window easier
    enum windows
    {
        left,
        middle,
        right,
    };

    // Random character used to break input loops
    const char input_break = '[';

    // Live input into each of the windows
    while (ui.live_input (left,   false) != input_break);
    while (ui.live_input (middle, false) != input_break);
    while (ui.live_input (right,  false) != input_break);
}

```

![Large Example](./Images/Large-Example.png)
