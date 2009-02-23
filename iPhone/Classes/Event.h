//
//  Event.h
//  iPhone
//
//  Created by Ryan Schneider on 2/10/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RMModelObject.h"
#import "Organization.h"
#import "Contact.h"
#import "Source.h"
#import "Location.h"
#import "InterestArea.h"

@interface Event : RMModelObject {
}

@property (copy) NSString* uid;
@property (copy) NSString* name;
@property (copy) NSString* description;

@property (retain) Organization* organization;
@property (retain) Contact* contact;
@property (retain) NSDate* date;
@property (retain) NSNumber* duration;
@property (retain) Source* source;
@property (retain) Location* location;
@property (retain) NSArray* interestAreas;

+ (id) eventWithId: (NSString*) uid
              name: (NSString*) name
       description: (NSString*) description
      organization: (Organization*) organization
           contact: (Contact*) contact
            source: (Source*) source
          location: (Location*) location
     interestAreas: (NSArray*) interestAreas
              date:  (NSDate*) date
          duration: (NSNumber*) duration;

- (id) initWithId: (NSString*) uid
             name: (NSString*) name
      description: (NSString*) description
     organization: (Organization*) organization
          contact: (Contact*) contact
           source: (Source*) source
         location: (Location*) location
    interestAreas: (NSArray*) interestAreas
             date:  (NSDate*) date
         duration: (NSNumber*) duration;

@end
