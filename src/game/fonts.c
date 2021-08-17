// Copyright (c) 2021 Tarek Sherif
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal in
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
// the Software, and to permit persons to whom the Software is furnished to do so,
// subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
////////////////////////////////////////////////////////////////////////////////////
#include "fonts.h"

static Sprites_Animation fontAnimations[]  = {
    { .frames = {{0, 0}}, .numFrames = 1},
    { .frames = {{1, 0}}, .numFrames = 1},
    { .frames = {{2, 0}}, .numFrames = 1},
    { .frames = {{3, 0}}, .numFrames = 1},
    { .frames = {{4, 0}}, .numFrames = 1},
    { .frames = {{0, 1}}, .numFrames = 1},
    { .frames = {{1, 1}}, .numFrames = 1},
    { .frames = {{2, 1}}, .numFrames = 1},
    { .frames = {{3, 1}}, .numFrames = 1},
    { .frames = {{4, 1}}, .numFrames = 1},
    { .frames = {{0, 2}}, .numFrames = 1},
    { .frames = {{1, 2}}, .numFrames = 1},
    { .frames = {{2, 2}}, .numFrames = 1},
    { .frames = {{3, 2}}, .numFrames = 1},
    { .frames = {{4, 2}}, .numFrames = 1},
    { .frames = {{0, 3}}, .numFrames = 1},
    { .frames = {{1, 3}}, .numFrames = 1},
    { .frames = {{2, 3}}, .numFrames = 1},
    { .frames = {{3, 3}}, .numFrames = 1},
    { .frames = {{4, 3}}, .numFrames = 1},
    { .frames = {{0, 4}}, .numFrames = 1},
    { .frames = {{1, 4}}, .numFrames = 1},
    { .frames = {{2, 4}}, .numFrames = 1},
    { .frames = {{3, 4}}, .numFrames = 1},
    { .frames = {{4, 4}}, .numFrames = 1},
    { .frames = {{0, 5}}, .numFrames = 1},
    { .frames = {{1, 5}}, .numFrames = 1},
    { .frames = {{2, 5}}, .numFrames = 1},
    { .frames = {{3, 5}}, .numFrames = 1},
    { .frames = {{4, 5}}, .numFrames = 1},
    { .frames = {{0, 6}}, .numFrames = 1},
    { .frames = {{1, 6}}, .numFrames = 1},
    { .frames = {{2, 6}}, .numFrames = 1},
    { .frames = {{3, 6}}, .numFrames = 1},
    { .frames = {{4, 6}}, .numFrames = 1},
    { .frames = {{0, 7}}, .numFrames = 1},
    { .frames = {{1, 7}}, .numFrames = 1},
    { .frames = {{2, 7}}, .numFrames = 1},
    { .frames = {{3, 7}}, .numFrames = 1},
    { .frames = {{4, 7}}, .numFrames = 1},
    { .frames = {{0, 8}}, .numFrames = 1},
    { .frames = {{1, 8}}, .numFrames = 1},
    { .frames = {{2, 8}}, .numFrames = 1},
    { .frames = {{3, 8}}, .numFrames = 1},
    { .frames = {{4, 8}}, .numFrames = 1},
    { .frames = {{0, 9}}, .numFrames = 1},
    { .frames = {{1, 9}}, .numFrames = 1},
    { .frames = {{2, 9}}, .numFrames = 1},
    { .frames = {{3, 9}}, .numFrames = 1},
    { .frames = {{4, 9}}, .numFrames = 1},
    { .frames = {{0, 10}}, .numFrames = 1},
    { .frames = {{1, 10}}, .numFrames = 1},
    { .frames = {{2, 10}}, .numFrames = 1},
    { .frames = {{3, 10}}, .numFrames = 1},
    { .frames = {{4, 10}}, .numFrames = 1},
    { .frames = {{0, 11}}, .numFrames = 1},
    { .frames = {{1, 11}}, .numFrames = 1},
    { .frames = {{2, 11}}, .numFrames = 1},
    { .frames = {{3, 11}}, .numFrames = 1},
    { .frames = {{4, 11}}, .numFrames = 1},
    { .frames = {{0, 12}}, .numFrames = 1},
    { .frames = {{1, 12}}, .numFrames = 1},
    { .frames = {{2, 12}}, .numFrames = 1},
    { .frames = {{3, 12}}, .numFrames = 1},
    { .frames = {{4, 12}}, .numFrames = 1},
    { .frames = {{0, 13}}, .numFrames = 1},
    { .frames = {{1, 13}}, .numFrames = 1},
    { .frames = {{2, 13}}, .numFrames = 1},
    { .frames = {{3, 13}}, .numFrames = 1},
    { .frames = {{4, 13}}, .numFrames = 1}    

};

extern Sprites_Sprite fonts_Font = {
    .panelDims = { 32.0f, 32.0f },
    .sheetDims = { 5.0f, 13.0f },
    .animations = fontAnimations,
    .numAnimations = sizeof(fontAnimations) / sizeof(fontAnimations[0])
};