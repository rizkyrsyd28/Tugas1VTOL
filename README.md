<div align="center">
  <h1 align="center" style="font-size: xxx-large">SOLUSI TUGAS 1 VTOL</h1>
  <P align="center">
    Talker, Listener, dan Control TurtleSim
    <br />
  </P>
</div>

## STRUKTUR
    .
    |
    ├── CMakeLists.txt
    ├── include
    │   └── rizky_pkg
    │       ├── myListener.h
    │       ├── myTalker.h
    │       └── myTurtle.h
    ├── msg
    │   ├── subTest.msg
    │   └── Test.msg
    ├── package.xml
    └── src
        ├── listener.cpp
        ├── myListener.cpp
        ├── myTalker.cpp
        ├── myTurtle.cpp
        ├── talker.cpp
        └── turtle.cpp

## HOW TO RUN
1. `cd [path/to/your_ws]`
2. `catkin_make`
3. `source devel/setup.bash`
4. `roscore`
5. `rosrun rizky_pkg talker` or `rosrun rizky_pkg listener` or `rosrun rizky_pkg turtle`
