################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../generate/src/Clock_Ip_Cfg.c \
../generate/src/Flexio_I2c_Ip_VS_0_PBcfg.c \
../generate/src/Flexio_Mcl_Ip_VS_0_PBcfg.c \
../generate/src/IntCtrl_Ip_Cfg.c \
../generate/src/Lpi2c_Ip_VS_0_PBcfg.c \
../generate/src/OsIf_Cfg.c 

OBJS += \
./generate/src/Clock_Ip_Cfg.o \
./generate/src/Flexio_I2c_Ip_VS_0_PBcfg.o \
./generate/src/Flexio_Mcl_Ip_VS_0_PBcfg.o \
./generate/src/IntCtrl_Ip_Cfg.o \
./generate/src/Lpi2c_Ip_VS_0_PBcfg.o \
./generate/src/OsIf_Cfg.o 

C_DEPS += \
./generate/src/Clock_Ip_Cfg.d \
./generate/src/Flexio_I2c_Ip_VS_0_PBcfg.d \
./generate/src/Flexio_Mcl_Ip_VS_0_PBcfg.d \
./generate/src/IntCtrl_Ip_Cfg.d \
./generate/src/Lpi2c_Ip_VS_0_PBcfg.d \
./generate/src/OsIf_Cfg.d 


# Each subdirectory must supply rules for building sources it contributes
generate/src/%.o: ../generate/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@generate/src/Clock_Ip_Cfg.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


