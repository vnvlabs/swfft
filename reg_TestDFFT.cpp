//5770155309620627691
/// This file was automatically generated using the VnV-Matcher executable. 
/// The matcher allows for automatic registration of all VnV plugins and injection 
/// points. Building the matcher requires Clang. If Clang is not available on this machine,
/// Registration code should be written manually. 
/// 

//PACKAGENAME: TestDFFT

#include "VnV.h" 
DECLARESUBPACKAGE(SWFFT)
const char* getFullRegistrationJson_TestDFFT(){
	 return "{\"Executables\":{\"configuration\":{},\"default\":{},\"description\":\"\",\"instructions\":\"\",\"lib\":\"executables\",\"params\":{},\"shortTitle\":\"\",\"template\":\"\\n \\n \\n\",\"title\":\"Test DFFT Application\"},\"SubPackages\":{\"SWFFT\":{\"docs\":{\"configuration\":{},\"description\":\"\",\"instructions\":\"\",\"params\":{},\"shortTitle\":\"\",\"template\":\"\",\"title\":\"\"},\"name\":\"SWFFT\",\"packageName\":\"TestDFFT\"}}}";}

INJECTION_REGISTRATION(TestDFFT){
	REGISTERSUBPACKAGE(SWFFT);
	REGISTER_FULL_JSON(TestDFFT, getFullRegistrationJson_TestDFFT);
}



FORTRAN_INJECTION_REGISTRATION(TestDFFT)

