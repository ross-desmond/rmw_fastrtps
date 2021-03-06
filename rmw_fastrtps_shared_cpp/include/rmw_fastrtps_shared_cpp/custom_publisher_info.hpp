// Copyright 2016-2018 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

#ifndef RMW_FASTRTPS_SHARED_CPP__CUSTOM_PUBLISHER_INFO_HPP_
#define RMW_FASTRTPS_SHARED_CPP__CUSTOM_PUBLISHER_INFO_HPP_

#include "fastrtps/publisher/Publisher.h"

#include "rmw/rmw.h"

#include "rmw_fastrtps_shared_cpp/TypeSupport.hpp"

typedef struct CustomPublisherInfo
{
  eprosima::fastrtps::Publisher * publisher_;
  rmw_fastrtps_shared_cpp::TypeSupport * type_support_;
  rmw_gid_t publisher_gid;
  const char * typesupport_identifier_;
} CustomPublisherInfo;

#endif  // RMW_FASTRTPS_SHARED_CPP__CUSTOM_PUBLISHER_INFO_HPP_
