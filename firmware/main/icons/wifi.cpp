#include "wifi.h"

namespace bobbyicons {
const espgui::Icon<24, 24> wifi{{
    0x0000, 0x400C, 0xD000, 0x3BD6, 0x23D5, 0x001F, 0x3396, 0x955F, 0x753D, 0x669C, 0x7C1D, 0x6CFA, 0x6CFA, 0x7C1D, 0x669C, 0x753D,   // 0x0010 (16) pixels
    0x955F, 0x3396, 0x001F, 0x23D5, 0x3BD6, 0xD000, 0x400C, 0x0000, 0x3333, 0x3B33, 0x3B13, 0x3B54, 0x02FD, 0x5452, 0x3B77, 0x6459,   // 0x0020 (32) pixels
    0x753B, 0x755A, 0x6CF9, 0x7539, 0x7539, 0x6CF9, 0x755A, 0x753B, 0x6459, 0x3B77, 0x5452, 0x02FD, 0x3B54, 0x3B13, 0x3B33, 0x3333,   // 0x0030 (48) pixels
    0x3332, 0x2B51, 0x3B35, 0x4B57, 0x0013, 0x4BD7, 0x5C57, 0x6CD9, 0x74FB, 0x6D3A, 0x6D19, 0x7519, 0x7519, 0x6D19, 0x6D3A, 0x74FB,   // 0x0040 (64) pixels
    0x6CD9, 0x5C57, 0x4BD7, 0x0013, 0x4B57, 0x3B35, 0x2B51, 0x3332, 0x3B54, 0x3314, 0x3BB2, 0xFCBF, 0x4BF7, 0x4BD6, 0x7CF9, 0x751A,   // 0x0050 (80) pixels
    0x6CD9, 0x74F9, 0x74F9, 0x74FA, 0x74FA, 0x74F9, 0x74F9, 0x6CD9, 0x751A, 0x7CF9, 0x4BD6, 0x4BF7, 0xFCBF, 0x3BB2, 0x3314, 0x3B54,   // 0x0060 (96) pixels
    0x2AD4, 0x32F4, 0x11B3, 0x7CB9, 0x4BB6, 0x6498, 0x751A, 0x64B9, 0x64B9, 0x74F9, 0x753A, 0x753B, 0x753B, 0x753A, 0x74F9, 0x64B9,   // 0x0070 (112) pixels
    0x64B9, 0x751A, 0x6498, 0x4BB6, 0x7CB9, 0x11B3, 0x32F4, 0x2AD4, 0x3335, 0x3315, 0x5638, 0x6458, 0x4BF7, 0x6CB9, 0x6CDA, 0x5C58,   // 0x0080 (128) pixels
    0x6CF9, 0x751A, 0x5BF3, 0x428A, 0x426A, 0x6C34, 0x751A, 0x6CF9, 0x5C58, 0x6CDA, 0x6CB9, 0x4BF7, 0x6458, 0x5638, 0x3315, 0x3335,   // 0x0090 (144) pixels
    0x3314, 0x3334, 0x753A, 0x5C98, 0x53D6, 0x7519, 0x6CD9, 0x5C57, 0x74F9, 0x6CB8, 0xBDD7, 0xFFFF, 0xEF7D, 0x7BEF, 0x6CD8, 0x74F9,   // 0x00A0 (160) pixels
    0x5C57, 0x6CD9, 0x7519, 0x53D6, 0x5C98, 0x753A, 0x3334, 0x3314, 0x3314, 0x3B54, 0x755A, 0x6478, 0x5417, 0x751A, 0x6CD9, 0x5C57,   // 0x00B0 (176) pixels
    0x751A, 0x6C97, 0xBDF7, 0xFFDF, 0xEF7D, 0xAD74, 0x6C97, 0x751A, 0x5C57, 0x6CD9, 0x751A, 0x5417, 0x6478, 0x755A, 0x3B54, 0x3314,   // 0x00C0 (192) pixels
    0x3334, 0x3B75, 0x751A, 0x6498, 0x5417, 0x74FA, 0x6CD9, 0x5C37, 0x751A, 0x74D8, 0x73EF, 0xD6BA, 0xCE99, 0x73AF, 0x74D8, 0x751A,   // 0x00D0 (208) pixels
    0x5C37, 0x6CD9, 0x74FA, 0x5417, 0x6498, 0x751A, 0x3B75, 0x3334, 0x3334, 0x4375, 0x6CF9, 0x6CB8, 0x4BF6, 0x6CF9, 0x74F9, 0x5417,   // 0x00E0 (224) pixels
    0x6CD9, 0x74F9, 0x84B4, 0x5B0C, 0x5B0D, 0x84B4, 0x74F9, 0x6CD9, 0x5417, 0x74F9, 0x6CF9, 0x4BF6, 0x6CB8, 0x6CF9, 0x4375, 0x3334,   // 0x00F0 (240) pixels
    0x2B13, 0x3334, 0x6C99, 0x6CD9, 0x4BD6, 0x6CB9, 0x751A, 0x5C78, 0x4BF7, 0x8CD5, 0xC67B, 0x7CF8, 0x7CF7, 0xC67B, 0x8CD5, 0x4BF7,   // 0x0100 (256) pixels
    0x5C78, 0x751A, 0x6CB9, 0x4BD6, 0x6CD9, 0x6C99, 0x3334, 0x2B13, 0x3354, 0x3314, 0x5C37, 0x74FA, 0x5C37, 0x4BD6, 0x751A, 0x751A,   // 0x0110 (272) pixels
    0x5C36, 0x4BB4, 0x84D5, 0x6CB7, 0x6CD8, 0x8CF6, 0x4BB4, 0x5C36, 0x751A, 0x751A, 0x4BD6, 0x5C37, 0x74FA, 0x5C37, 0x3314, 0x3354,   // 0x0120 (288) pixels
    0x3314, 0x2AF4, 0x3B54, 0x751A, 0x7D3A, 0x43B6, 0x53F7, 0x6CFA, 0x94D3, 0xEF7E, 0x5BD3, 0x4B73, 0x5393, 0x4B51, 0xEF7E, 0x94B3,   // 0x0130 (304) pixels
    0x6CFA, 0x53F7, 0x43B6, 0x7D3A, 0x751A, 0x3B54, 0x2AF4, 0x3314, 0x3B97, 0x3355, 0x3334, 0x43B6, 0x7519, 0x753A, 0x43D6, 0x53B3,   // 0x0140 (320) pixels
    0xE73C, 0xBE17, 0x7C53, 0x8CF5, 0x94D2, 0x9CF3, 0xE75C, 0xE73C, 0x53D3, 0x43D6, 0x753A, 0x7519, 0x43B6, 0x3334, 0x3355, 0x3B97,   // 0x0150 (336) pixels
    0x0000, 0x2AF4, 0x4374, 0x3334, 0x53F6, 0x751A, 0x6CD9, 0xB5B7, 0xEF7D, 0x7C31, 0x5437, 0x7C72, 0xCE99, 0xF79E, 0xAD54, 0xEF5D,   // 0x0160 (352) pixels
    0xB5B7, 0x6CD9, 0x751A, 0x53F6, 0x3334, 0x4374, 0x2AF4, 0x0000, 0x0000, 0x0000, 0x3334, 0x3355, 0x3334, 0x53F6, 0x84D6, 0xDEDB,   // 0x0170 (368) pixels
    0xA554, 0x94D3, 0xBE17, 0xF79E, 0xD6BA, 0x7C31, 0x7433, 0xAD54, 0xDEDB, 0x84D6, 0x53F6, 0x3334, 0x3355, 0x3334, 0x0000, 0x0000,   // 0x0180 (384) pixels
    0x0000, 0x0000, 0x0000, 0x3334, 0x3332, 0x02D5, 0x9D14, 0xEF7D, 0xD6BA, 0xDEFB, 0xCE79, 0x8CB3, 0x7454, 0x751A, 0x757C, 0x94D2,   // 0x0190 (400) pixels
    0xE71B, 0x9D14, 0x02D5, 0x3332, 0x3334, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x63D3, 0x7C30, 0x634C, 0xDEDB, 0xE71C,   // 0x01A0 (416) pixels
    0xA554, 0x8C50, 0x5BB1, 0x43F6, 0x3C18, 0x4BF7, 0x4396, 0x5393, 0xBE17, 0xDEDA, 0x634C, 0x7C30, 0x63D3, 0x0000, 0x0000, 0x0000,   // 0x01B0 (432) pixels
    0x0000, 0x0000, 0x0000, 0xC617, 0xE73C, 0xA534, 0xF7DE, 0xDEFB, 0xF7BE, 0xF79E, 0xDEDB, 0xC617, 0xAD75, 0x9D14, 0x94B3, 0x94D2,   // 0x01C0 (448) pixels
    0x8450, 0xF79E, 0xA534, 0xDF1B, 0x8430, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x73AE, 0xEF7D, 0xB5B6, 0x6B6C,   // 0x01D0 (464) pixels
    0x7BEE, 0x9CF3, 0xB5B6, 0xC638, 0xCE99, 0xDEFB, 0xDEFB, 0xDEDA, 0xD6BA, 0xDEDA, 0xEF5D, 0x73CE, 0xB595, 0x0000, 0x0000, 0x0000,   // 0x01E0 (480) pixels
    0x0000, 0x0000, 0x0000, 0x52AA, 0xCE58, 0xE73C, 0x840F, 0x0000, 0x2124, 0x39C7, 0x4A89, 0x5289, 0x630B, 0x7BEF, 0x9491, 0x9CD2,   // 0x01F0 (496) pixels
    0x9CF3, 0x9CF3, 0xDEFB, 0xCE58, 0x52A9, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8430, 0x7C0F, 0xC617, 0x9CD2, 0x73AD, 0x0000,   // 0x0200 (512) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x7BEE, 0x94D2, 0xBDF7, 0x8430, 0x8C51, 0x0000, 0x0000,   // 0x0210 (528) pixels
    0x0000, 0x0000, 0x8C50, 0x8C50, 0x6B6D, 0x7BEF, 0xC637, 0x2124, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x0220 (544) pixels
    0x634C, 0x9D13, 0x7BEF, 0x738D, 0x8C50, 0x8C50, 0x0000, 0x0000, 0x0000, 0x0000, 0x8C50, 0x8C50, 0x8430, 0x8430, 0x0000, 0x0000,   // 0x0230 (560) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8430, 0x8430, 0x8C50, 0x8C50, 0x0000, 0x0000,   // 0x0240 (576) pixels
}, "wifi"};
} // namespace bobbyicons
