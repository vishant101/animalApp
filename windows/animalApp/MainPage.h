#pragma once
#include "MainPage.g.h"
#include <winrt/Microsoft.ReactNative.h>


namespace winrt::animalApp::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();
    };
}

namespace winrt::animalApp::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}


