################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CFG_SRCS += \
../appBLE_UartLog.cfg 

C_SRCS += \
../ICallBleAPI.c \
../ICallCC2650.c \
../uart_logs.c \
../util.c 

OBJS += \
./ICallBleAPI.obj \
./ICallCC2650.obj \
./uart_logs.obj \
./util.obj 

C_DEPS += \
./ICallBleAPI.d \
./ICallCC2650.d \
./uart_logs.d \
./util.d 

GEN_MISC_DIRS += \
./configPkg/ 

GEN_CMDS += \
./configPkg/linker.cmd 

GEN_OPTS += \
./configPkg/compiler.opt 

GEN_FILES += \
./configPkg/linker.cmd \
./configPkg/compiler.opt 

GEN_FILES__QUOTED += \
"configPkg\linker.cmd" \
"configPkg\compiler.opt" 

GEN_MISC_DIRS__QUOTED += \
"configPkg\" 

C_DEPS__QUOTED += \
"ICallBleAPI.d" \
"ICallCC2650.d" \
"uart_logs.d" \
"util.d" 

OBJS__QUOTED += \
"ICallBleAPI.obj" \
"ICallCC2650.obj" \
"uart_logs.obj" \
"util.obj" 

C_SRCS__QUOTED += \
"../ICallBleAPI.c" \
"../ICallCC2650.c" \
"../uart_logs.c" \
"../util.c" 


