/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKComposeHeaderFieldBackgroundView, NSString, UILabel;

@interface GKComposeHeaderField : UIImageView {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    SEL _actionWhenTouched;
    GKComposeHeaderFieldBackgroundView *_backgroundView;
    float _baselineNudge;
    } _contentInsets;
    unsigned int _maxLineCount;
    UILabel *_nameLabel;
    UILabel *_valueLabel;
    float _verticalMargin;
}

@property SEL actionWhenTouched;
@property(retain) GKComposeHeaderFieldBackgroundView * backgroundView;
@property float baselineNudge;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property unsigned int maxLineCount;
@property(retain) UILabel * nameLabel;
@property(retain) NSString * nameText;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } valueFrame;
@property(retain) UILabel * valueLabel;
@property(retain) NSString * valueText;
@property float verticalMargin;

- (SEL)actionWhenTouched;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })adjustValueFrameIfNeeded:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)attributesForValueText;
- (id)backgroundView;
- (float)baselineNudge;
- (BOOL)canBecomeFirstResponder;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutForSize:(struct CGSize { float x1; float x2; })arg1 contentBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 nameFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 valueFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (void)layoutSubviews;
- (unsigned int)maxLineCount;
- (id)nameLabel;
- (id)nameText;
- (void)setActionWhenTouched:(SEL)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBaselineNudge:(float)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setMaxLineCount:(unsigned int)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNameText:(id)arg1;
- (void)setValueLabel:(id)arg1;
- (void)setValueText:(id)arg1;
- (void)setVerticalMargin:(float)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })valueFrame;
- (id)valueLabel;
- (id)valueText;
- (float)verticalMargin;
- (id)viewForBaselineLayout;

@end
