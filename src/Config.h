/*
	This file is part of the muVM open source virtual machine.

	http://github.com/muVM/muVM
*/
#pragma once

/// @brief default configuration for building muVM
#define VM_USE_INLINING 1
#define VM_USE_CPP1     0

#ifdef  VM_SYSTEM_LINUX
#define VM_USE_LINUX 1
#endif

#ifdef  VM_SYSTEM_WINDOWS
#define VM_USE_WINDOWS 1
#endif

#ifdef  VM_SYSTEM_APPLE
#define VM_USE_APPLE 1
#endif

#define VM_USE_NOPLATFORM 0