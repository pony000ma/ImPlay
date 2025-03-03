// Copyright (c) 2022 tsl0922. All rights reserved.
// SPDX-License-Identifier: GPL-2.0-only

#pragma once
#include "view.h"

namespace ImPlay::Views {
class About : public View {
 public:
  void draw() override;

 private:
  void textCentered(const char* text);
};
}  // namespace ImPlay::Views