/*
 * Copyright (C) 2021 ByteDance Inc
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package com.bytedance.rheatrace.plugin.compiling.filter


import com.bytedance.rheatrace.plugin.compiling.TraceMethod
import com.bytedance.rheatrace.plugin.retrace.MappingCollector
import org.objectweb.asm.tree.MethodNode

abstract class TraceMethodFilter(val mappingCollector: MappingCollector) {

    abstract fun onMethodNeedFilter(methodNode: MethodNode, traceMethod: TraceMethod): Boolean

    abstract fun onClassNeedFilter(className: String): Boolean

    abstract fun isMethodWithParamesValue(methodName: String): Boolean

    abstract fun getMethodWithParamesValue(methodName: String): List<Int>?

    abstract fun isBlockMethod(methodName: String): Boolean
}