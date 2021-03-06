//
//  RKObjectMapperError.h
//  RestKit
//
//  Created by Blake Watters on 5/31/11.
//  Copyright 2011 Two Toasters
//  
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//  
//  http://www.apache.org/licenses/LICENSE-2.0
//  
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import "../Support/Errors.h"

typedef enum RKObjectMapperErrors {
    RKObjectMapperErrorObjectMappingNotFound        = 1001,     // No mapping found
    RKObjectMapperErrorObjectMappingTypeMismatch    = 1002,     // Target class and object mapping are in disagreement
    RKObjectMapperErrorUnmappableContent            = 1003,     // No mappable attributes or relationships were found
    RKObjectMapperErrorFromMappingResult            = 1004,     // The error was returned from the mapping result
    RKObjectMapperErrorValidationFailure            = 1005      // Generic error code for use when constructing validation errors
} RKObjectMapperErrorCode;
