################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
libPinovi.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: libPinovi.a secondary-outputs

# Tool invocations
libPinovi.a: $(OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR Archiver'
	avr-ar -r  "libPinovi.a" $(OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

libPinovi.lss: libPinovi.a
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S libPinovi.a  >"libPinovi.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: libPinovi.a
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega328p libPinovi.a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(ARCHIVES)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) libPinovi.a
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
