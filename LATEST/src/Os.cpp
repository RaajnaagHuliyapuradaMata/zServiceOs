#include "Os.h"

#include "Swc_Os.h"
#include "EcuM.h"

class_Os Os;

static void Activate_Task(void){
   EcuM.StartupTwo();
}

void class_Os::Start(void){
   Swc_Os.StartupHook();
   Activate_Task();
}
