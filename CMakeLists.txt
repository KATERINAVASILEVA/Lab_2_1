cmake_minimum_required(VERSION 3.15) # Проверка версии CMake.
									 # Если версия установленой программы
									 # старее указаной, произайдёт аварийный выход.

set(PROJECT_NAME Lab_2_1)				 # имя проекта		 
project("${PROJECT_NAME}")


set(CMAKE_CXX_STANDARD 17)			 # устанавливаем 17 стандарт языка
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)




# добавляем директории
include_directories("inc/")
	

add_executable("${PROJECT_NAME}" main.cpp src/func.cpp inc/func.hpp)
		
file(COPY "assets" DESTINATION "/")								