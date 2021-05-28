//
//  host_tab.hpp
//  Moonlight
//
//  Created by XITRIX on 26.05.2021.
//

#pragma once

#include <borealis.hpp>
#include <Settings.hpp>

class HostTab : public brls::Box
{
  public:
    HostTab(Host host);
    
    BRLS_BIND(brls::DetailCell, connect, "connect");
    BRLS_BIND(brls::DetailCell, remove, "remove");
    BRLS_BIND(brls::Header, header, "header");

private:
    Host host;
};