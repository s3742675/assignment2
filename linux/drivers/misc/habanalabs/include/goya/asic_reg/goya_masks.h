/* SPDX-License-Identifier: GPL-2.0
 *
 * Copyright 2016-2018 HabanaLabs, Ltd.
 * All Rights Reserved.
 *
 */

#ifndef ASIC_REG_GOYA_MASKS_H_
#define ASIC_REG_GOYA_MASKS_H_

#include "goya_regs.h"

/* Useful masks for bits in various registers */
#define QMAN_DMA_ENABLE		(\
	(1 << DMA_QM_0_GLBL_CFG0_PQF_EN_SHIFT) | \
	(1 << DMA_QM_0_GLBL_CFG0_CQF_EN_SHIFT) | \
	(1 << DMA_QM_0_GLBL_CFG0_CP_EN_SHIFT) | \
	(1 << DMA_QM_0_GLBL_CFG0_DMA_EN_SHIFT))

#define QMAN_DMA_FULLY_TRUSTED	(\
	(1 << DMA_QM_0_GLBL_PROT_PQF_PROT_SHIFT) | \
	(1 << DMA_QM_0_GLBL_PROT_CQF_PROT_SHIFT) | \
	(1 << DMA_QM_0_GLBL_PROT_CP_PROT_SHIFT) | \
	(1 << DMA_QM_0_GLBL_PROT_DMA_PROT_SHIFT) | \
	(1 << DMA_QM_0_GLBL_PROT_PQF_ERR_PROT_SHIFT) | \
	(1 << DMA_QM_0_GLBL_PROT_CQF_ERR_PROT_SHIFT) | \
	(1 << DMA_QM_0_GLBL_PROT_CP_ERR_PROT_SHIFT) | \
	(1 << DMA_QM_0_GLBL_PROT_DMA_ERR_PROT_SHIFT))

#define QMAN_DMA_PARTLY_TRUSTED	(\
	(1 << DMA_QM_0_GLBL_PROT_PQF_PROT_SHIFT) | \
	(1 << DMA_QM_0_GLBL_PROT_CQF_PROT_SHIFT) | \
	(1 << DMA_QM_0_GLBL_PROT_CP_PROT_SHIFT) | \
	(1 << DMA_QM_0_GLBL_PROT_PQF_ERR_PROT_SHIFT) | \
	(1 << DMA_QM_0_GLBL_PROT_CQF_ERR_PROT_SHIFT) | \
	(1 << DMA_QM_0_GLBL_PROT_CP_ERR_PROT_SHIFT) | \
	(1 << DMA_QM_0_GLBL_PROT_DMA_ERR_PROT_SHIFT))

#define QMAN_DMA_STOP		(\
	(1 << DMA_QM_0_GLBL_CFG1_PQF_STOP_SHIFT) | \
	(1 << DMA_QM_0_GLBL_CFG1_CQF_STOP_SHIFT) | \
	(1 << DMA_QM_0_GLBL_CFG1_CP_STOP_SHIFT) | \
	(1 << DMA_QM_0_GLBL_CFG1_DMA_STOP_SHIFT))

#define QMAN_DMA_IS_STOPPED		(\
	(1 << DMA_QM_0_GLBL_STS0_PQF_IS_STOP_SHIFT) | \
	(1 << DMA_QM_0_GLBL_STS0_CQF_IS_STOP_SHIFT) | \
	(1 << DMA_QM_0_GLBL_STS0_CP_IS_STOP_SHIFT) | \
	(1 << DMA_QM_0_GLBL_STS0_DMA_IS_STOP_SHIFT))

#define QMAN_DMA_ERR_MSG_EN	(\
	(1 << DMA_QM_0_GLBL_ERR_CFG_PQF_ERR_MSG_EN_SHIFT) | \
	(1 << DMA_QM_0_GLBL_ERR_CFG_CQF_ERR_MSG_EN_SHIFT) | \
	(1 << DMA_QM_0_GLBL_ERR_CFG_CP_ERR_MSG_EN_SHIFT) | \
	(1 << DMA_QM_0_GLBL_ERR_CFG_DMA_ERR_MSG_EN_SHIFT) | \
	(1 << DMA_QM_0_GLBL_ERR_CFG_PQF_STOP_ON_ERR_SHIFT) | \
	(1 << DMA_QM_0_GLBL_ERR_CFG_CQF_STOP_ON_ERR_SHIFT) | \
	(1 << DMA_QM_0_GLBL_ERR_CFG_CP_STOP_ON_ERR_SHIFT))

