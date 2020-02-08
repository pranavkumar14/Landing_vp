#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/pranavkumar14/Documents/aerial_robo/projet_ros/src/rotors_simulator/rotors_evaluation"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/pranavkumar14/Documents/aerial_robo/projet_ros/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/pranavkumar14/Documents/aerial_robo/projet_ros/install/lib/python2.7/dist-packages:/home/pranavkumar14/Documents/aerial_robo/projet_ros/build/rotors_evaluation/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/pranavkumar14/Documents/aerial_robo/projet_ros/build/rotors_evaluation" \
    "/usr/bin/python2" \
    "/home/pranavkumar14/Documents/aerial_robo/projet_ros/src/rotors_simulator/rotors_evaluation/setup.py" \
    build --build-base "/home/pranavkumar14/Documents/aerial_robo/projet_ros/build/rotors_evaluation" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/pranavkumar14/Documents/aerial_robo/projet_ros/install" --install-scripts="/home/pranavkumar14/Documents/aerial_robo/projet_ros/install/bin"