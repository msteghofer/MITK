/*===================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center,
Division of Medical and Biological Informatics.
All rights reserved.

This software is distributed WITHOUT ANY WARRANTY; without
even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.

See LICENSE.txt or http://www.mitk.org for details.

===================================================================*/

#ifndef mitkRegEvaluationObject_h
#define mitkRegEvaluationObject_h

//MITK
#include <mitkImage.h>

//MatchPoint
#include <mapRegistrationBase.h>
#include <mapRegistration.h>
#include <mapExceptionObjectMacros.h>
#include <mapContinuousElements.h>

//MITK
#include "mitkMAPRegistrationWrapper.h"
#include "MitkMatchPointRegistrationExports.h"

namespace mitk
{
  /*!
  \brief RegEvaluationObject
  Class that containes all data to realize an evaluation of registrations via images.
  */
  class MITKMATCHPOINTREGISTRATION_EXPORT RegEvaluationObject: public mitk::BaseData
  {
  public:

    mitkClassMacro( RegEvaluationObject, BaseData );

    itkNewMacro( Self );

    /**
    * Pass through to the target image that defines the region
    */
    virtual void SetRequestedRegionToLargestPossibleRegion();

    /**
    * Pass through to the target image that defines the region
    */
    virtual bool RequestedRegionIsOutsideOfTheBufferedRegion();

    /**
    * Pass through to the target image that defines the region
    */
    virtual bool VerifyRequestedRegion();

    /**
    * Pass through to the target image that defines the region
    */
    virtual void SetRequestedRegion(const itk::DataObject*);

    itkSetObjectMacro(Registration, mitk::MAPRegistrationWrapper);

    /**takes the input image, rescales it and converts it to pixel type int to be used for visualization as target image*/
    void SetTargetImage(const mitk::Image* tImg);
    /**takes the input image, rescales it and converts it to pixel type int to be used for visualization as mapped moving*/
    void SetMovingImage(const mitk::Image* mImg);

    itkGetObjectMacro(Registration, mitk::MAPRegistrationWrapper);
    itkGetObjectMacro(TargetImage, mitk::Image);
    itkGetObjectMacro(MovingImage, mitk::Image);

    itkGetConstObjectMacro(Registration, mitk::MAPRegistrationWrapper);
    itkGetConstObjectMacro(TargetImage, mitk::Image);
    itkGetConstObjectMacro(MovingImage, mitk::Image);

  protected:
    typedef ::itk::Image<unsigned char, 3> InternalImageType;

    template <typename TPixelType, unsigned int VImageDimension >
    void doConversion(const ::itk::Image<TPixelType,VImageDimension>* input, mitk::Image::Pointer& result) const;

    virtual void PrintSelf (std::ostream &os, itk::Indent indent) const;

    RegEvaluationObject();
    virtual ~RegEvaluationObject();

    mitk::MAPRegistrationWrapper::Pointer m_Registration;
    mitk::Image::Pointer m_TargetImage;
    mitk::Image::Pointer m_MovingImage;

  private:
    RegEvaluationObject& operator = (const RegEvaluationObject&);
    RegEvaluationObject(const RegEvaluationObject&);
  };

}

#endif

