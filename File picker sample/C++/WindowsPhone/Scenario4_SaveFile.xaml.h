﻿//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************

//
// Scenario4.xaml.h
// Declaration of the Scenario4 class
//

#pragma once

#include "pch.h"
#include "Scenario4_SaveFile.g.h"
#include "MainPage.xaml.h"

#include "ContinuationManager.h"

namespace SDKSample
{
    namespace FilePicker
    {
        /// <summary>
        /// Implement IFileSavePickerContinuable interface, in order that Continuation Manager can automatically
        /// trigger the method to process returned file.
        /// </summary>
        public ref class Scenario4 sealed : IFileSavePickerContinuable
        {
        public:
            Scenario4();
            virtual void ContinueFileSavePicker(FileSavePickerContinuationEventArgs^ args);

        private:
            MainPage^ rootPage;

            void SaveFileButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        };
    }
}
