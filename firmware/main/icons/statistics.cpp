#include "statistics.h"

namespace bobbyicons {
const espgui::Icon<24, 24> statistics{
    {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2040, 0xC244, 0xCA44, 0x2860, 0x0000,   // 0x0010 (16) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x0020 (32) pixels
    0x0000, 0x0000, 0x0000, 0xBA23, 0xF2C5, 0xF2C5, 0xC224, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x0030 (48) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x5901, 0xEAC5, 0xF2C5, 0xF2C5, 0xF2C5, 0xA1C3,   // 0x0040 (64) pixels
    0x6101, 0x0000, 0x7962, 0xA1C3, 0x1020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x50E1, 0x8162, 0x8162, 0x50E1,   // 0x0050 (80) pixels
    0x6101, 0xCA44, 0xF2C5, 0xF2C5, 0xF2C5, 0xF2C5, 0xF2C5, 0xF2C5, 0xF2C5, 0xE2A4, 0xF2C5, 0xF2C5, 0x8182, 0x0000, 0x0000, 0x0000,   // 0x0060 (96) pixels
    0x0000, 0x0000, 0x0000, 0xB203, 0xF2C5, 0xF2C5, 0xF2C5, 0xF2C5, 0xEAC5, 0xF2C5, 0xF2C5, 0xF2C5, 0xF2C5, 0xF2C5, 0xEAC5, 0xF2C5,   // 0x0070 (112) pixels
    0xF2C5, 0xF2C5, 0xF2C5, 0xF2C5, 0x99C3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xBA23, 0xF2C5, 0xF2C5, 0xF2C5, 0xF2C5,   // 0x0080 (128) pixels
    0xF2C5, 0xF2C5, 0xEAC5, 0xBA23, 0x8162, 0x3080, 0x0000, 0x1820, 0x7142, 0xB203, 0xEAA5, 0xF2C5, 0xCA64, 0x0800, 0x0000, 0x0000,   // 0x0090 (144) pixels
    0x0000, 0x0000, 0x0000, 0xA1C3, 0xF2C5, 0xF2C5, 0xF2C5, 0xF2C5, 0xF2C5, 0xDA84, 0x58E1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x00A0 (160) pixels
    0x0000, 0x0000, 0x3880, 0xC244, 0xF2C5, 0xA9E3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x58E1, 0xF2E5, 0xF2E5, 0xF2E5, 0xF2E5,   // 0x00B0 (176) pixels
    0xE2C4, 0x40A0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xBA23, 0xEAE5, 0x50E1, 0x0000,   // 0x00C0 (192) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0xC263, 0xF324, 0xF324, 0xF324, 0x81A2, 0x0000, 0x0000, 0x0000, 0x0000, 0x7982, 0xBA63, 0xC283,   // 0x00D0 (208) pixels
    0xB243, 0x79A2, 0x0000, 0x0000, 0x0800, 0xD2A4, 0xB243, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xB283, 0xF364, 0xF364, 0xDB04,   // 0x00E0 (224) pixels
    0x0000, 0x0000, 0x0000, 0x2860, 0xCAC3, 0xF364, 0xF364, 0xF364, 0xF364, 0xF364, 0xD2E3, 0x5101, 0x0000, 0x6141, 0xD2E4, 0x0000,   // 0x00F0 (240) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0xDB23, 0xF384, 0xF384, 0xAA82, 0x0000, 0x0000, 0x0000, 0xBAC3, 0xF384, 0xD323, 0x9A42, 0x9A22,   // 0x0100 (256) pixels
    0xC2C3, 0xF384, 0xF384, 0xE364, 0x4900, 0x0000, 0xC2C3, 0x0000, 0x0000, 0x0000, 0x0000, 0x6981, 0xF3C4, 0xF3C4, 0xF3C4, 0x8A02,   // 0x0110 (272) pixels
    0x0000, 0x0000, 0x4920, 0xF3C4, 0xCB23, 0x1020, 0x0000, 0x0000, 0x0000, 0x81E1, 0xF3C4, 0xF3C4, 0xCB03, 0x0000, 0x79C1, 0x0000,   // 0x0120 (288) pixels
    0x0000, 0x0000, 0x9262, 0xF3E3, 0xF403, 0xF403, 0xF403, 0x71C1, 0x0000, 0x0000, 0x8A41, 0xF403, 0x5961, 0x0000, 0x0000, 0x0000,   // 0x0130 (304) pixels
    0x0000, 0x0000, 0xB2E2, 0xF403, 0xF403, 0x5140, 0x0000, 0x0000, 0x0000, 0x71E1, 0xF423, 0xF423, 0xF423, 0xF423, 0xF423, 0x8A41,   // 0x0140 (320) pixels
    0x0000, 0x0000, 0x9261, 0xF423, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x61A1, 0xF423, 0xF423, 0x9A82, 0x0000, 0x0000,   // 0x0150 (336) pixels
    0x0000, 0xD3C2, 0xF463, 0xF463, 0xF463, 0xF463, 0xF463, 0xB322, 0x0000, 0x0000, 0x4920, 0xF463, 0x7201, 0x0000, 0x0000, 0x0000,   // 0x0160 (352) pixels
    0x0000, 0x0000, 0x4940, 0xF463, 0xF463, 0xAB02, 0x0000, 0x0000, 0x0000, 0xAB21, 0xF4A3, 0xF4A3, 0xF4A3, 0xF4A3, 0xF4A3, 0xE463,   // 0x0170 (368) pixels
    0x1880, 0x0000, 0x0000, 0xA302, 0xE442, 0x7A41, 0x1860, 0x61E0, 0x0000, 0x0000, 0x8261, 0xF4A3, 0xF4A3, 0xCBC2, 0x0000, 0x0000,   // 0x0180 (384) pixels
    0x0000, 0x0000, 0x8AA1, 0xE462, 0xF4E2, 0xF4E2, 0xF4E2, 0xF4E2, 0xB361, 0x0000, 0x0000, 0x0000, 0x8261, 0xC3C2, 0xCBE2, 0x8AA1,   // 0x0190 (400) pixels
    0x0000, 0x0000, 0xCBE2, 0xF4E2, 0xF4E2, 0xF4E2, 0x92C1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0820, 0x7A60, 0xD462, 0xFD02, 0xFD02,   // 0x01A0 (416) pixels
    0xF502, 0x9B21, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8AE1, 0xF502, 0xFD02, 0xFD02, 0xFD02, 0xCC02, 0x0000,   // 0x01B0 (432) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x59C0, 0xED02, 0xFD42, 0xFD42, 0xFD42, 0xCC41, 0x6220, 0x0000, 0x0000, 0x0000, 0x20C0,   // 0x01C0 (448) pixels
    0xABA1, 0xF542, 0xFD42, 0xFD42, 0xD462, 0xABA1, 0x3920, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xABA1, 0xFD82,   // 0x01D0 (464) pixels
    0xFD82, 0xFD82, 0xFD82, 0xFD82, 0xE522, 0xD4C1, 0xDCC1, 0xF542, 0xFD82, 0xFD82, 0xFD82, 0xD481, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x01E0 (480) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xC481, 0xFDA2, 0xFDA2, 0xFDA2, 0xFDA2, 0xFDA2, 0xFDA2, 0xFDA2, 0xFDA2, 0xFDA2,   // 0x01F0 (496) pixels
    0xFDA2, 0xFDA2, 0xCCA1, 0x28E0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xC4A1, 0xFDE1,   // 0x0200 (512) pixels
    0xFDE1, 0xFDE1, 0xF5C1, 0xFDE1, 0xFDE1, 0xFDE1, 0xFDE1, 0xFDE1, 0xFDE1, 0xFDE1, 0x51E0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x0210 (528) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xA3E1, 0xFE21, 0xE5A1, 0xB461, 0x3960, 0x5200, 0x8320, 0xA3C0, 0xE581, 0xFE21,   // 0x0220 (544) pixels
    0xFE21, 0xE581, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0020,   // 0x0230 (560) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x3960, 0xC4C1, 0xF601, 0x8340, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x0240 (576) pixels
    }, "statistics"
};
} // namespace bobbyicons