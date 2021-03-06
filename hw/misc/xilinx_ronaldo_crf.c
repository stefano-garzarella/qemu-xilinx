/*
 * QEMU model of the CRF_APB APB control registers for clock controller. The RST_ctrl_fpd will be added to this as well
 *
 * Copyright (c) 2014 Xilinx Inc.
 *
 * Autogenerated by xregqemu.py 2014-01-22.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "hw/sysbus.h"
#include "hw/register.h"
#include "qemu/bitops.h"
#include "qemu/log.h"

#include "hw/fdt_generic_util.h"

#ifndef XILINX_CRF_APB_ERR_DEBUG
#define XILINX_CRF_APB_ERR_DEBUG 0
#endif

#define TYPE_XILINX_CRF_APB "xlnx.ronaldo_crf"

#define XILINX_CRF_APB(obj) \
     OBJECT_CHECK(CRF_APB, (obj), TYPE_XILINX_CRF_APB)

REG32(ERR_CTRL, 0x0)
    FIELD(ERR_CTRL, SLVERR_ENABLE, 1, 0)
REG32(IR_STATUS, 0x4)
    FIELD(IR_STATUS, ADDR_DECODE_ERR, 1, 0)
REG32(IR_MASK, 0x8)
    FIELD(IR_MASK, ADDR_DECODE_ERR, 1, 0)
REG32(IR_ENABLE, 0xc)
    FIELD(IR_ENABLE, ADDR_DECODE_ERR, 1, 0)
REG32(IR_DISABLE, 0x10)
    FIELD(IR_DISABLE, ADDR_DECODE_ERR, 1, 0)
REG32(CRF_ECO, 0x18)
REG32(APLL_CTRL, 0x20)
    FIELD(APLL_CTRL, POST_SRC, 3, 24)
    FIELD(APLL_CTRL, PRE_SRC, 3, 20)
    FIELD(APLL_CTRL, CLKOUTDIV, 1, 17)
    FIELD(APLL_CTRL, DIV2, 1, 16)
    FIELD(APLL_CTRL, FBDIV, 7, 8)
    FIELD(APLL_CTRL, BYPASS, 1, 3)
    FIELD(APLL_CTRL, RESET, 1, 0)
REG32(APLL_CFG, 0x24)
    FIELD(APLL_CFG, LOCK_DLY, 7, 25)
    FIELD(APLL_CFG, LOCK_CNT, 10, 13)
    FIELD(APLL_CFG, LFHF, 2, 10)
    FIELD(APLL_CFG, CP, 4, 5)
    FIELD(APLL_CFG, RES, 4, 0)
REG32(APLL_FRAC_CFG, 0x28)
    FIELD(APLL_FRAC_CFG, ENABLED, 1, 31)
    FIELD(APLL_FRAC_CFG, SEED, 3, 22)
    FIELD(APLL_FRAC_CFG, ALGRTHM, 1, 19)
    FIELD(APLL_FRAC_CFG, ORDER, 1, 18)
    FIELD(APLL_FRAC_CFG, DATA, 16, 0)
REG32(DPLL_CTRL, 0x2c)
    FIELD(DPLL_CTRL, POST_SRC, 3, 24)
    FIELD(DPLL_CTRL, PRE_SRC, 3, 20)
    FIELD(DPLL_CTRL, CLKOUTDIV, 1, 17)
    FIELD(DPLL_CTRL, DIV2, 1, 16)
    FIELD(DPLL_CTRL, FBDIV, 7, 8)
    FIELD(DPLL_CTRL, BYPASS, 1, 3)
    FIELD(DPLL_CTRL, RESET, 1, 0)
REG32(DPLL_CFG, 0x30)
    FIELD(DPLL_CFG, LOCK_DLY, 7, 25)
    FIELD(DPLL_CFG, LOCK_CNT, 10, 13)
    FIELD(DPLL_CFG, LFHF, 2, 10)
    FIELD(DPLL_CFG, CP, 4, 5)
    FIELD(DPLL_CFG, RES, 4, 0)
REG32(DPLL_FRAC_CFG, 0x34)
    FIELD(DPLL_FRAC_CFG, ENABLED, 1, 31)
    FIELD(DPLL_FRAC_CFG, SEED, 3, 22)
    FIELD(DPLL_FRAC_CFG, ALGRTHM, 1, 19)
    FIELD(DPLL_FRAC_CFG, ORDER, 1, 18)
    FIELD(DPLL_FRAC_CFG, DATA, 16, 0)
REG32(VPLL_CTRL, 0x38)
    FIELD(VPLL_CTRL, POST_SRC, 3, 24)
    FIELD(VPLL_CTRL, PRE_SRC, 3, 20)
    FIELD(VPLL_CTRL, CLKOUTDIV, 1, 17)
    FIELD(VPLL_CTRL, DIV2, 1, 16)
    FIELD(VPLL_CTRL, FBDIV, 7, 8)
    FIELD(VPLL_CTRL, BYPASS, 1, 3)
    FIELD(VPLL_CTRL, RESET, 1, 0)
REG32(VPLL_CFG, 0x3c)
    FIELD(VPLL_CFG, LOCK_DLY, 7, 25)
    FIELD(VPLL_CFG, LOCK_CNT, 10, 13)
    FIELD(VPLL_CFG, LFHF, 2, 10)
    FIELD(VPLL_CFG, CP, 4, 5)
    FIELD(VPLL_CFG, RES, 4, 0)
REG32(VPLL_FRAC_CFG, 0x40)
    FIELD(VPLL_FRAC_CFG, ENABLED, 1, 31)
    FIELD(VPLL_FRAC_CFG, SEED, 3, 22)
    FIELD(VPLL_FRAC_CFG, ALGRTHM, 1, 19)
    FIELD(VPLL_FRAC_CFG, ORDER, 1, 18)
    FIELD(VPLL_FRAC_CFG, DATA, 16, 0)
REG32(PLL_STATUS, 0x44)
    FIELD(PLL_STATUS, VPLL_STABLE, 1, 5)
    FIELD(PLL_STATUS, DPLL_STABLE, 1, 4)
    FIELD(PLL_STATUS, APLL_STABLE, 1, 3)
    FIELD(PLL_STATUS, VPLL_LOCK, 1, 2)
    FIELD(PLL_STATUS, DPLL_LOCK, 1, 1)
    FIELD(PLL_STATUS, APLL_LOCK, 1, 0)
REG32(APLL_TO_LPD_CTRL, 0x48)
    FIELD(APLL_TO_LPD_CTRL, DIVISOR0, 6, 8)
REG32(DPLL_TO_LPD_CTRL, 0x4c)
    FIELD(DPLL_TO_LPD_CTRL, DIVISOR0, 6, 8)
REG32(VPLL_TO_LPD_CTRL, 0x50)
    FIELD(VPLL_TO_LPD_CTRL, DIVISOR0, 6, 8)
REG32(CPU_A9_CTRL, 0x60)
    FIELD(CPU_A9_CTRL, A9CLKSTOP, 2, 26)
    FIELD(CPU_A9_CTRL, CLKACT_HALF, 1, 25)
    FIELD(CPU_A9_CTRL, CLKACT_FULL, 1, 24)
    FIELD(CPU_A9_CTRL, DIVISOR0, 6, 8)
    FIELD(CPU_A9_CTRL, SRCSEL, 3, 0)
REG32(DBG_TRACE_CTRL, 0x64)
    FIELD(DBG_TRACE_CTRL, CLKACT, 1, 24)
    FIELD(DBG_TRACE_CTRL, DIVISOR0, 6, 8)
    FIELD(DBG_TRACE_CTRL, SRCSEL, 3, 0)
REG32(DBG_FPD_CTRL, 0x68)
    FIELD(DBG_FPD_CTRL, CLKACT, 1, 24)
    FIELD(DBG_FPD_CTRL, DIVISOR0, 6, 8)
    FIELD(DBG_FPD_CTRL, SRCSEL, 3, 0)
REG32(DP_VIDEO_REF_CTRL, 0x70)
    FIELD(DP_VIDEO_REF_CTRL, CLKACT, 1, 24)
    FIELD(DP_VIDEO_REF_CTRL, DIVISOR0, 6, 8)
    FIELD(DP_VIDEO_REF_CTRL, SRCSEL, 3, 0)
REG32(DP_AUDIO_REF_CTRL, 0x74)
    FIELD(DP_AUDIO_REF_CTRL, CLKACT, 1, 24)
    FIELD(DP_AUDIO_REF_CTRL, DIVISOR0, 6, 8)
    FIELD(DP_AUDIO_REF_CTRL, SRCSEL, 3, 0)
REG32(DP_LINK_REF_CTRL, 0x78)
    FIELD(DP_LINK_REF_CTRL, CLKACT, 1, 24)
    FIELD(DP_LINK_REF_CTRL, DIVISOR1, 6, 16)
    FIELD(DP_LINK_REF_CTRL, DIVISOR0, 6, 8)
    FIELD(DP_LINK_REF_CTRL, SRCSEL, 3, 0)
REG32(DP_STC_REF_CTRL, 0x7c)
    FIELD(DP_STC_REF_CTRL, CLKACT, 1, 24)
    FIELD(DP_STC_REF_CTRL, DIVISOR1, 6, 16)
    FIELD(DP_STC_REF_CTRL, DIVISOR0, 6, 8)
    FIELD(DP_STC_REF_CTRL, SRCSEL, 3, 0)
REG32(DDR_CTRL, 0x80)
    FIELD(DDR_CTRL, CLKACT, 1, 24)
    FIELD(DDR_CTRL, DIVISOR0, 6, 8)
    FIELD(DDR_CTRL, SRCSEL, 3, 0)
REG32(GPU_REF_CTRL, 0x84)
    FIELD(GPU_REF_CTRL, PP1_CLKACT, 1, 26)
    FIELD(GPU_REF_CTRL, PP0_CLKACT, 1, 25)
    FIELD(GPU_REF_CTRL, CLKACT, 1, 24)
    FIELD(GPU_REF_CTRL, DIVISOR0, 6, 8)
    FIELD(GPU_REF_CTRL, SRCSEL, 3, 0)
REG32(AFI0_REF_CTRL, 0x88)
    FIELD(AFI0_REF_CTRL, CLKACT, 1, 24)
    FIELD(AFI0_REF_CTRL, DIVISOR0, 6, 8)
    FIELD(AFI0_REF_CTRL, SRCSEL, 3, 0)
REG32(AFI1_REF_CTRL, 0x8c)
    FIELD(AFI1_REF_CTRL, CLKACT, 1, 24)
    FIELD(AFI1_REF_CTRL, DIVISOR0, 6, 8)
    FIELD(AFI1_REF_CTRL, SRCSEL, 3, 0)
REG32(AFI2_REF_CTRL, 0x90)
    FIELD(AFI2_REF_CTRL, CLKACT, 1, 24)
    FIELD(AFI2_REF_CTRL, DIVISOR0, 6, 8)
    FIELD(AFI2_REF_CTRL, SRCSEL, 3, 0)
REG32(AFI3_REF_CTRL, 0x94)
    FIELD(AFI3_REF_CTRL, CLKACT, 1, 24)
    FIELD(AFI3_REF_CTRL, DIVISOR0, 6, 8)
    FIELD(AFI3_REF_CTRL, SRCSEL, 3, 0)
REG32(AFI4_REF_CTRL, 0x98)
    FIELD(AFI4_REF_CTRL, CLKACT, 1, 24)
    FIELD(AFI4_REF_CTRL, DIVISOR0, 6, 8)
    FIELD(AFI4_REF_CTRL, SRCSEL, 3, 0)
REG32(AFI5_REF_CTRL, 0x9c)
    FIELD(AFI5_REF_CTRL, CLKACT, 1, 24)
    FIELD(AFI5_REF_CTRL, DIVISOR0, 6, 8)
    FIELD(AFI5_REF_CTRL, SRCSEL, 3, 0)
REG32(SATA_REF_CTRL, 0xa0)
    FIELD(SATA_REF_CTRL, CLKACT, 1, 24)
    FIELD(SATA_REF_CTRL, DIVISOR0, 6, 8)
    FIELD(SATA_REF_CTRL, SRCSEL, 3, 0)
REG32(PCIE_REF_CTRL, 0xb4)
    FIELD(PCIE_REF_CTRL, CLKACT, 1, 24)
    FIELD(PCIE_REF_CTRL, DIVISOR0, 6, 8)
    FIELD(PCIE_REF_CTRL, SRCSEL, 3, 0)
REG32(GDMA_REF_CTRL, 0xb8)
    FIELD(GDMA_REF_CTRL, CLKACT, 1, 24)
    FIELD(GDMA_REF_CTRL, DIVISOR0, 6, 8)
    FIELD(GDMA_REF_CTRL, SRCSEL, 3, 0)
REG32(DPDMA_REF_CTRL, 0xbc)
    FIELD(DPDMA_REF_CTRL, CLKACT, 1, 24)
    FIELD(DPDMA_REF_CTRL, DIVISOR0, 6, 8)
    FIELD(DPDMA_REF_CTRL, SRCSEL, 3, 0)
REG32(TOPSW_MAIN_CTRL, 0xc0)
    FIELD(TOPSW_MAIN_CTRL, CLKACT, 1, 24)
    FIELD(TOPSW_MAIN_CTRL, DIVISOR0, 6, 8)
    FIELD(TOPSW_MAIN_CTRL, SRCSEL, 3, 0)
REG32(TOPSW_LSBUS_CTRL, 0xc4)
    FIELD(TOPSW_LSBUS_CTRL, CLKACT, 1, 24)
    FIELD(TOPSW_LSBUS_CTRL, DIVISOR0, 6, 8)
    FIELD(TOPSW_LSBUS_CTRL, SRCSEL, 3, 0)
REG32(GTGREF0_REF_CTRL, 0xc8)
    FIELD(GTGREF0_REF_CTRL, CLKACT, 1, 24)
    FIELD(GTGREF0_REF_CTRL, DIVISOR0, 6, 8)
    FIELD(GTGREF0_REF_CTRL, SRCSEL, 3, 0)
REG32(GTGREF1_REF_CTRL, 0xcc)
    FIELD(GTGREF1_REF_CTRL, CLKACT, 1, 24)
    FIELD(GTGREF1_REF_CTRL, DIVISOR0, 6, 8)
    FIELD(GTGREF1_REF_CTRL, SRCSEL, 3, 0)
REG32(DFT300_REF_CTRL, 0xd0)
    FIELD(DFT300_REF_CTRL, CLKACT, 1, 24)
    FIELD(DFT300_REF_CTRL, DIVISOR0, 6, 8)
    FIELD(DFT300_REF_CTRL, SRCSEL, 3, 0)
REG32(DFT270_REF_CTRL, 0xd4)
    FIELD(DFT270_REF_CTRL, CLKACT, 1, 24)
    FIELD(DFT270_REF_CTRL, DIVISOR0, 6, 8)
    FIELD(DFT270_REF_CTRL, SRCSEL, 3, 0)
REG32(DFT250_REF_CTRL, 0xd8)
    FIELD(DFT250_REF_CTRL, CLKACT, 1, 24)
    FIELD(DFT250_REF_CTRL, DIVISOR0, 6, 8)
    FIELD(DFT250_REF_CTRL, SRCSEL, 3, 0)
REG32(DFT125_REF_CTRL, 0xdc)
    FIELD(DFT125_REF_CTRL, CLKACT, 1, 24)
    FIELD(DFT125_REF_CTRL, DIVISOR0, 6, 8)
    FIELD(DFT125_REF_CTRL, SRCSEL, 3, 0)

REG32(RST_FPD_TOP, 0x100)
    FIELD(RST_FPD_TOP, PCIE_BRDG_RESET, 1, 18)
    FIELD(RST_FPD_TOP, PCIE_CTRL_RESET, 1, 17)
    FIELD(RST_FPD_TOP, DP_RESET, 1, 16)
    FIELD(RST_FPD_TOP, AFI_FM5_RESET, 1, 12)
    FIELD(RST_FPD_TOP, AFI_FM4_RESET, 1, 11)
    FIELD(RST_FPD_TOP, AFI_FM3_RESET, 1, 10)
    FIELD(RST_FPD_TOP, AFI_FM2_RESET, 1, 9)
    FIELD(RST_FPD_TOP, AFI_FM1_RESET, 1, 8)
    FIELD(RST_FPD_TOP, AFI_FM0_RESET, 1, 7)
    FIELD(RST_FPD_TOP, GDMA_RESET, 1, 6)
    FIELD(RST_FPD_TOP, GPU_PP1_RESET, 1, 5)
    FIELD(RST_FPD_TOP, GPU_PP0_RESET, 1, 4)
    FIELD(RST_FPD_TOP, GPU_RESET, 1, 3)
    FIELD(RST_FPD_TOP, GT_RESET, 1, 2)
    FIELD(RST_FPD_TOP, SATA_RESET, 1, 1)
REG32(RST_FPD_APU, 0x104)
    FIELD(RST_FPD_APU, PERI_RESET, 1, 13)
    FIELD(RST_FPD_APU, SCU_RESET, 1, 12)
    FIELD(RST_FPD_APU, CPU1_AWDT_RESET, 1, 9)
    FIELD(RST_FPD_APU, CPU0_AWDT_RESET, 1, 8)
    FIELD(RST_FPD_APU, CPU1_CP14_RESET, 1, 5)
    FIELD(RST_FPD_APU, CPU0_CP14_RESET, 1, 4)
    FIELD(RST_FPD_APU, CPU3_A9_RESET, 1, 3)
    FIELD(RST_FPD_APU, CPU2_A9_RESET, 1, 2)
    FIELD(RST_FPD_APU, CPU1_A9_RESET, 1, 1)
    FIELD(RST_FPD_APU, CPU0_A9_RESET, 1, 0)
REG32(RST_DDR_SS, 0x108)
    FIELD(RST_DDR_SS, DDR_RESET, 1, 3)
    FIELD(RST_DDR_SS, APM_RESET, 1, 2)
    FIELD(RST_DDR_SS, QOS_RESET, 1, 1)
    FIELD(RST_DDR_SS, XMPU_RESET, 1, 0)

#define R_MAX (R_RST_DDR_SS + 1)

typedef struct CRF_APB {
    SysBusDevice parent_obj;
    MemoryRegion iomem;
    qemu_irq irq_ir;

    uint32_t regs[R_MAX];
    RegisterInfo regs_info[R_MAX];
} CRF_APB;

static const MemoryRegionOps crf_apb_ops = {
    .read = register_read_memory_le,
    .write = register_write_memory_le,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .valid = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

static void ir_update_irq(CRF_APB *s)
{
    bool pending = s->regs[R_IR_STATUS] & ~s->regs[R_IR_MASK];
    qemu_set_irq(s->irq_ir, pending);
}

static void ir_status_postw(RegisterInfo *reg, uint64_t val64)
{
    CRF_APB *s = XILINX_CRF_APB(reg->opaque);
    ir_update_irq(s);
}

static uint64_t ir_enable_prew(RegisterInfo *reg, uint64_t val64)
{
    CRF_APB *s = XILINX_CRF_APB(reg->opaque);
    uint32_t val = val64;

    s->regs[R_IR_MASK] &= ~val;
    ir_update_irq(s);
    return 0;
}

static uint64_t ir_disable_prew(RegisterInfo *reg, uint64_t val64)
{
    CRF_APB *s = XILINX_CRF_APB(reg->opaque);
    uint32_t val = val64;

    s->regs[R_IR_MASK] |= val;
    ir_update_irq(s);
    return 0;
}

static RegisterAccessInfo crf_apb_regs_info[] = {
    {   .name = "ERR_CTRL",  .decode.addr = A_ERR_CTRL,
    },{ .name = "IR_STATUS",  .decode.addr = A_IR_STATUS,
        .w1c = 0x1,
        .post_write = ir_status_postw,
    },{ .name = "IR_MASK",  .decode.addr = A_IR_MASK,
        .reset = 0x1,
        .ro = 0x1,
    },{ .name = "IR_ENABLE",  .decode.addr = A_IR_ENABLE,
        .pre_write = ir_enable_prew,
    },{ .name = "IR_DISABLE",  .decode.addr = A_IR_DISABLE,
        .pre_write = ir_disable_prew,
    },{ .name = "CRF_ECO",  .decode.addr = A_CRF_ECO,
    },{ .name = "APLL_CTRL",  .decode.addr = A_APLL_CTRL,
        .reset = 0x2809,
        .rsvd = 0xf88c80f6L,
    },{ .name = "APLL_CFG",  .decode.addr = A_APLL_CFG,
        .rsvd = 0x1801210,
    },{ .name = "APLL_FRAC_CFG",  .decode.addr = A_APLL_FRAC_CFG,
        .rsvd = 0x7e330000,
    },{ .name = "DPLL_CTRL",  .decode.addr = A_DPLL_CTRL,
        .reset = 0x2809,
        .rsvd = 0xf88c80f6L,
    },{ .name = "DPLL_CFG",  .decode.addr = A_DPLL_CFG,
        .rsvd = 0x1801210,
    },{ .name = "DPLL_FRAC_CFG",  .decode.addr = A_DPLL_FRAC_CFG,
        .rsvd = 0x7e330000,
    },{ .name = "VPLL_CTRL",  .decode.addr = A_VPLL_CTRL,
        .reset = 0x2809,
        .rsvd = 0xf88c80f6L,
    },{ .name = "VPLL_CFG",  .decode.addr = A_VPLL_CFG,
        .rsvd = 0x1801210,
    },{ .name = "VPLL_FRAC_CFG",  .decode.addr = A_VPLL_FRAC_CFG,
        .rsvd = 0x7e330000,
    },{ .name = "PLL_STATUS",  .decode.addr = A_PLL_STATUS,
        .reset = 0x3f,
        .rsvd = 0xc0,
        .ro = 0x3f,
    },{ .name = "APLL_TO_LPD_CTRL",  .decode.addr = A_APLL_TO_LPD_CTRL,
        .reset = 0x400,
        .rsvd = 0xc0ff,
    },{ .name = "DPLL_TO_LPD_CTRL",  .decode.addr = A_DPLL_TO_LPD_CTRL,
        .reset = 0x400,
        .rsvd = 0xc0ff,
    },{ .name = "VPLL_TO_LPD_CTRL",  .decode.addr = A_VPLL_TO_LPD_CTRL,
        .reset = 0x400,
        .rsvd = 0xc0ff,
    },{ .name = "CPU_A9_CTRL",  .decode.addr = A_CPU_A9_CTRL,
        .reset = 0xf000400,
        .rsvd = 0xf0ffc0f8L,
    },{ .name = "DBG_TRACE_CTRL",  .decode.addr = A_DBG_TRACE_CTRL,
        .reset = 0x2500,
        .rsvd = 0xfeffc0f8L,
    },{ .name = "DBG_FPD_CTRL",  .decode.addr = A_DBG_FPD_CTRL,
        .reset = 0x1002500,
        .rsvd = 0xfeffc0f8L,
    },{ .name = "DP_VIDEO_REF_CTRL",  .decode.addr = A_DP_VIDEO_REF_CTRL,
        .reset = 0x1002300,
        .rsvd = 0xfeffc0f8L,
    },{ .name = "DP_AUDIO_REF_CTRL",  .decode.addr = A_DP_AUDIO_REF_CTRL,
        .reset = 0x1002300,
        .rsvd = 0xfeffc0f8L,
    },{ .name = "DP_LINK_REF_CTRL",  .decode.addr = A_DP_LINK_REF_CTRL,
        .reset = 0x1203200,
        .rsvd = 0xfec0c0f8L,
    },{ .name = "DP_STC_REF_CTRL",  .decode.addr = A_DP_STC_REF_CTRL,
        .reset = 0x1203200,
        .rsvd = 0xfec0c0f8L,
    },{ .name = "DDR_CTRL",  .decode.addr = A_DDR_CTRL,
        .reset = 0x1000500,
        .rsvd = 0xfeffc0f8L,
    },{ .name = "GPU_REF_CTRL",  .decode.addr = A_GPU_REF_CTRL,
        .reset = 0x1500,
        .rsvd = 0xf8ffc0f8L,
    },{ .name = "AFI0_REF_CTRL",  .decode.addr = A_AFI0_REF_CTRL,
        .reset = 0x600,
        .rsvd = 0x7effc0f8,
    },{ .name = "AFI1_REF_CTRL",  .decode.addr = A_AFI1_REF_CTRL,
        .reset = 0x600,
        .rsvd = 0x7effc0f8,
    },{ .name = "AFI2_REF_CTRL",  .decode.addr = A_AFI2_REF_CTRL,
        .reset = 0x600,
        .rsvd = 0x7effc0f8,
    },{ .name = "AFI3_REF_CTRL",  .decode.addr = A_AFI3_REF_CTRL,
        .reset = 0x600,
        .rsvd = 0x7effc0f8,
    },{ .name = "AFI4_REF_CTRL",  .decode.addr = A_AFI4_REF_CTRL,
        .reset = 0x600,
        .rsvd = 0x7effc0f8,
    },{ .name = "AFI5_REF_CTRL",  .decode.addr = A_AFI5_REF_CTRL,
        .reset = 0x600,
        .rsvd = 0x7effc0f8,
    },{ .name = "SATA_REF_CTRL",  .decode.addr = A_SATA_REF_CTRL,
        .reset = 0x1001600,
        .rsvd = 0xfeffc0f8L,
    },{ .name = "PCIE_REF_CTRL",  .decode.addr = A_PCIE_REF_CTRL,
        .reset = 0x1500,
        .rsvd = 0xfeffc0f8L,
    },{ .name = "GDMA_REF_CTRL",  .decode.addr = A_GDMA_REF_CTRL,
        .reset = 0x1000500,
        .rsvd = 0xfeffc0f8L,
    },{ .name = "DPDMA_REF_CTRL",  .decode.addr = A_DPDMA_REF_CTRL,
        .reset = 0x1000500,
        .rsvd = 0xfeffc0f8L,
    },{ .name = "TOPSW_MAIN_CTRL",  .decode.addr = A_TOPSW_MAIN_CTRL,
        .reset = 0x1000500,
        .rsvd = 0xfeffc0f8L,
    },{ .name = "TOPSW_LSBUS_CTRL",  .decode.addr = A_TOPSW_LSBUS_CTRL,
        .reset = 0x1000800,
        .rsvd = 0xfeffc0f8L,
    },{ .name = "GTGREF0_REF_CTRL",  .decode.addr = A_GTGREF0_REF_CTRL,
        .reset = 0x800,
        .rsvd = 0xfeffc0f8L,
    },{ .name = "GTGREF1_REF_CTRL",  .decode.addr = A_GTGREF1_REF_CTRL,
        .reset = 0x800,
        .rsvd = 0xfeffc0f8L,
    },{ .name = "DFT300_REF_CTRL",  .decode.addr = A_DFT300_REF_CTRL,
        .reset = 0x800,
        .rsvd = 0xfeffc0f8L,
    },{ .name = "DFT270_REF_CTRL",  .decode.addr = A_DFT270_REF_CTRL,
        .reset = 0x800,
        .rsvd = 0xfeffc0f8L,
    },{ .name = "DFT250_REF_CTRL",  .decode.addr = A_DFT250_REF_CTRL,
        .reset = 0x800,
        .rsvd = 0xfeffc0f8L,
    },{ .name = "DFT125_REF_CTRL",  .decode.addr = A_DFT125_REF_CTRL,
        .reset = 0x800,
        .rsvd = 0xfeffc0f8L,
    },{ .name = "RST_FPD_TOP",  .decode.addr = A_RST_FPD_TOP,
        .reset = 0x71ffe,
        .rsvd = 0xf8e001,
    },{ .name = "RST_FPD_APU",  .decode.addr = A_RST_FPD_APU,
        .reset = 0x334f,
        .rsvd = 0xffcccc,
        .gpios = (RegisterGPIOMapping[]) {
            { .name = "RST_A9", .bit_pos = 0, .num = 4 },
            {},
        },
        .inhibit_reset = 1u << 31,
    },{ .name = "RST_DDR_SS",  .decode.addr = A_RST_DDR_SS,
        .reset = 0xf,
        .rsvd = 0xf0,
    }
};

static void crf_apb_reset(DeviceState *dev)
{
    CRF_APB *s = XILINX_CRF_APB(dev);
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(s->regs_info); ++i) {
        register_reset(&s->regs_info[i]);
    }

    ir_update_irq(s);
}

static void crf_apb_realize(DeviceState *dev, Error **errp)
{
    CRF_APB *s = XILINX_CRF_APB(dev);
    const char *prefix = object_get_canonical_path(OBJECT(dev));
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(crf_apb_regs_info); ++i) {
        RegisterInfo *r = &s->regs_info[i];

        *r = (RegisterInfo) {
            .data = (uint8_t *)&s->regs[
                    crf_apb_regs_info[i].decode.addr/4],
            .data_size = sizeof(uint32_t),
            .access = &crf_apb_regs_info[i],
            .debug = XILINX_CRF_APB_ERR_DEBUG,
            .prefix = prefix,
            .opaque = s,
        };
        register_init(r);
        qdev_pass_all_gpios(DEVICE(r), dev);

        memory_region_init_io(&r->mem, OBJECT(dev), &crf_apb_ops, r,
                              r->access->name, 4);
        memory_region_add_subregion(&s->iomem, r->access->decode.addr, &r->mem);
    }
}

static void crf_apb_init(Object *obj)
{
    CRF_APB *s = XILINX_CRF_APB(obj);
    SysBusDevice *sbd = SYS_BUS_DEVICE(obj);

    memory_region_init(&s->iomem, obj, TYPE_XILINX_CRF_APB, R_MAX * 4);
    sysbus_init_mmio(sbd, &s->iomem);
    sysbus_init_irq(sbd, &s->irq_ir);
}

static const VMStateDescription vmstate_crf_apb = {
    .name = TYPE_XILINX_CRF_APB,
    .version_id = 1,
    .minimum_version_id = 1,
    .minimum_version_id_old = 1,
    .fields = (VMStateField[]) {
        VMSTATE_UINT32_ARRAY(regs, CRF_APB, R_MAX),
        VMSTATE_END_OF_LIST(),
    }
};

static const FDTGenericGPIOSet crf_gpios[] = {
    {
        .names = &fdt_generic_gpio_name_set_gpio,
        .gpios = (FDTGenericGPIOConnection[]) {
            { .name = "RST_A9",   .fdt_index = 0,   .range = 4 },
            { },
        }
    },
    { },
};

static void crf_apb_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);
    FDTGenericGPIOClass *fggc = FDT_GENERIC_GPIO_CLASS(klass);

    dc->reset = crf_apb_reset;
    dc->realize = crf_apb_realize;
    dc->vmsd = &vmstate_crf_apb;
    fggc->controller_gpios = crf_gpios;
}

static const TypeInfo crf_apb_info = {
    .name          = TYPE_XILINX_CRF_APB,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(CRF_APB),
    .class_init    = crf_apb_class_init,
    .instance_init = crf_apb_init,
    .interfaces    = (InterfaceInfo[]) {
        { TYPE_FDT_GENERIC_GPIO },
        { }
    },
};

static void crf_apb_register_types(void)
{
    type_register_static(&crf_apb_info);
}

type_init(crf_apb_register_types)
