execute_process(COMMAND "/home/pranavkumar14/Documents/aerial_robo/projet_ros/build/rqt_rotors/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/pranavkumar14/Documents/aerial_robo/projet_ros/build/rqt_rotors/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
