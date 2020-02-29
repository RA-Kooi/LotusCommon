#ifndef d5b94e2c_f702_44b9_9789_ac371d14b25e
#define d5b94e2c_f702_44b9_9789_ac371d14b25e

#if defined(LOTUSCOMMON_DLL) || defined(LOTUSCOMMON_AS_DLL)
	#ifdef LOTUSCOMMON_AS_DLL
		#ifdef _WIN32
			#define LOTUSCOMMON_API __declspec(dllimport)
		#else
			#define LOTUSCOMMON_API
		#endif
		#define LOTUSCOMMON_LOCAL
	#else
		#ifdef _WIN32
			#define LOTUSCOMMON_API __declspec(dllexport)
			#define LOTUSCOMMON_LOCAL
		#elif (defined(__GNUC__) && (__GNUC__ >= 4))
			#define LOTUSCOMMON_API __attribute__ ((visibility("default")))
			#define LOTUSCOMMON_LOCAL __attribute__ ((visibility("hidden")))
		#endif
	#endif
#else
	#define LOTUSCOMMON_API
	#define LOTUSCOMMON_LOCAL
#endif

#endif // d5b94e2c_f702_44b9_9789_ac371d14b25e

