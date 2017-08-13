/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.8
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_QtNetCoreQml_WRAP_H_
#define SWIG_QtNetCoreQml_WRAP_H_

class SwigDirector_NetTypeInfoCallbacks : public NetTypeInfoCallbacks, public Swig::Director {

public:
    SwigDirector_NetTypeInfoCallbacks();
    virtual ~SwigDirector_NetTypeInfoCallbacks();
    virtual bool isValidType(char *typeName);
    virtual void BuildTypeInfo(NetTypeInfo *typeInfo);

    typedef unsigned int (SWIGSTDCALL* SWIG_Callback0_t)(char *);
    typedef void (SWIGSTDCALL* SWIG_Callback1_t)(void *);
    void swig_connect_director(SWIG_Callback0_t callbackisValidType, SWIG_Callback1_t callbackBuildTypeInfo);

private:
    SWIG_Callback0_t swig_callbackisValidType;
    SWIG_Callback1_t swig_callbackBuildTypeInfo;
    void swig_init_callbacks();
};


#endif