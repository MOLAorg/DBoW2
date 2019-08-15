/**
 * File: opencv-common.h
 * Date: August 2019
 * Author: Jose Luis Blanco-Claraco
 * Description: OpenCV includes for opencv 2.4 and 3.x+
 * License: see the LICENSE.txt file
 *
 */

#pragma once

#include <opencv2/core/version.hpp>
#if CV_VERSION_EPOCH>=3
#include <opencv2/core.hpp>
#else 
#include <opencv2/core/core.hpp>
#endif

