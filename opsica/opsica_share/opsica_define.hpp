/*
 * Copyright 2018 Yamana Laboratory, Waseda University
 * Supported by JST CREST Grant Number JPMJCR1503, Japan.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE‐2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef OPSICA_DEFINE_HPP
#define OPSICA_DEFINE_HPP

#define OPSICA_TIMEOUT_SEC (60)
#define OPSICA_RETRY_INTERVAL_USEC (2000000)

namespace opsica_share
{
}
namespace opsh = opsica_share;
namespace opsica_cloud
{
}
namespace opcl = opsica_cloud;
namespace opsica_dataowner
{
}
namespace opdo = opsica_dataowner;
namespace opsica_querier
{
}
namespace opqu = opsica_querier;

namespace opsica_share
{

enum DataOwner_t
{
    kDataOwnerA = 1,
    kDataOwnerB = 2,
};

} /* namespace opsica_share */

#endif /* OPSICA_DEFINE_HPP */
