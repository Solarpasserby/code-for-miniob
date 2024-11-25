/* Copyright (c) 2021 OceanBase and/or its affiliates. All rights reserved.
miniob is licensed under Mulan PSL v2.
You can use this software according to the terms and conditions of the Mulan PSL v2.
You may obtain a copy of Mulan PSL v2 at:
         http://license.coscl.org.cn/MulanPSL2
THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
See the Mulan PSL v2 for more details. */

#include "common/lang/comparator.h"
#include "common/log/log.h"
#include "common/type/text_type.h"
#include "common/value.h"
#include "common/time/datetime.h"

// int TextType::compare(const Value &left, const Value &right) const
// {
//   ASSERT(left.attr_type() == AttrType::CHARS && right.attr_type() == AttrType::CHARS, "invalid type");
//   if (right.attr_type() == AttrType::NULLS) {
//     return INT32_MIN;
//   }
//   return common::compare_string(
//       (void *)left.value_.pointer_value_, left.length_, (void *)right.value_.pointer_value_, right.length_);
// }

// int TextType::match_like(const Value &left, const Value &right) const
// {
//   ASSERT(left.attr_type() == AttrType::CHARS && right.attr_type() == AttrType::CHARS, "invalid type");
//   return common::match_like_string(
//       (void *)left.value_.pointer_value_, (void *)right.value_.pointer_value_);
// }

RC TextType::to_string(const Value &val, string &result) const
{
  stringstream ss;
  ss << val.value_.pointer_value_;
  result = ss.str();
  // if (result.length() > MAX_TEXT_DISPLAY_LEN) {
  //   result = result.substr(0, MAX_TEXT_DISPLAY_LEN) + "...";
  // }
  return RC::SUCCESS;
}