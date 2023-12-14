//8467656702857937604
/// This file was automatically generated using the VnV-Matcher executable. 
/// The matcher allows for automatic registration of all VnV plugins and injection 
/// points. Building the matcher requires Clang. If Clang is not available on this machine,
/// Registration code should be written manually. 
/// 

//PACKAGENAME: SWFFT

#include "VnV.h" 
const char* getFullRegistrationJson_SWFFT(){
	 return "{\"Conclusion\":{\"configuration\":{},\"description\":\"\",\"instructions\":\"\",\"params\":{},\"shortTitle\":\"\",\"template\":\"\",\"title\":\"\"},\"InjectionPoints\":{\"forward\":{\"docs\":{\"configuration\":{},\"description\":\"\",\"instructions\":\"\",\"params\":{},\"shortTitle\":\"\",\"template\":\"\",\"title\":\"\"},\"loop\":true,\"name\":\"forward\",\"packageName\":\"SWFFT\",\"parameters\":{\"void hacc::Dfft::forward(const complex_t *)\":{\"start\":\"double\"}},\"stages\":{\"Begin\":{\"docs\":{\"configuration\":{},\"description\":\"\",\"instructions\":\"\",\"params\":{},\"shortTitle\":\"\",\"template\":\"\",\"title\":\"\"},\"info\":{\"Calling Function\":\"forward\",\"Calling Function Column\":3,\"Calling Function Line\":146,\"filename\":\"./Dfft.hpp\",\"lineColumn\":5,\"lineNumber\":65}},\"End\":{\"info\":{\"Calling Function\":\"forward\",\"Calling Function Column\":3,\"Calling Function Line\":146,\"filename\":\"./Dfft.hpp\",\"lineColumn\":5,\"lineNumber\":74}}}}},\"Introduction\":{\"configuration\":{},\"description\":\"\",\"instructions\":\"\",\"params\":{},\"shortTitle\":\"\",\"template\":\"\",\"title\":\"\"}}";}

INJECTION_REGISTRATION(SWFFT){
	Register_Injection_Point("SWFFT","forward","{\"void hacc::Dfft::forward(const complex_t *)\":{\"start\":\"double\"}}");
	REGISTER_FULL_JSON(SWFFT, getFullRegistrationJson_SWFFT);
}



FORTRAN_INJECTION_REGISTRATION(SWFFT)