#define QMAN_MME_ENABLE		(\
	(1 << MME_QM_GLBL_CFG0_PQF_EN_SHIFT) | \
	(1 << MME_QM_GLBL_CFG0_CQF_EN_SHIFT) | \
	(1 << MME_QM_GLBL_CFG0_CP_EN_SHIFT))

#define CMDQ_MME_ENABLE		(\
	(1 << MME_CMDQ_GLBL_CFG0_CQF_EN_SHIFT) | \
	(1 << MME_CMDQ_GLBL_CFG0_CP_EN_SHIFT))

#define QMAN_MME_STOP		(\
	(1 << MME_QM_GLBL_CFG1_PQF_STOP_SHIFT) | \
	(1 << MME_QM_GLBL_CFG1_CQF_STOP_SHIFT) | \
	(1 << MME_QM_GLBL_CFG1_CP_STOP_SHIFT))

#define CMDQ_MME_STOP		(\
	(1 << MME_CMDQ_GLBL_CFG1_CQF_STOP_SHIFT) | \
	(1 << MME_CMDQ_GLBL_CFG1_CP_STOP_SHIFT))

#define QMAN_MME_ERR_MSG_EN	(\
	(1 << MME_QM_GLBL_ERR_CFG_PQF_ERR_MSG_EN_SHIFT) | \
	(1 << MME_QM_GLBL_ERR_CFG_CQF_ERR_MSG_EN_SHIFT) | \
	(1 << MME_QM_GLBL_ERR_CFG_CP_ERR_MSG_EN_SHIFT) | \
	(1 << MME_QM_GLBL_ERR_CFG_DMA_ERR_MSG_EN_SHIFT) | \
	(1 << MME_QM_GLBL_ERR_CFG_PQF_STOP_ON_ERR_SHIFT) | \
	(1 << MME_QM_GLBL_ERR_CFG_CQF_STOP_ON_ERR_SHIFT) | \
	(1 << MME_QM_GLBL_ERR_CFG_CP_STOP_ON_ERR_SHIFT) | \
	(1 << MME_QM_GLBL_ERR_CFG_DMA_STOP_ON_ERR_SHIFT))

#define CMDQ_MME_ERR_MSG_EN	(\
	(1 << MME_CMDQ_GLBL_ERR_CFG_PQF_ERR_MSG_EN_SHIFT) | \
	(1 << MME_CMDQ_GLBL_ERR_CFG_CQF_ERR_MSG_EN_SHIFT) | \
	(1 << MME_CMDQ_GLBL_ERR_CFG_CP_ERR_MSG_EN_SHIFT) | \
	(1 << MME_CMDQ_GLBL_ERR_CFG_DMA_ERR_MSG_EN_SHIFT) | \
	(1 << MME_CMDQ_GLBL_ERR_CFG_PQF_STOP_ON_ERR_SHIFT) | \
	(1 << MME_CMDQ_GLBL_ERR_CFG_CQF_STOP_ON_ERR_SHIFT) | \
	(1 << MME_CMDQ_GLBL_ERR_CFG_CP_STOP_ON_ERR_SHIFT) | \
	(1 << MME_CMDQ_GLBL_ERR_CFG_DMA_STOP_ON_ERR_SHIFT))

#define QMAN_MME_ERR_PROT	(\
	(1 << MME_QM_GLBL_PROT_PQF_ERR_PROT_SHIFT) | \
	(1 << MME_QM_GLBL_PROT_CQF_ERR_PROT_SHIFT) | \
	(1 << MME_QM_GLBL_PROT_CP_ERR_PROT_SHIFT) | \
	(1 << MME_QM_GLBL_PROT_DMA_ERR_PROT_SHIFT))

#define CMDQ_MME_ERR_PROT	(\
	(1 << MME_CMDQ_GLBL_PROT_PQF_ERR_PROT_SHIFT) | \
	(1 << MME_CMDQ_GLBL_PROT_CQF_ERR_PROT_SHIFT) | \
	(1 << MME_CMDQ_GLBL_PROT_CP_ERR_PROT_SHIFT) | \
	(1 << MME_CMDQ_GLBL_PROT_DMA_ERR_PROT_SHIFT))

