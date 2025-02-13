################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include generate/src/subdir.mk
-include board/subdir.mk
-include RTD/src/subdir.mk
-include Project_Settings/Startup_Code/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_SIZE += \
Wdog_Ip_Example_S32K116.siz \


# All Target
all: Wdog_Ip_Example_S32K116.elf secondary-outputs

# Tool invocations
Wdog_Ip_Example_S32K116.elf: $(OBJS) C:/Users/140597/OneDrive\ -\ Arrow\ Electronics,\ Inc/Documents/Customers/S32K116_RTD_Examples/Wdog_Ip_Example_S32K116/Project_Settings/Linker_Files/linker_flash_s32k116.ld $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Standard S32DS C Linker'
	arm-none-eabi-gcc -o "Wdog_Ip_Example_S32K116.elf" "@Wdog_Ip_Example_S32K116.args"  $(USER_OBJS)  -lc -lm -lgcc
	@echo 'Finished building target: $@'
	@echo ' '

Wdog_Ip_Example_S32K116.siz: Wdog_Ip_Example_S32K116.elf
	@echo 'Invoking: Standard S32DS Print Size'
	arm-none-eabi-size --format=berkeley Wdog_Ip_Example_S32K116.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) ./*
	-@echo ' '

secondary-outputs: $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
