#include "tests.h"

#include <libplacebo/shaders/icc.h>

static const uint8_t DisplayP3_v2_micro_icc[] = {
  0x00, 0x00, 0x01, 0xc8, 0x6c, 0x63, 0x6d, 0x73, 0x02, 0x10, 0x00, 0x00,
  0x6d, 0x6e, 0x74, 0x72, 0x52, 0x47, 0x42, 0x20, 0x58, 0x59, 0x5a, 0x20,
  0x07, 0xe2, 0x00, 0x03, 0x00, 0x14, 0x00, 0x09, 0x00, 0x0e, 0x00, 0x1d,
  0x61, 0x63, 0x73, 0x70, 0x4d, 0x53, 0x46, 0x54, 0x00, 0x00, 0x00, 0x00,
  0x73, 0x61, 0x77, 0x73, 0x63, 0x74, 0x72, 0x6c, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf6, 0xd6,
  0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0xd3, 0x2d, 0x68, 0x61, 0x6e, 0x64,
  0xb4, 0xaa, 0xdd, 0x1f, 0x13, 0xc8, 0x03, 0x3c, 0xf5, 0x51, 0x14, 0x45,
  0x28, 0x7a, 0x98, 0xe2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,
  0x64, 0x65, 0x73, 0x63, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x5e,
  0x63, 0x70, 0x72, 0x74, 0x00, 0x00, 0x01, 0x0c, 0x00, 0x00, 0x00, 0x0c,
  0x77, 0x74, 0x70, 0x74, 0x00, 0x00, 0x01, 0x18, 0x00, 0x00, 0x00, 0x14,
  0x72, 0x58, 0x59, 0x5a, 0x00, 0x00, 0x01, 0x2c, 0x00, 0x00, 0x00, 0x14,
  0x67, 0x58, 0x59, 0x5a, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x14,
  0x62, 0x58, 0x59, 0x5a, 0x00, 0x00, 0x01, 0x54, 0x00, 0x00, 0x00, 0x14,
  0x72, 0x54, 0x52, 0x43, 0x00, 0x00, 0x01, 0x68, 0x00, 0x00, 0x00, 0x60,
  0x67, 0x54, 0x52, 0x43, 0x00, 0x00, 0x01, 0x68, 0x00, 0x00, 0x00, 0x60,
  0x62, 0x54, 0x52, 0x43, 0x00, 0x00, 0x01, 0x68, 0x00, 0x00, 0x00, 0x60,
  0x64, 0x65, 0x73, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
  0x75, 0x50, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x74, 0x65, 0x78, 0x74, 0x00, 0x00, 0x00, 0x00,
  0x43, 0x43, 0x30, 0x00, 0x58, 0x59, 0x5a, 0x20, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xf3, 0x51, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x16, 0xcc,
  0x58, 0x59, 0x5a, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0xdf,
  0x00, 0x00, 0x3d, 0xbf, 0xff, 0xff, 0xff, 0xbb, 0x58, 0x59, 0x5a, 0x20,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4a, 0xbf, 0x00, 0x00, 0xb1, 0x37,
  0x00, 0x00, 0x0a, 0xb9, 0x58, 0x59, 0x5a, 0x20, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x28, 0x38, 0x00, 0x00, 0x11, 0x0a, 0x00, 0x00, 0xc8, 0xb9,
  0x63, 0x75, 0x72, 0x76, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a,
  0x00, 0x00, 0x00, 0x7c, 0x00, 0xf8, 0x01, 0x9c, 0x02, 0x75, 0x03, 0x83,
  0x04, 0xc9, 0x06, 0x4e, 0x08, 0x12, 0x0a, 0x18, 0x0c, 0x62, 0x0e, 0xf4,
  0x11, 0xcf, 0x14, 0xf6, 0x18, 0x6a, 0x1c, 0x2e, 0x20, 0x43, 0x24, 0xac,
  0x29, 0x6a, 0x2e, 0x7e, 0x33, 0xeb, 0x39, 0xb3, 0x3f, 0xd6, 0x46, 0x57,
  0x4d, 0x36, 0x54, 0x76, 0x5c, 0x17, 0x64, 0x1d, 0x6c, 0x86, 0x75, 0x56,
  0x7e, 0x8d, 0x88, 0x2c, 0x92, 0x36, 0x9c, 0xab, 0xa7, 0x8c, 0xb2, 0xdb,
  0xbe, 0x99, 0xca, 0xc7, 0xd7, 0x65, 0xe4, 0x77, 0xf1, 0xf9, 0xff, 0xff
};

