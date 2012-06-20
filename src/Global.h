/*
	This file is part of the muVM open source virtual machine.

	http://github.com/muVM/muVM
*/
#pragma once

/// @brief platform detection
/// @todo implement platform detection for other compilers
#ifdef _M_X86
#define VM_PLATFORM_X86
#endif

#ifdef _M_X86_64
#define VM_PLATFORM_x86_64
#endif

/// @brief system detection
#ifdef WIN32
#define VM_SYSTEM_WINDOWS
#endif

#ifdef _linux
#define VM_SYSTEM_LINUX
#endif

#ifdef _APPLE
#define VM_SYSTEM_APPLE
#endif

/// @brief include configuration
#include "Config.h"

/// @brief default configuration for building muVM

/// @brief use internal inlining optimizations
#ifndef VM_USE_INLINING
#define VM_USE_INLINING   1
#endif

/// @brief do not compile os specific features
#ifndef VM_USE_NOPLATFORM
#define VM_USE_NOPLATFORM 0
#endif

/// @brief compile linux specific modules
#ifndef VM_USE_LINUX
#define VM_USE_LINUX      0
#endif

/// @brief compile windows specific modules
#ifndef VM_USE_WINDOWS
#define VM_USE_WINDOWS    0
#endif

/// @brief compile cpp11 specific features
#ifndef VM_USE_CPP11
#define VM_USE_CPP11      0
#endif

/// @brief basic inline
#if ( VM_USE_INLINING ) 
#define VM_INLINE inline
#else
#define VM_INLINE
#endif

#define VM_FORCE_INLINE inline