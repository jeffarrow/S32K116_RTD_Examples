################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../generate/src/CDD_Rm_Cfg.c \
../generate/src/CDD_Rm_Ipw_PBcfg.c \
../generate/src/CDD_Rm_PBcfg.c \
../generate/src/Clock_Ip_Cfg.c \
../generate/src/Dma_Ip_Cfg.c \
../generate/src/Dma_Ip_PBcfg.c \
../generate/src/Dma_Mux_Ip_PBcfg.c \
../generate/src/Flexio_Mcl_Ip_PBcfg.c \
../generate/src/Flexio_Spi_Ip_Sa_PBcfg.c \
../generate/src/IntCtrl_Ip_Cfg.c \
../generate/src/Lpspi_Ip_Sa_PBcfg.c \
../generate/src/OsIf_Cfg.c 

OBJS += \
./generate/src/CDD_Rm_Cfg.o \
./generate/src/CDD_Rm_Ipw_PBcfg.o \
./generate/src/CDD_Rm_PBcfg.o \
./generate/src/Clock_Ip_Cfg.o \
./generate/src/Dma_Ip_Cfg.o \
./generate/src/Dma_Ip_PBcfg.o \
./generate/src/Dma_Mux_Ip_PBcfg.o \
./generate/src/Flexio_Mcl_Ip_PBcfg.o \
./generate/src/Flexio_Spi_Ip_Sa_PBcfg.o \
./generate/src/IntCtrl_Ip_Cfg.o \
./generate/src/Lpspi_Ip_Sa_PBcfg.o \
./generate/src/OsIf_Cfg.o 

C_DEPS += \
./generate/src/CDD_Rm_Cfg.d \
./generate/src/CDD_Rm_Ipw_PBcfg.d \
./generate/src/CDD_Rm_PBcfg.d \
./generate/src/Clock_Ip_Cfg.d \
./generate/src/Dma_Ip_Cfg.d \
./generate/src/Dma_Ip_PBcfg.d \
./generate/src/Dma_Mux_Ip_PBcfg.d \
./generate/src/Flexio_Mcl_Ip_PBcfg.d \
./generate/src/Flexio_Spi_Ip_Sa_PBcfg.d \
./generate/src/IntCtrl_Ip_Cfg.d \
./generate/src/Lpspi_Ip_Sa_PBcfg.d \
./generate/src/OsIf_Cfg.d 


# Each subdirectory must supply rules for building sources it contributes
generate/src/%.o: ../generate/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@generate/src/CDD_Rm_Cfg.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


