///10364950997046224390
/// This file was automatically generated using the VnV-Matcher executable. 
/// The matcher allows for automatic registration of all VnV plugins and injection 
/// points. Building the matcher requires Clang. If Clang is not available on this machine,
/// Registration code should be written manually. 
/// 

//PACKAGENAME: SWFFT

#include "VnV.h" 
const char* getFullRegistrationJson_SWFFT(){
	 return "{\"Communicator\":{\"docs\":\"\",\"name\":\"mpi\",\"package\":\"VNV\"},\"Conclusion\":\"\",\"InjectionPoints\":{\"forward\":{\"docs\":\"\",\"name\":\"forward\",\"packageName\":\"SWFFT\",\"parameters\":[{\"start\":\"double\"}],\"stages\":{\"Begin\":{\"docs\":\"\",\"info\":{\"Calling Function\":\"forward\",\"Calling Function Column\":3,\"Calling Function Line\":137,\"filename\":\"./Dfft.hpp\",\"lineColumn\":5,\"lineNumber\":79}}}}},\"Introduction\":\"\"}";}

INJECTION_REGISTRATION(SWFFT){
	VnV_Declare_Communicator("SWFFT","VNV","mpi");
	Register_Injection_Point(SWFFT,forward,"{\"start\":\"double\"}");
	REGISTER_FULL_JSON(SWFFT, getFullRegistrationJson_SWFFT);
};



