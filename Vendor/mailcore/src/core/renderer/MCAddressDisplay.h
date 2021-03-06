//
//  MCAddressDisplay.h
//  testUI
//
//  Created by DINH Viêt Hoà on 1/27/13.
//  Copyright (c) 2013 MailCore. All rights reserved.
//

#ifndef __MAILCORE_MCADDRESSDISPLAY_H_
#define __MAILCORE_MCADDRESSDISPLAY_H_

#include <MailCore/MCAbstract.h>

#ifdef __cplusplus

namespace mailcore {
    
    class AddressDisplay {
        
    public:
        static String * displayStringForAddress(Address * address);
        static String * shortDisplayStringForAddress(Address * address);
        static String * veryShortDisplayStringForAddress(Address * address);
        
        static String * displayStringForAddresses(Array * /* Address */ addresses);
        static String * shortDisplayStringForAddresses(Array * /* Address */ addresses);
        static String * veryShortDisplayStringForAddresses(Array * /* Address */ addresses);
    };
    
};

#endif

#endif
