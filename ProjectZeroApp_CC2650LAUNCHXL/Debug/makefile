################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccsv6/tools/compiler/arm_15.12.3.LTS

GEN_OPTS__FLAG := --cmd_file="configPkg/compiler.opt"
GEN_CMDS__FLAG := -l"configPkg/linker.cmd"

ORDERED_OBJS += \
"./ICallBleAPI.obj" \
"./ICallCC2650.obj" \
"./uart_logs.obj" \
"./util.obj" \
"./Application/ProjectZero.obj" \
"./ICall/ICall.obj" \
"./ICall/ICallCC2650.obj" \
"./ICallBLE/ICallBleAPI.obj" \
"./ICallBLE/bleUserConfig.obj" \
"./Profiles/Button_Service.obj" \
"./Profiles/Data_Service.obj" \
"./Profiles/LED_Service.obj" \
"./Profiles/devinfoservice.obj" \
"./Profiles/gatt_uuid.obj" \
"./Profiles/gattservapp_util.obj" \
"./Profiles/peripheral.obj" \
"./Startup/CC2650_LAUNCHXL.obj" \
"./Startup/ccfg_appBLE.obj" \
"./Startup/main.obj" \
"./Utils/uart_logs.obj" \
"./Utils/util.obj" \
"D:/khalesi/sadeghi/Texas/dev.ti/ble_cc26xx_2_01_00_44423_cloud__win/simplelink/ble_cc26xx_2_01_00_44423_cloud/Projects/ble/common/cc26xx/CCS/cc26xx_ble_app.cmd" \
$(GEN_CMDS__FLAG) \
-l"C:/ti/tirtos_simplelink_2_13_00_06/packages/ti/drivers/lib/drivers_cc26xxware.aem3" \
-l"C:/ti/tirtos_simplelink_2_13_00_06/products/cc26xxware_2_21_01_15600/driverlib/bin/ccs/driverlib.lib" \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include Application/subdir_vars.mk
-include ICall/subdir_vars.mk
-include ICallBLE/subdir_vars.mk
-include Profiles/subdir_vars.mk
-include Startup/subdir_vars.mk
-include TOOLS/subdir_vars.mk
-include Utils/subdir_vars.mk
-include subdir_rules.mk
-include Application/subdir_rules.mk
-include ICall/subdir_rules.mk
-include ICallBLE/subdir_rules.mk
-include Profiles/subdir_rules.mk
-include Startup/subdir_rules.mk
-include TOOLS/subdir_rules.mk
-include Utils/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
ProjectZeroApp_CC2650LAUNCHXL.out \

EXE_OUTPUTS__QUOTED += \
"ProjectZeroApp_CC2650LAUNCHXL.out" \

BIN_OUTPUTS += \
ProjectZeroApp_CC2650LAUNCHXL.hex \

BIN_OUTPUTS__QUOTED += \
"ProjectZeroApp_CC2650LAUNCHXL.hex" \


# All Target
all: ProjectZeroApp_CC2650LAUNCHXL.out secondary-outputs

# Tool invocations
ProjectZeroApp_CC2650LAUNCHXL.out: $(OBJS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: ARM Linker'
	"C:/ti/ccsv6/tools/compiler/arm_15.12.3.LTS/bin/armcl" -mv7M3 --code_state=16 -me -O1 --opt_for_speed=0 -g --gcc --define=CC26XX --define=CC26XXWARE --define=USE_ICALL --define=xdc_runtime_Assert_DISABLE_ALL --define=Xxdc_runtime_Log_DISABLE_ALL --define=POWER_SAVING --define=DEBUG --define=HEAPMGR_SIZE=3000 --define=ICALL_MAX_NUM_ENTITIES=6 --define=ICALL_RAM0_ADDR=0x200043E8 --define=ICALL_STACK0_ADDR=0x0000E000 --define=MAX_NUM_BLE_CONNS=1 --define=ccs --define=GAPROLE_TASK_STACK_SIZE=520 --define=ICALL_MAX_NUM_TASKS=3 --define=xdc_FILE="\"\"" --define=UARTLOG_NUM_EVT_BUF=32 --diag_wrap=off --diag_warning=225 --diag_warning=255 --display_error_number --gen_func_subsections=on --abi=eabi -z -m"ProjectZeroApp_CC2650LAUNCHXL.map" --stack_size=256 --heap_size=0 -i"C:/ti/ccsv6/tools/compiler/arm_15.12.3.LTS/lib" -i"C:/ti/ccsv6/tools/compiler/arm_15.12.3.LTS/include" --reread_libs --define=ICALL_STACK0_ADDR=0x0000E000 --define=ICALL_RAM0_ADDR=0x200043E8 --diag_wrap=off --warn_sections --display_error_number --xml_link_info="ProjectZeroApp_CC2650LAUNCHXL_linkInfo.xml" --rom_model -o "ProjectZeroApp_CC2650LAUNCHXL.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

ProjectZeroApp_CC2650LAUNCHXL.hex: $(EXE_OUTPUTS)
	@echo 'Invoking: ARM Hex Utility'
	"C:/ti/ccsv6/tools/compiler/arm_15.12.3.LTS/bin/armhex" --memwidth=8 --romwidth=8 --intel -o "ProjectZeroApp_CC2650LAUNCHXL.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $@'
	@echo ' '
	@$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(GEN_MISC_FILES__QUOTED)$(EXE_OUTPUTS__QUOTED)$(GEN_FILES__QUOTED)$(BIN_OUTPUTS__QUOTED)$(GEN_OPTS__QUOTED)$(GEN_CMDS__QUOTED)
	-$(RMDIR) $(GEN_MISC_DIRS__QUOTED)
	-$(RM) "ICallBleAPI.d" "ICallCC2650.d" "uart_logs.d" "util.d" "Application\ProjectZero.d" "ICall\ICall.d" "ICall\ICallCC2650.d" "ICallBLE\ICallBleAPI.d" "ICallBLE\bleUserConfig.d" "Profiles\Button_Service.d" "Profiles\Data_Service.d" "Profiles\LED_Service.d" "Profiles\devinfoservice.d" "Profiles\gatt_uuid.d" "Profiles\gattservapp_util.d" "Profiles\peripheral.d" "Startup\CC2650_LAUNCHXL.d" "Startup\ccfg_appBLE.d" "Startup\main.d" "Utils\uart_logs.d" "Utils\util.d" 
	-$(RM) "ICallBleAPI.obj" "ICallCC2650.obj" "uart_logs.obj" "util.obj" "Application\ProjectZero.obj" "ICall\ICall.obj" "ICall\ICallCC2650.obj" "ICallBLE\ICallBleAPI.obj" "ICallBLE\bleUserConfig.obj" "Profiles\Button_Service.obj" "Profiles\Data_Service.obj" "Profiles\LED_Service.obj" "Profiles\devinfoservice.obj" "Profiles\gatt_uuid.obj" "Profiles\gattservapp_util.obj" "Profiles\peripheral.obj" "Startup\CC2650_LAUNCHXL.obj" "Startup\ccfg_appBLE.obj" "Startup\main.obj" "Utils\uart_logs.obj" "Utils\util.obj" 
	-@echo 'Finished clean'
	-@echo ' '

post-build:
	-@echo ' '

secondary-outputs: $(BIN_OUTPUTS)

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets

