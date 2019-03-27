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

#ifndef OPSICA_CLOUD_THREAD_HPP
#define OPSICA_CLOUD_THREAD_HPP

#include <memory>

namespace stdsc
{
class CallbackFunctionContainer;
class StateContext;
}

namespace opsica_cloud
{

/**
 * @brief Provides cloud server.
 */
class CloudThread
{
public:
    CloudThread(const char* port, stdsc::CallbackFunctionContainer& callback,
                stdsc::StateContext& state);
    ~CloudThread(void) = default;

    void start(void);
    void join(void);

private:
    struct Impl;
    std::shared_ptr<Impl> pimpl_;
};

} /* namespace opsica_cloud */

#endif /* OPSICA_CLOUD_THREAD_HPP */
