################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../think_in_cpp/ch1/call_sys.cpp \
../think_in_cpp/ch1/hello_world.cpp 

OBJS += \
./think_in_cpp/ch1/call_sys.o \
./think_in_cpp/ch1/hello_world.o 

CPP_DEPS += \
./think_in_cpp/ch1/call_sys.d \
./think_in_cpp/ch1/hello_world.d 


# Each subdirectory must supply rules for building sources it contributes
think_in_cpp/ch1/%.o: ../think_in_cpp/ch1/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


