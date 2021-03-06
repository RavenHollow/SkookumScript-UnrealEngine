//=======================================================================================
// Copyright (c) 2001-2017 Agog Labs Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//=======================================================================================

//=======================================================================================
// SkookumScript C++ library.
//
// SkookumScript atomic String class
//=======================================================================================

#pragma once

//=======================================================================================
// Includes
//=======================================================================================

#include <SkookumScript/SkClassBinding.hpp>
#include <AgogCore/AString.hpp>

//---------------------------------------------------------------------------------------
// SkookumScript atomic String class
class SK_API SkString : public SkClassBindingSimple<SkString, AString>
  {
  public:

    static void       to_escape_string(const AString & str, AString * esc_str_p, bool break_newlines = false);
    static AString    to_escape_string(const AString & str, bool break_newlines = false)  { AString estr; to_escape_string(str, &estr, break_newlines); return estr; }

    static void       register_bindings();
    static SkClass *  get_class();

  };