#define QMAN_TPC_ENABLE		(\
	(1 << TPC0_QM_GLBL_CFG0_PQF_EN_SHIFT) | \
	(1 << TPC0_QM_GLBL_CFG0_CQF_EN_SHIFT) | \
	(1 << TPC0_QM_GLBL_CFG0_CP_EN_SHIFT))

#define CMDQ_TPC_ENABLE		(\
	(1 << TPC0_CMDQ_GLBL_CFG0_CQF_EN_SHIFT) | \
	(1 << TPC0_CMDQ_GLBL_CFG0_CP_EN_SHIFT))

#define QMAN_TPC_STOP		(\
	(1 << TPC0_QM_GLBL_CFG1_PQF_STOP_SHIFT) | \
	(1 << TPC0_QM_GLBL_CFG1_CQF_STOP_SHIFT) | \
	(1 << TPC0_QM_GLBL_CFG1_CP_STOP_SHIFT))

#define CMDQ_TPC_STOP		(\
	(1 << TPC0_CMDQ_GLBL_CFG1_CQF_STOP_SHIFT) | \
	(1 << TPC0_CMDQ_GLBL_CFG1_CP_STOP_SHIFT))

#define QMAN_TPC_ERR_MSG_EN	(\
	(1 << TPC0_QM_GLBL_ERR_CFG_PQF_ERR_MSG_EN_SHIFT) | \
	(1 << TPC0_QM_GLBL_ERR_CFG_CQF_ERR_MSG_EN_SHIFT) | \
	(1 << TPC0_QM_GLBL_ERR_CFG_CP_ERR_MSG_EN_SHIFT) | \
	(1 << TPC0_QM_GLBL_ERR_CFG_DMA_ERR_MSG_EN_SHIFT) | \
	(1 << TPC0_QM_GLBL_ERR_CFG_PQF_STOP_ON_ERR_SHIFT) | \
	(1 << TPC0_QM_GLBL_ERR_CFG_CQF_STOP_ON_ERR_SHIFT) | \
	(1 << TPC0_QM_GLBL_ERR_CFG_CP_STOP_ON_ERR_SHIFT) | \
	(1 << TPC0_QM_GLBL_ERR_CFG_DMA_STOP_ON_ERR_SHIFT))

#define CMDQ_TPC_ERR_MSG_EN	(\
	(1 << TPC0_CMDQ_GLBL_ERR_CFG_PQF_ERR_MSG_EN_SHIFT) | \
	(1 << TPC0_CMDQ_GLBL_ERR_CFG_CQF_ERR_MSG_EN_SHIFT) | \
	(1 << TPC0_CMDQ_GLBL_ERR_CFG_CP_ERR_MSG_EN_SHIFT) | \
	(1 << TPC0_CMDQ_GLBL_ERR_CFG_DMA_ERR_MSG_EN_SHIFT) | \
	(1 << TPC0_CMDQ_GLBL_ERR_CFG_PQF_STOP_ON_ERR_SHIFT) | \
	(1 << TPC0_CMDQ_GLBL_ERR_CFG_CQF_STOP_ON_ERR_SHIFT) | \
	(1 << TPC0_CMDQ_GLBL_ERR_CFG_CP_STOP_ON_ERR_SHIFT) | \
	(1 << TPC0_CMDQ_GLBL_ERR_CFG_DMA_STOP_ON_ERR_SHIFT))

#define QMAN_TPC_ERR_PROT	(\
	(1 << TPC0_QM_GLBL_PROT_PQF_ERR_PROT_SHIFT) | \
	(1 << TPC0_QM_GLBL_PROT_CQF_ERR_PROT_SHIFT) | \
	(1 << TPC0_QM_GLBL_PROT_CP_ERR_PROT_SHIFT) | \
	(1 << TPC0_QM_GLBL_PROT_DMA_ERR_PROT_SHIFT))

