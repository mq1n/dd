//
//  AppPasswordDAO.h
//  EventRepos
//
//  Created by Makara on 2/24/14.
//
//

#import <Foundation/Foundation.h>

#import "DataAccessObject.h"

@interface AppPasswordDAO : NSObject <DataAccessObject1> {
@private
	sqlite3		*mSQLite3;
}

- (id) initWithSQLite3: (sqlite3 *) aSQLite3;

@end
