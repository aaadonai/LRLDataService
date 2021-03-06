//
//  LRLMovie.h
//  LRLDataService
//
//  Created by Lawrence Lomax on 11/02/2014.
//
//

#import "LRLBaseModel.h"

@class LRLTrailer;

@interface LRLMovie : LRLBaseModel

+ (instancetype) movie;

// From IMDB Search
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *year;
@property (nonatomic, readonly) NSString *imdbID;
@property (nonatomic, readonly) NSString *type;

// From IMDB Detailed Info
@property (nonatomic, readonly) NSString *plot;
@property (nonatomic, readonly) NSString *country;

// From Rotten Tomatoes
@property (nonatomic, readonly) NSString *criticsRating;
@property (nonatomic, readonly) NSURL *artworkURL;

// From Trailer Addict
@property (nonatomic, readonly) LRLTrailer *trailer;

- (LRLMovie *) movieWithUpdate:( LRLMovie *(^)(LRLMovie *movie) )update;

@end

@interface LRLMovie (ProtectedSetters)

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *year;
@property (nonatomic, strong) NSString *imdbID;
@property (nonatomic, strong) NSString *type;

@property (nonatomic, strong) NSString *plot;
@property (nonatomic, strong) NSString *country;

@property (nonatomic, strong) NSString *criticsRating;
@property (nonatomic, strong) NSURL *artworkURL;

@property (nonatomic, strong) LRLTrailer *trailer;

@end
