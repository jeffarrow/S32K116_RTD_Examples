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
Port_Ci_Icu_Ip_BlinkLed_S32K116.siz \


# All Target
all: Port_Ci_Icu_Ip_BlinkLed_S32K116.elf secondary-outputs

# Tool invocations
Port_Ci_Icu_Ip_BlinkLed_S32K116.elf: $(OBJS) C:/Users/140597/workspaceS32DS.3.6.0/Port_Ci_Icu_Ip_BlinkLed_S32K116/Project_Settings/Linker_Files/linker_flash_s32k116.ld $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Standard S32DS C Linker'
	arm-none-eabi-gcc -o "Port_Ci_Icu_Ip_BlinkLed_S32K116.elf" "@Port_Ci_Icu_Ip_BlinkLed_S32K116.args"  $(USER_OBJS)  -lc -lm -lgcc
	@echo 'Finished building target: $@'
	@echo ' '

Port_Ci_Icu_Ip_BlinkLed_S32K116.siz: Port_Ci_Icu_Ip_BlinkLed_S32K116.elf
	@echo 'Invoking: Standard S32DS Print Size'
	arm-none-eabi-size --format=berkeley Port_Ci_Icu_Ip_BlinkLed_S32K116.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) ./*
	-@echo ' '

secondary-outputs: $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
