//
//  EligibilityDomainType.h
//  EligibilityCore
//
//  Created by Kyle on 2024/6/24.
//

#ifndef EligibilityDomainType_h
#define EligibilityDomainType_h

#include <CoreFoundation/CoreFoundation.h>

#define EligibilityDomainTypeCount 124

// TODO
typedef CF_ENUM(uint64_t, EligibilityDomainType) {
    EligibilityDomainTypeInvalid = 0,
    EligibilityDomainTypeTest = 120,
    EligibilityDomainTypeXcodeLLM = 123,
};

#endif /* EligibilityDomainType_h */