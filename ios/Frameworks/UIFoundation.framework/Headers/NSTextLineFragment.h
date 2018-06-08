//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSFont;

@interface NSTextLineFragment : NSObject
{
    struct __CTLine *_lineRef;
    unsigned short *_glyphs;
    struct CGSize *_advances;
    NSFont *_font;
    NSAttributedString *_attributedString;
    struct _NSRange _characterRange;
    struct CGPoint glyphOrigin;
    struct CGRect typographicBounds;
}

+ (BOOL)supportsSecureCoding;
@property struct CGPoint glyphOrigin; // @synthesize glyphOrigin;
@property struct CGRect typographicBounds; // @synthesize typographicBounds;
@property(readonly) struct _NSRange characterRange; // @synthesize characterRange=_characterRange;
@property(readonly, copy) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (long long)characterIndexForPoint:(struct CGPoint)arg1 fractionOfDistanceThroughGlyph:(double *)arg2;
- (struct CGPoint)locationForCharacterAtIndex:(long long)arg1;
- (void)drawAtPoint:(struct CGPoint)arg1 context:(struct CGContext *)arg2;
@property(readonly) long long numberOfGlyphs; // @dynamic numberOfGlyphs;
- (struct CGRect)typographicUsedBounds;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setGlyphs:(const unsigned short *)arg1 advances:(const struct CGSize *)arg2 font:(id)arg3;
- (void)setLineRef:(struct __CTLine *)arg1;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange)arg2;

@end
