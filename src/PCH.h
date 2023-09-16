#pragma once

//#define DEBUG

#include "RE/Skyrim.h"
#include "SKSE/SKSE.h"

#pragma warning(push)
#ifdef DEBUG
#	include <spdlog/sinks/basic_file_sink.h>
#else
#	include <spdlog/sinks/msvc_sink.h>
#endif
#pragma warning(pop)

using namespace std::literals;

namespace logger = SKSE::log;

#define DLLEXPORT __declspec(dllexport)

#include "Version.h"
#include "AutoTOML.hpp"
#include "Util.h"
#include "Settings.h"
#include "UselessFenixUtils.h"

#ifdef GetObject
#	undef GetObject
#endif
