//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLayoutManager, NSTextStorage;

@interface NSTextLayoutFragment : NSObject
{
    NSLayoutManager *_layoutManager;
    unsigned long long _animationType;
    NSLayoutManager *_sourceLayoutManager;
    NSTextStorage *_sourceTextStorage;
    double _sourceVerticalDelta;
    long long _sourceRangeDelta;
    NSLayoutManager *_destinationLayoutManager;
    NSTextStorage *_destinationTextStorage;
    double _destinationVerticalDelta;
    struct _NSRange _characterRange;
    struct _NSRange _destinationGlyphRange;
    struct CGRect _sourceBoundingRect;
    struct CGRect _destinationBoundingRect;
}

@property struct _NSRange destinationGlyphRange; // @synthesize destinationGlyphRange=_destinationGlyphRange;
@property double destinationVerticalDelta; // @synthesize destinationVerticalDelta=_destinationVerticalDelta;
@property(retain) NSTextStorage *destinationTextStorage; // @synthesize destinationTextStorage=_destinationTextStorage;
@property NSLayoutManager *destinationLayoutManager; // @synthesize destinationLayoutManager=_destinationLayoutManager;
@property long long sourceRangeDelta; // @synthesize sourceRangeDelta=_sourceRangeDelta;
@property double sourceVerticalDelta; // @synthesize sourceVerticalDelta=_sourceVerticalDelta;
@property(retain) NSTextStorage *sourceTextStorage; // @synthesize sourceTextStorage=_sourceTextStorage;
@property NSLayoutManager *sourceLayoutManager; // @synthesize sourceLayoutManager=_sourceLayoutManager;
@property(readonly) unsigned long long animationType; // @synthesize animationType=_animationType;
@property struct CGRect destinationBoundingRect; // @synthesize destinationBoundingRect=_destinationBoundingRect;
@property(readonly) struct CGRect sourceBoundingRect; // @synthesize sourceBoundingRect=_sourceBoundingRect;
@property(readonly) struct _NSRange characterRange; // @synthesize characterRange=_characterRange;
@property __weak NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
- (void).cxx_destruct;
- (id)description;
- (void)drawAtPoint:(struct CGPoint)arg1 contentType:(unsigned long long)arg2;
- (void)_setup;
- (void)dealloc;
- (id)init;
- (id)initWithLayoutManager:(id)arg1 characterRange:(struct _NSRange)arg2 animationType:(unsigned long long)arg3 boundingRect:(struct CGRect)arg4;

@end