#define CMDQ_TPC_ERR_PROT	(\
	(1 << TPC0_CMDQ_GLBL_PROT_PQF_ERR_PROT_SHIFT) | \
	(1 << TPC0_CMDQ_GLBL_PROT_CQF_ERR_PROT_SHIFT) | \
	(1 << TPC0_CMDQ_GLBL_PROT_CP_ERR_PROT_SHIFT) | \
	(1 << TPC0_CMDQ_GLBL_PROT_DMA_ERR_PROT_SHIFT))

/* RESETS */
#define DMA_MME_TPC_RESET	(\
			1 << PSOC_GLOBAL_CONF_SW_ALL_RST_CFG_TPC_SHIFT |\
			1 << PSOC_GLOBAL_CONF_SW_ALL_RST_CFG_MME_SHIFT |\
			1 << PSOC_GLOBAL_CONF_SW_ALL_RST_CFG_DMA_SHIFT)

#define RESET_ALL	(\
			1 << PSOC_GLOBAL_CONF_SW_ALL_RST_CFG_TPC_SHIFT |\
			1 << PSOC_GLOBAL_CONF_SW_ALL_RST_CFG_MME_SHIFT |\
			1 << PSOC_GLOBAL_CONF_SW_ALL_RST_CFG_MC_SHIFT |\
			1 << PSOC_GLOBAL_CONF_SW_ALL_RST_CFG_CPU_SHIFT |\
			1 << PSOC_GLOBAL_CONF_SW_ALL_RST_CFG_PSOC_SHIFT |\
			1 << PSOC_GLOBAL_CONF_SW_ALL_RST_CFG_IC_IF_SHIFT |\
			PSOC_GLOBAL_CONF_SW_ALL_RST_CFG_SRAM_MASK |\
			1 << PSOC_GLOBAL_CONF_SW_ALL_RST_CFG_DMA_SHIFT |\
			1 << PSOC_GLOBAL_CONF_SW_ALL_RST_CFG_DMA_IF_SHIFT)

#define CA53_RESET		(\
			(~\
			(1 << PSOC_GLOBAL_CONF_UNIT_RST_N_CPU_SHIFT)\
			) & 0x7FFFFF)

#define CPU_RESET_ASSERT	(\
			1 << CPU_CA53_CFG_ARM_RST_CONTROL_NMBISTRESET_SHIFT)

#define CPU_RESET_CORE0_DEASSERT	(\
			1 << CPU_CA53_CFG_ARM_RST_CONTROL_NCPUPORESET_SHIFT |\
			1 << CPU_CA53_CFG_ARM_RST_CONTROL_NCORERESET_SHIFT |\
			1 << CPU_CA53_CFG_ARM_RST_CONTROL_NL2RESET_SHIFT |\
			1 << CPU_CA53_CFG_ARM_RST_CONTROL_NMBISTRESET_SHIFT)

#define GOYA_IRQ_HBW_ID_MASK			0x1FFF
#define GOYA_IRQ_HBW_ID_SHIFT			0
#define GOYA_IRQ_HBW_INTERNAL_ID_MASK		0xE000
#define GOYA_IRQ_HBW_INTERNAL_ID_SHIFT		13
#define GOYA_IRQ_HBW_AGENT_ID_MASK		0x1F0000
#define GOYA_IRQ_HBW_AGENT_ID_SHIFT		16
#define GOYA_IRQ_HBW_Y_MASK			0xE00000
#define GOYA_IRQ_HBW_Y_SHIFT			21
#define GOYA_IRQ_HBW_X_MASK			0x7000000
#define GOYA_IRQ_HBW_X_SHIFT			24
#define GOYA_IRQ_LBW_ID_MASK			0xFF
#define GOYA_IRQ_LBW_ID_SHIFT			0
#define GOYA_IRQ_LBW_INTERNAL_ID_MASK		0x700
#define GOYA_IRQ_LBW_INTERNAL_ID_SHIFT		8
#define GOYA_IRQ_LBW_AGENT_ID_MASK		0xF800
#define GOYA_IRQ_LBW_AGENT_ID_SHIFT		11
#define GOYA_IRQ_LBW_Y_MASK			0x70000
#define GOYA_IRQ_LBW_Y_SHIFT			16
#define GOYA_IRQ_LBW_X_MASK			0x380000
#define GOYA_IRQ_LBW_X_SHIFT			19

