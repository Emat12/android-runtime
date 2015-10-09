#include "v8.h"
#include <string>
#include <vector>

#ifndef UTIL_H_
#define UTIL_H_

namespace tns
{
	class Util
	{
	public:
		static std::string ToJniName(const std::string& signature);

		static std::string JniClassPathToCanonicalName(const std::string& jniClassPath);

		static void SplitString(const std::string& str, const std::string& delimiters, std::vector<std::string>& tokens);

		static std::string ConvertFromJniToCanonicalName(const std::string& name);

		static std::string ConvertFromCanonicalToJniName(const std::string& name);

		static bool StartsWith(const std::string& s, const std::string& prefix);

		static std::string GetStackTrace(int frameCount);
	};
}

#endif /* UTIL_H_ */
