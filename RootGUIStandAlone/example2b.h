#ifndef EXAMPLE2B_H
#define EXAMPLE2B_H

#include <TGFrame.h>
class MyMainFrame : public TGMainFrame {
private:
   TRootEmbeddedCanvas *fEcanvas;
public:
   MyMainFrame(const TGWindow *p,UInt_t w,UInt_t h);
   virtual ~MyMainFrame() {    };
   void DoDraw(){  ...  };
   ClassDef(MyMainFrame,0);
};

#endif // EXAMPLE2B_H
