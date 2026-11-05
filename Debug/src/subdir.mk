################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/bubblesort.cpp \
../src/combsort.cpp \
../src/heapsort.cpp \
../src/helper_fns.cpp \
../src/lab5.cpp \
<<<<<<< HEAD
../src/main.cpp \
=======
>>>>>>> branch 'main' of git@github.com:PauloPAPP/Cpp-search-algorithms.git
../src/mergesort.cpp \
../src/quicksort.cpp \
../src/selectionsort.cpp \
../src/shellsort.cpp 

CPP_DEPS += \
./src/bubblesort.d \
./src/combsort.d \
./src/heapsort.d \
./src/helper_fns.d \
./src/lab5.d \
<<<<<<< HEAD
./src/main.d \
=======
>>>>>>> branch 'main' of git@github.com:PauloPAPP/Cpp-search-algorithms.git
./src/mergesort.d \
./src/quicksort.d \
./src/selectionsort.d \
./src/shellsort.d 

OBJS += \
./src/bubblesort.o \
./src/combsort.o \
./src/heapsort.o \
./src/helper_fns.o \
./src/lab5.o \
<<<<<<< HEAD
./src/main.o \
=======
>>>>>>> branch 'main' of git@github.com:PauloPAPP/Cpp-search-algorithms.git
./src/mergesort.o \
./src/quicksort.o \
./src/selectionsort.o \
./src/shellsort.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
<<<<<<< HEAD
	-$(RM) ./src/bubblesort.d ./src/bubblesort.o ./src/combsort.d ./src/combsort.o ./src/heapsort.d ./src/heapsort.o ./src/helper_fns.d ./src/helper_fns.o ./src/lab5.d ./src/lab5.o ./src/main.d ./src/main.o ./src/mergesort.d ./src/mergesort.o ./src/quicksort.d ./src/quicksort.o ./src/selectionsort.d ./src/selectionsort.o ./src/shellsort.d ./src/shellsort.o
=======
	-$(RM) ./src/bubblesort.d ./src/bubblesort.o ./src/combsort.d ./src/combsort.o ./src/heapsort.d ./src/heapsort.o ./src/helper_fns.d ./src/helper_fns.o ./src/lab5.d ./src/lab5.o ./src/mergesort.d ./src/mergesort.o ./src/quicksort.d ./src/quicksort.o ./src/selectionsort.d ./src/selectionsort.o ./src/shellsort.d ./src/shellsort.o
>>>>>>> branch 'main' of git@github.com:PauloPAPP/Cpp-search-algorithms.git

.PHONY: clean-src

