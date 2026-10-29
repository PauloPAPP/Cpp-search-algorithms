################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Asort.cpp \
../src/Bsort.cpp \
../src/bubblesort.cpp \
../src/helper_fns.cpp \
../src/lab5.cpp \
../src/main.cpp \
../src/mergesort.cpp 

CPP_DEPS += \
./src/Asort.d \
./src/Bsort.d \
./src/bubblesort.d \
./src/helper_fns.d \
./src/lab5.d \
./src/main.d \
./src/mergesort.d 

OBJS += \
./src/Asort.o \
./src/Bsort.o \
./src/bubblesort.o \
./src/helper_fns.o \
./src/lab5.o \
./src/main.o \
./src/mergesort.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Asort.d ./src/Asort.o ./src/Bsort.d ./src/Bsort.o ./src/bubblesort.d ./src/bubblesort.o ./src/helper_fns.d ./src/helper_fns.o ./src/lab5.d ./src/lab5.o ./src/main.d ./src/main.o ./src/mergesort.d ./src/mergesort.o

.PHONY: clean-src