static const uint8_t Rec2020_v2_micro_icc[] = {
  0x00, 0x00, 0x01, 0xcc, 0x6c, 0x63, 0x6d, 0x73, 0x02, 0x10, 0x00, 0x00,
  0x6d, 0x6e, 0x74, 0x72, 0x52, 0x47, 0x42, 0x20, 0x58, 0x59, 0x5a, 0x20,
  0x07, 0xe2, 0x00, 0x03, 0x00, 0x14, 0x00, 0x09, 0x00, 0x0e, 0x00, 0x1d,
  0x61, 0x63, 0x73, 0x70, 0x4d, 0x53, 0x46, 0x54, 0x00, 0x00, 0x00, 0x00,
  0x73, 0x61, 0x77, 0x73, 0x63, 0x74, 0x72, 0x6c, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf6, 0xd6,
  0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0xd3, 0x2d, 0x68, 0x61, 0x6e, 0x64,
  0x17, 0xcb, 0x44, 0xd1, 0x0d, 0xca, 0xe1, 0xc9, 0x03, 0x3e, 0x20, 0x85,
  0x4a, 0x67, 0x4e, 0xa9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,
  0x64, 0x65, 0x73, 0x63, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x5f,
  0x63, 0x70, 0x72, 0x74, 0x00, 0x00, 0x01, 0x0c, 0x00, 0x00, 0x00, 0x0c,
  0x77, 0x74, 0x70, 0x74, 0x00, 0x00, 0x01, 0x18, 0x00, 0x00, 0x00, 0x14,
  0x72, 0x58, 0x59, 0x5a, 0x00, 0x00, 0x01, 0x2c, 0x00, 0x00, 0x00, 0x14,
  0x67, 0x58, 0x59, 0x5a, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x14,
  0x62, 0x58, 0x59, 0x5a, 0x00, 0x00, 0x01, 0x54, 0x00, 0x00, 0x00, 0x14,
  0x72, 0x54, 0x52, 0x43, 0x00, 0x00, 0x01, 0x68, 0x00, 0x00, 0x00, 0x64,
  0x67, 0x54, 0x52, 0x43, 0x00, 0x00, 0x01, 0x68, 0x00, 0x00, 0x00, 0x64,
  0x62, 0x54, 0x52, 0x43, 0x00, 0x00, 0x01, 0x68, 0x00, 0x00, 0x00, 0x64,
  0x64, 0x65, 0x73, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
  0x75, 0x32, 0x30, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x74, 0x65, 0x78, 0x74, 0x00, 0x00, 0x00, 0x00,
  0x43, 0x43, 0x30, 0x00, 0x58, 0x59, 0x5a, 0x20, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xf3, 0x51, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x16, 0xcc,
  0x58, 0x59, 0x5a, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x69,
  0x00, 0x00, 0x47, 0x70, 0xff, 0xff, 0xff, 0x81, 0x58, 0x59, 0x5a, 0x20,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x6a, 0x00, 0x00, 0xac, 0xe3,
  0x00, 0x00, 0x07, 0xad, 0x58, 0x59, 0x5a, 0x20, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x20, 0x03, 0x00, 0x00, 0x0b, 0xad, 0x00, 0x00, 0xcb, 0xff,
  0x63, 0x75, 0x72, 0x76, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c,
  0x00, 0x00, 0x01, 0x53, 0x02, 0xa5, 0x03, 0xf8, 0x05, 0x4e, 0x06, 0xd6,
  0x08, 0x98, 0x0a, 0x8f, 0x0c, 0xc3, 0x0f, 0x31, 0x11, 0xdc, 0x14, 0xc3,
  0x17, 0xe8, 0x1b, 0x4c, 0x1e, 0xf0, 0x22, 0xd5, 0x26, 0xfa, 0x2b, 0x62,
  0x30, 0x0c, 0x34, 0xfa, 0x3a, 0x2b, 0x3f, 0xa2, 0x45, 0x5d, 0x4b, 0x5f,
  0x51, 0xa7, 0x58, 0x37, 0x5f, 0x0d, 0x66, 0x2c, 0x6d, 0x94, 0x75, 0x45,
  0x7d, 0x3f, 0x85, 0x84, 0x8e, 0x13, 0x96, 0xee, 0xa0, 0x13, 0xa9, 0x86,
  0xb3, 0x44, 0xbd, 0x4f, 0xc7, 0xa8, 0xd2, 0x4e, 0xdd, 0x42, 0xe8, 0x86,
  0xf4, 0x16, 0xff, 0xff
};

int main()
{
    pl_log log = pl_test_logger();
    pl_icc_object icc;

    icc = pl_icc_open(log, &TEST_PROFILE(sRGB_v2_nano_icc), NULL);
    REQUIRE_CMP(icc->csp.primaries, ==, PL_COLOR_PRIM_BT_709, "u");
    pl_icc_close(&icc);

    icc = pl_icc_open(log, &TEST_PROFILE(DisplayP3_v2_micro_icc), NULL);
    REQUIRE_CMP(icc->csp.primaries, ==, PL_COLOR_PRIM_DISPLAY_P3, "u");
    pl_icc_close(&icc);

    icc = pl_icc_open(log, &TEST_PROFILE(Rec2020_v2_micro_icc), NULL);
    REQUIRE_CMP(icc->csp.primaries, ==, PL_COLOR_PRIM_BT_2020, "u");
    pl_icc_close(&icc);

    pl_log_destroy(&log);
}
