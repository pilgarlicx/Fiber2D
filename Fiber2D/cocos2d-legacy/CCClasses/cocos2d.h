/*
 * Cocos2D-SpriteBuilder: http://cocos2d.spritebuilder.com
 *
 * Copyright (c) 2008-2010 Ricardo Quesada
 * Copyright (c) 2011 Zynga Inc.
 * Copyright (c) 2013-2014 Cocos2D Authors
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

/** @mainpage cocos2d for iPhone API reference
 *
 * @image html Icon.png
 *
 * @section intro Introduction
 * This is cocos2d API reference
 *
 * The programming guide is hosted here: http://www.cocos2d-iphone.org/wiki/doku.php/prog_guide:index
 *
 * <hr>
 *
 * @todo A native English speaker should check the grammar. We need your help!
 *
 */

// 0x00 HI ME LO
// 00   03 01 01
#define COCOS2D_VERSION 0x00030403
#define COCOS2D_BUILD @"develop"


#import "ccConfig.h"

#import "ccTypes.h"
#import "ccMacros.h"

// Singletons:
#import "CCSetup.h"

// Basic Types:
#import "CCProtocols.h"
#import "CCColor.h"
#import "CCImage.h"
#import "CCTexture.h"
#import "CCShader.h"


#if CC_EFFECTS_EXPERIMENTAL
#import "CCEffectOutline.h"
#import "CCEffectDFOutline.h"
#import "CCEffectDistanceField.h"
#import "CCEffectDFInnerGlow.h"
#import "CCEffectStereo.h"
#endif

// Actions:
#import "CCAction.h"
#import "CCActionCatmullRom.h"
#import "CCActionEase.h"
#import "CCActionEase.h"
#import "CCActionInstant.h"
#import "CCActionInterval.h"
#import "CCActionTween.h"

// Misc:
#import "CCFile.h"
#import "CCFileLocator.h"
#import "CGPointExtension.h"
#import "ccUtils.h"
#import "uthash.h"
#import "utlist.h"
#import "UITouch+CC.h"
#import "NSEvent+CC.h"
#import "CCScheduler.h"

// Platform Support:
#import "CCNS.h"

#import "CCDirectorIOS.h"
#if __CC_PLATFORM_MAC
#import "NSEvent+CC.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

// free functions
NSString * cocos2dVersion(void);

#ifdef __cplusplus
}
#endif