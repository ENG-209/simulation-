/*!
* \file    Process.hpp
*
* \brief   .
*
*
* \authors  Sharma, Torchet,
*                Esha, Tristan,
*                esha.sharma@epfl.ch
*                tristan.torchet@epfl.ch
*
* \date     28/10/2019
*/

#ifndef Process_hpp
#define Process_hpp

class Process{
   
public:
    
    Process();
    virtual void run() = 0;
    virtual ~Process();
   
protected:
   


};




#endif /* Process_hpp */
