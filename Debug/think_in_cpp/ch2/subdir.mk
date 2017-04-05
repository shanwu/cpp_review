################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../think_in_cpp/ch2/extern_demo1.cpp \
../think_in_cpp/ch2/extern_demo2.cpp \
../think_in_cpp/ch2/vector_demo.cpp 

OBJS += \
./think_in_cpp/ch2/extern_demo1.o \
./think_in_cpp/ch2/extern_demo2.o \
./think_in_cpp/ch2/vector_demo.o 

CPP_DEPS += \
./think_in_cpp/ch2/extern_demo1.d \
./think_in_cpp/ch2/extern_demo2.d \
./think_in_cpp/ch2/vector_demo.d 


# Each subdirectory must supply rules for building sources it contributes
think_in_cpp/ch2/%.o: ../think_in_cpp/ch2/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