#define DMA_QM_IDLE_MASK	(DMA_QM_0_GLBL_STS0_PQF_IDLE_MASK | \
				DMA_QM_0_GLBL_STS0_CQF_IDLE_MASK | \
				DMA_QM_0_GLBL_STS0_CP_IDLE_MASK | \
				DMA_QM_0_GLBL_STS0_DMA_IDLE_MASK)

#define TPC_QM_IDLE_MASK	(TPC0_QM_GLBL_STS0_PQF_IDLE_MASK | \
				TPC0_QM_GLBL_STS0_CQF_IDLE_MASK | \
				TPC0_QM_GLBL_STS0_CP_IDLE_MASK)

#define TPC_CMDQ_IDLE_MASK	(TPC0_CMDQ_GLBL_STS0_CQF_IDLE_MASK | \
				TPC0_CMDQ_GLBL_STS0_CP_IDLE_MASK)

#define TPC_CFG_IDLE_MASK	(TPC0_CFG_STATUS_SCALAR_PIPE_EMPTY_MASK | \
				TPC0_CFG_STATUS_VECTOR_PIPE_EMPTY_MASK | \
				TPC0_CFG_STATUS_IQ_EMPTY_MASK | \
				TPC0_CFG_STATUS_NO_INFLIGH_MEM_ACCESSES_MASK)

#define MME_QM_IDLE_MASK	(MME_QM_GLBL_STS0_PQF_IDLE_MASK | \
				MME_QM_GLBL_STS0_CQF_IDLE_MASK | \
				MME_QM_GLBL_STS0_CP_IDLE_MASK)

#define MME_CMDQ_IDLE_MASK	(MME_CMDQ_GLBL_STS0_CQF_IDLE_MASK | \
				MME_CMDQ_GLBL_STS0_CP_IDLE_MASK)

#define MME_ARCH_IDLE_MASK	(MME_ARCH_STATUS_SB_A_EMPTY_MASK | \
				MME_ARCH_STATUS_SB_B_EMPTY_MASK | \
				MME_ARCH_STATUS_SB_CIN_EMPTY_MASK | \
				MME_ARCH_STATUS_SB_COUT_EMPTY_MASK)

#define MME_SHADOW_IDLE_MASK	(MME_SHADOW_0_STATUS_A_MASK | \
				MME_SHADOW_0_STATUS_B_MASK | \
				MME_SHADOW_0_STATUS_CIN_MASK | \
				MME_SHADOW_0_STATUS_COUT_MASK | \
				MME_SHADOW_0_STATUS_TE_MASK | \
				MME_SHADOW_0_STATUS_LD_MASK | \
				MME_SHADOW_0_STATUS_ST_MASK)

#define TPC1_CFG_TPC_STALL_V_SHIFT TPC0_CFG_TPC_STALL_V_SHIFT
#define TPC2_CFG_TPC_STALL_V_SHIFT TPC0_CFG_TPC_STALL_V_SHIFT
#define TPC3_CFG_TPC_STALL_V_SHIFT TPC0_CFG_TPC_STALL_V_SHIFT
#define TPC4_CFG_TPC_STALL_V_SHIFT TPC0_CFG_TPC_STALL_V_SHIFT
#define TPC5_CFG_TPC_STALL_V_SHIFT TPC0_CFG_TPC_STALL_V_SHIFT
#define TPC6_CFG_TPC_STALL_V_SHIFT TPC0_CFG_TPC_STALL_V_SHIFT
#define TPC7_CFG_TPC_STALL_V_SHIFT TPC0_CFG_TPC_STALL_V_SHIFT

#define DMA_QM_1_GLBL_CFG1_DMA_STOP_SHIFT DMA_QM_0_GLBL_CFG1_DMA_STOP_SHIFT
#define DMA_QM_2_GLBL_CFG1_DMA_STOP_SHIFT DMA_QM_0_GLBL_CFG1_DMA_STOP_SHIFT
#define DMA_QM_3_GLBL_CFG1_DMA_STOP_SHIFT DMA_QM_0_GLBL_CFG1_DMA_STOP_SHIFT
#define DMA_QM_4_GLBL_CFG1_DMA_STOP_SHIFT DMA_QM_0_GLBL_CFG1_DMA_STOP_SHIFT

#define PSOC_ETR_AXICTL_PROTCTRLBIT1_SHIFT                           1

#endif /* ASIC_REG_GOYA_MASKS_H_ */
