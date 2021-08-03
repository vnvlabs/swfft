
#include "VnV.h"
#include "complex-type.h"

using namespace VnV; 

class ComplexDataType : public IDataType {

public:
   complex_t data;

   ComplexDataType() {}


public:

  complex_t get() { return data; }

  void setData(void* dat) override {
    data =  *((complex_t*) dat);
  }

  long long maxSize() { return 2*sizeof(double); }

  long long pack(void* buffer)i override {
    double* b = (double*) buffer;
    b[0] = std::real(data);
    b[1] = std::imag(data);
    return 2;
  }

  void unpack(void* buffer) {
    double* dbuff = (double*) buffer;	  
    data = complex_t(dbuff[0],dbuff[1]);
  }

  void axpy(double alpha, Communication::IDataType_ptr y) {
  	
  }


  int compare(Communication::IDataType_ptr y) {
 	//TODO
  }


  void mult(Communication::IDataType_ptr y) {
  	data = 
  }


  void Put(IOutputEngine* engine) override {
    engine->Put("value", get());
  }

  std::vector<PutData> getLocalPutData() override {
    PutData p;
    p.datatype = dtype;
    p.count = 1;
    p.name = "value";
    return {p};
  }
  void* getPutData(int iteration) override {
    return &data;
  }
};


INJECTION_DATATYPE(VNVPACKAGENAME, string, std::string) {
  return new VnV::VNVPACKAGENAME::DataTypes::StringDataType<1024,std::string>(
      SupportedDataType::STRING,
      [](const std::string &a){return a; },
      [](char * a){ return std::string(a);},
      [](const std::string &o1, const std::string &o2){ return o1.compare(o2);}
  );
}
