#ifndef JNILOCALREF_H_
#define JNILOCALREF_H_

#include "JEnv.h"
#include "v8.h"

namespace tns
{
	class JniLocalRef
	{
	public:
		JniLocalRef();

		JniLocalRef(jobject obj);

		JniLocalRef(jclass obj);

		JniLocalRef(const JniLocalRef& rhs);

		~JniLocalRef();

		bool IsNull() const;

		JniLocalRef& operator=(const JniLocalRef& rhs);

		operator jobject() const;

		operator jclass() const;

		operator jstring() const;

		operator jthrowable() const;

		operator jarray() const;

		operator jbyteArray() const;

		operator jshortArray() const;

		operator jintArray() const;

		operator jlongArray() const;

		operator jfloatArray() const;

		operator jdoubleArray() const;

		operator jbooleanArray() const;

		operator jcharArray() const;

		operator jobjectArray() const;

	private:

		jobject m_obj;
	};
}


#endif /* JNILOCALREF_H_ */
