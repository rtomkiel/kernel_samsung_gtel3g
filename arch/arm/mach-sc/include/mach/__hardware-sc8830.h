/*
 * Copyright (C) 2012 Spreadtrum Communications Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ASM_ARCH_HARDWARE_SCX35_H
#define __ASM_ARCH_HARDWARE_SCX35_H

#ifndef __ASM_ARCH_SCI_HARDWARE_H
#error  "Don't include this file directly, include <mach/hardware.h>"
#endif

/*
 * 8830 internal I/O mappings
 * 0x30000000-0x50000000 AON.
 * We have the following mapping according to asic spec.
 * We have set some trap gaps in the vaddr.
 */
#define SCI_IOMAP_BASE	0xF5000000

#define SCI_IOMAP(x)	(SCI_IOMAP_BASE + (x))

#define SCI_IOMEMMAP_BASE	0xcc800000

#define SCI_IOMEMMAP(x)	(SCI_IOMEMMAP_BASE + (x))

#ifndef SCI_ADDR
#define SCI_ADDR(_b_, _o_)                              ( (u32)(_b_) + (_o_) )
#endif

#define LL_DEBUG_UART_PHYS		SPRD_UART1_PHYS
#define LL_DEBUG_UART_BASE		SPRD_UART1_BASE

//8830 mapping begin. From [0xEB000000 -- ]
#define SPRD_CORESIGHT_BASE		SCI_IOMAP(0x0)
#define SPRD_CORESIGHT_PHYS		0x10000000
#define SPRD_CORESIGHT_SIZE		SZ_64K

#define SPRD_CORE_BASE			SCI_IOMAP(0x10000)
#define SPRD_CORE_PHYS			0x12000000
#define SPRD_CORE_SIZE			SZ_64K

#define SPRD_DMA0_BASE			SCI_IOMAP(0x112000)
#define SPRD_DMA0_PHYS			0X20100000
#define SPRD_DMA0_SIZE			SZ_16K

#define SPRD_USB_BASE			SCI_IOMAP(0x116000)
#define SPRD_USB_PHYS			0X20200000
#define SPRD_USB_SIZE			SZ_4K

#define SPRD_SDIO0_BASE			SCI_IOMAP(0x117000)
#define SPRD_SDIO0_PHYS			0X20300000
#define SPRD_SDIO0_SIZE			SZ_4K

#define SPRD_SDIO1_BASE			SCI_IOMAP(0x118000)
#define SPRD_SDIO1_PHYS			0X20400000
#define SPRD_SDIO1_SIZE			SZ_4K

#define SPRD_MEMNAND_SYSTEM_BASE			SCI_IOMEMMAP(0x00000)
#define SPRD_MEMNAND_SYSTEM_PHYS			0x8c800000
#define SPRD_MEMNAND_SYSTEM_SIZE			(0xaa00000)


#define SPRD_MEMNAND_USERDATA_BASE			SCI_IOMEMMAP(0xaa00000)
#define SPRD_MEMNAND_USERDATA_PHYS			0X97200000
#define SPRD_MEMNAND_USERDATA_SIZE			(0x6a00000)


#define SPRD_MEMNAND_CACHE_BASE			SCI_IOMEMMAP(0x6a00000+0xaa00000)
#define SPRD_MEMNAND_CACHE_PHYS			(0X97200000+0x6a00000)
#define SPRD_MEMNAND_CACHE_SIZE			(0x2400000)

#define SPRD_SDIO2_BASE			SCI_IOMAP(0x11a000)
#define SPRD_SDIO2_PHYS			0X20500000
#define SPRD_SDIO2_SIZE			SZ_4K

#define SPRD_EMMC_BASE			SCI_IOMAP(0x11c000)
#define SPRD_EMMC_PHYS			0X20600000
#define SPRD_EMMC_SIZE			SZ_4K

#define SPRD_DRM_BASE			SCI_IOMAP(0x120000)
#define SPRD_DRM_PHYS			0X20700000
#define SPRD_DRM_SIZE			SZ_4K

#define SPRD_LCDC_BASE			SCI_IOMAP(0x122000)
#define SPRD_LCDC_PHYS			0X20800000
#define SPRD_LCDC_SIZE			SZ_4K

#define SPRD_LCDC1_BASE			SCI_IOMAP(0x124000)
#define SPRD_LCDC1_PHYS			0X20900000
#define SPRD_LCDC1_SIZE			SZ_4K

#define SPRD_GSP_BASE			SCI_IOMAP(0x126000)
#define SPRD_GSP_PHYS			0X20A00000
#define SPRD_GSP_SIZE			SZ_4K

#define SPRD_NFC_BASE			SCI_IOMAP(0x128000)
#define SPRD_NFC_PHYS			0X20B00000
#define SPRD_NFC_SIZE			SZ_4K

#define SPRD_HWLOCK0_BASE		SCI_IOMAP(0x12a000)
#define SPRD_HWLOCK0_PHYS		0X20c00000
#define SPRD_HWLOCK0_SIZE		SZ_4K

#define SPRD_AHB_BASE			SCI_IOMAP(0x130000)
#define SPRD_AHB_PHYS			0X20D00000
#define SPRD_AHB_SIZE			SZ_64K

#define SPRD_BM0_BASE			SCI_IOMAP(0x140000)
#define SPRD_BM0_PHYS			0X20E00000
#define SPRD_BM0_SIZE			SZ_4K

#define SPRD_BM1_BASE			SCI_IOMAP(0x142000)
#define SPRD_BM1_PHYS			0X20F00000
#define SPRD_BM1_SIZE			SZ_4K

#define SPRD_BM2_BASE			SCI_IOMAP(0x144000)
#define SPRD_BM2_PHYS			0X21000000
#define SPRD_BM2_SIZE			SZ_4K

#define SPRD_DSI_BASE			SCI_IOMAP(0x146000)
#define SPRD_DSI_PHYS			0X21800000
#define SPRD_DSI_SIZE			SZ_4K

#define SPRD_GPS_BASE			SCI_IOMAP(0x150000)
#define SPRD_GPS_PHYS			0X21C00000
#define SPRD_GPS_SIZE			SZ_4K

#define SPRD_LPDDR2_BASE		SCI_IOMAP(0x160000)
#define SPRD_LPDDR2_PHYS		0X30000000
#define SPRD_LPDDR2_SIZE		SZ_4K

#define SPRD_LPDDR2_PHY_BASE	SCI_IOMAP(0x170000)
#define SPRD_LPDDR2_PHY_PHYS	0X30010000
#define SPRD_LPDDR2_PHY_SIZE	SZ_4K

#define SPRD_PUB_BASE			SCI_IOMAP(0x180000)
#define SPRD_PUB_PHYS			0X30020000
#define SPRD_PUB_SIZE			SZ_64K

#define SPRD_AXIBM0_BASE		SCI_IOMAP(0x19e000)
#define SPRD_AXIBM0_PHYS		0X30040000
#define SPRD_AXIBM0_SIZE		SZ_4K

#define SPRD_AXIBM1_BASE		SCI_IOMAP(0x1a0000)
#define SPRD_AXIBM1_PHYS		0X30050000
#define SPRD_AXIBM1_SIZE		(SZ_4K)

#define SPRD_AXIBM2_BASE		SCI_IOMAP(0x1a2000)
#define SPRD_AXIBM2_PHYS		0X30060000
#define SPRD_AXIBM2_SIZE		(SZ_4K)

#define SPRD_AXIBM3_BASE		SCI_IOMAP(0x1a4000)
#define SPRD_AXIBM3_PHYS		0X30070000
#define SPRD_AXIBM3_SIZE		(SZ_4K)

#define SPRD_AXIBM4_BASE		SCI_IOMAP(0x1a6000)
#define SPRD_AXIBM4_PHYS		0X30080000
#define SPRD_AXIBM4_SIZE		(SZ_4K)

#define SPRD_AXIBM5_BASE		SCI_IOMAP(0x1a8000)
#define SPRD_AXIBM5_PHYS		0X30090000
#define SPRD_AXIBM5_SIZE		(SZ_4K)

#define SPRD_AXIBM6_BASE		SCI_IOMAP(0x1aa000)
#define SPRD_AXIBM6_PHYS		0X300A0000
#define SPRD_AXIBM6_SIZE		(SZ_4K)

#define SPRD_AXIBM7_BASE		SCI_IOMAP(0x1ac000)
#define SPRD_AXIBM7_PHYS		0X300B0000
#define SPRD_AXIBM7_SIZE		(SZ_4K)

#define SPRD_AXIBM8_BASE		SCI_IOMAP(0x1ae000)
#define SPRD_AXIBM8_PHYS		0X300C0000
#define SPRD_AXIBM8_SIZE		(SZ_4K)

#define SPRD_AXIBM9_BASE		SCI_IOMAP(0x1b0000)
#define SPRD_AXIBM9_PHYS		0X300D0000
#define SPRD_AXIBM9_SIZE		(SZ_4K)

#define SPRD_AUDIO_BASE			SCI_IOMAP(0x1c0000)
#define SPRD_AUDIO_PHYS			0X40000000
#define SPRD_AUDIO_SIZE			SZ_8K

#define SPRD_AUDIO_IF_BASE		SCI_IOMAP(0x1d0000)
#define SPRD_AUDIO_IF_PHYS		0X40010000
#define SPRD_AUDIO_IF_SIZE		SZ_4K

#define SPRD_VBC_BASE			SCI_IOMAP(0x1e0000)
#define SPRD_VBC_PHYS			0X40020000
#define SPRD_VBC_SIZE			SZ_4K + SZ_8K

#define SPRD_SYSTIMER_CMP_BASE		SCI_IOMAP(0x1f2000)
#define SPRD_SYSTIMER_CMP_PHYS		0X40040000
#define SPRD_SYSTIMER_CMP_SIZE		SZ_4K

#define SPRD_GPTIMER0_BASE			SCI_IOMAP(0x1f4000)
#define SPRD_GPTIMER0_PHYS			0X40050000
#define SPRD_GPTIMER0_SIZE			SZ_4K

#define SPRD_HWLOCK1_BASE		SCI_IOMAP(0x1f6000)
#define SPRD_HWLOCK1_PHYS		0X40060000
#define SPRD_HWLOCK1_SIZE		SZ_4K

#define SPRD_RFSPI_BASE			SCI_IOMAP(0x1f8000)
#define SPRD_RFSPI_PHYS			0X40070000
#define SPRD_RFSPI_SIZE			SZ_4K

#define SPRD_I2C_BASE			SCI_IOMAP(0x1fa000)
#define SPRD_I2C_PHYS			0X40080000
#define SPRD_I2C_SIZE			SZ_4K

#define SPRD_INT_BASE			SCI_IOMAP(0x1fc000)
#define SPRD_INT_PHYS			0X40200000
#define SPRD_INT_SIZE			SZ_4K

#define SPRD_EIC_BASE			SCI_IOMAP(0x200000)
#define SPRD_EIC_PHYS			0X40210000
#define SPRD_EIC_SIZE			SZ_4K

#define SPRD_APTIMER0_BASE			SCI_IOMAP(0x202000)
#define SPRD_APTIMER0_PHYS			0X40220000
#define SPRD_APTIMER0_SIZE			SZ_4K

#define SPRD_SYSCNT_BASE		SCI_IOMAP(0x204000)
#define SPRD_SYSCNT_PHYS		0X40230000
#define SPRD_SYSCNT_SIZE		SZ_4K

#define SPRD_UIDEFUSE_BASE		SCI_IOMAP(0x206000)
#define SPRD_UIDEFUSE_PHYS		0X40240000
#define SPRD_UIDEFUSE_SIZE		SZ_4K

#define SPRD_KPD_BASE			SCI_IOMAP(0x208000)
#define SPRD_KPD_PHYS			0X40250000
#define SPRD_KPD_SIZE			SZ_4K

#define SPRD_PWM_BASE			SCI_IOMAP(0x20a000)
#define SPRD_PWM_PHYS			0X40260000
#define SPRD_PWM_SIZE			SZ_4K

#define SPRD_FM_BASE			SCI_IOMAP(0x210000)
#define SPRD_FM_PHYS			0X40270000
#define SPRD_FM_SIZE			SZ_4K

#define SPRD_GPIO_BASE			SCI_IOMAP(0x220000)
#define SPRD_GPIO_PHYS			0X40280000
#define SPRD_GPIO_SIZE			SZ_4K

#define SPRD_WDG_BASE			SCI_IOMAP(0x222000)
#define SPRD_WDG_PHYS			0X40290000
#define SPRD_WDG_SIZE			SZ_4K

#define SPRD_PIN_BASE			SCI_IOMAP(0x224000)
#define SPRD_PIN_PHYS			0X402A0000
#define SPRD_PIN_SIZE			SZ_4K

#define SPRD_PMU_BASE			SCI_IOMAP(0x230000)
#define SPRD_PMU_PHYS			0X402B0000
#define SPRD_PMU_SIZE			SZ_64K

#define SPRD_IPI_BASE			SCI_IOMAP(0x240000)
#define SPRD_IPI_PHYS			0X402C0000
#define SPRD_IPI_SIZE			SZ_4K

#define SPRD_AONCKG_BASE		SCI_IOMAP(0x242000)
#define SPRD_AONCKG_PHYS		0X402D0000
#define SPRD_AONCKG_SIZE		SZ_4K

#define SPRD_AONAPB_BASE		SCI_IOMAP(0x250000)
#define SPRD_AONAPB_PHYS		0X402E0000
#define SPRD_AONAPB_SIZE		SZ_64K

#define SPRD_THM_BASE			SCI_IOMAP(0x260000)
#define SPRD_THM_PHYS			0X402F0000
#define SPRD_THM_SIZE			SZ_4K

#define SPRD_AVSCA7_BASE		SCI_IOMAP(0x270000)
#define SPRD_AVSCA7_PHYS		0X40300000
#define SPRD_AVSCA7_SIZE		SZ_4K

#define SPRD_AVSTOP_BASE		SCI_IOMAP(0x280000)
#define SPRD_AVSTOP_PHYS		0X40310000
#define SPRD_AVSTOP_SIZE		SZ_4K

//
#define SPRD_CA7WDG_BASE		SCI_IOMAP(0x290000)
#define SPRD_CA7WDG_PHYS		0X40320000
#define SPRD_CA7WDG_SIZE		SZ_4K

#define SPRD_APTIMER1_BASE		SCI_IOMAP(0x292000)
#define SPRD_APTIMER1_PHYS		0X40330000
#define SPRD_APTIMER1_SIZE		SZ_4K

#define SPRD_APTIMER2_BASE		SCI_IOMAP(0x294000)
#define SPRD_APTIMER2_PHYS		0X40340000
#define SPRD_APTIMER2_SIZE		SZ_4K
//

#define SPRD_CA7TS0_BASE		SCI_IOMAP(0x2a0000)
#define SPRD_CA7TS0_PHYS		0X40400000
#define SPRD_CA7TS0_SIZE		SZ_4K

#define SPRD_CA7TS1_BASE		SCI_IOMAP(0x2b0000)
#define SPRD_CA7TS1_PHYS		0X40410000
#define SPRD_CA7TS1_SIZE		SZ_4K

#define SPRD_MALI_BASE			SCI_IOMAP(0x2c0000)
#define SPRD_MALI_PHYS			0X60000000
#define SPRD_MALI_SIZE			SZ_4K

#define SPRD_GPUAPB_BASE		SCI_IOMAP(0x2d0000)
#define SPRD_GPUAPB_PHYS		0X60100000
#define SPRD_GPUAPB_SIZE		SZ_4K

#define SPRD_GPUCKG_BASE		SCI_IOMAP(0x2e0000)
#define SPRD_GPUCKG_PHYS		0X60200000
#define SPRD_GPUCKG_SIZE		SZ_4K

#define SPRD_DCAM_BASE			SCI_IOMAP(0x2f0000)
#define SPRD_DCAM_PHYS			0X60800000
#define SPRD_DCAM_SIZE			SZ_64K

#define SPRD_VSP_BASE			SCI_IOMAP(0x300000)
#define SPRD_VSP_PHYS			0X60900000
#define SPRD_VSP_SIZE			(SZ_32K + SZ_16K)

#define SPRD_ISP_BASE			SCI_IOMAP(0x310000)
#define SPRD_ISP_PHYS			0X60A00000
#define SPRD_ISP_SIZE			SZ_32K

#define SPRD_JPG_BASE			SCI_IOMAP(0x320000)
#define SPRD_JPG_PHYS			0X60B00000
#define SPRD_JPG_SIZE			SZ_32K

#define SPRD_CSI2_BASE			SCI_IOMAP(0x330000)
#define SPRD_CSI2_PHYS			0X60C00000
#define SPRD_CSI2_SIZE			SZ_4K

#define SPRD_MMAHB_BASE			SCI_IOMAP(0x340000)
#define SPRD_MMAHB_PHYS			0X60D00000
#define SPRD_MMAHB_SIZE			SZ_16K

#define SPRD_MMCKG_BASE			SCI_IOMAP(0x350000)
#define SPRD_MMCKG_PHYS			0X60E00000
#define SPRD_MMCKG_SIZE			SZ_4K

#define SPRD_UART0_BASE			SCI_IOMAP(0x360000)
#define SPRD_UART0_PHYS			0X70000000
#define SPRD_UART0_SIZE			SZ_4K

#define SPRD_UART1_BASE			SCI_IOMAP(0x362000)
#define SPRD_UART1_PHYS			0X70100000
#define SPRD_UART1_SIZE			SZ_4K

#define SPRD_UART2_BASE			SCI_IOMAP(0x364000)
#define SPRD_UART2_PHYS			0X70200000
#define SPRD_UART2_SIZE			SZ_4K

#define SPRD_UART3_BASE			SCI_IOMAP(0x366000)
#define SPRD_UART3_PHYS			0X70300000
#define SPRD_UART3_SIZE			SZ_4K

#define SPRD_UART4_BASE			SCI_IOMAP(0x368000)
#define SPRD_UART4_PHYS			0X70400000
#define SPRD_UART4_SIZE			SZ_4K

#define SPRD_I2C0_BASE			SCI_IOMAP(0x36a000)
#define SPRD_I2C0_PHYS			0X70500000
#define SPRD_I2C0_SIZE			SZ_4K

#define SPRD_I2C1_BASE			SCI_IOMAP(0x36c000)
#define SPRD_I2C1_PHYS			0X70600000
#define SPRD_I2C1_SIZE			SZ_4K

#define SPRD_I2C2_BASE			SCI_IOMAP(0x370000)
#define SPRD_I2C2_PHYS			0X70700000
#define SPRD_I2C2_SIZE			SZ_4K

#define SPRD_I2C3_BASE			SCI_IOMAP(0x372000)
#define SPRD_I2C3_PHYS			0X70800000
#define SPRD_I2C3_SIZE			SZ_4K

#define SPRD_I2C4_BASE			SCI_IOMAP(0x374000)
#define SPRD_I2C4_PHYS			0X70900000
#define SPRD_I2C4_SIZE			SZ_4K

#define SPRD_SPI0_BASE			SCI_IOMAP(0x376000)
#define SPRD_SPI0_PHYS			0X70A00000
#define SPRD_SPI0_SIZE			SZ_4K

#define SPRD_SPI1_BASE			SCI_IOMAP(0x378000)
#define SPRD_SPI1_PHYS			0X70B00000
#define SPRD_SPI1_SIZE			SZ_4K

#define SPRD_SPI2_BASE			SCI_IOMAP(0x37a000)
#define SPRD_SPI2_PHYS			0X70C00000
#define SPRD_SPI2_SIZE			SZ_4K

#define SPRD_IIS0_BASE			SCI_IOMAP(0x37c000)
#define SPRD_IIS0_PHYS			0X70D00000
#define SPRD_IIS0_SIZE			SZ_4K

#define SPRD_IIS1_BASE			SCI_IOMAP(0x380000)
#define SPRD_IIS1_PHYS			0X70E00000
#define SPRD_IIS1_SIZE			SZ_4K

#define SPRD_IIS2_BASE			SCI_IOMAP(0x382000)
#define SPRD_IIS2_PHYS			0X70F00000
#define SPRD_IIS2_SIZE			SZ_4K

#define SPRD_IIS3_BASE			SCI_IOMAP(0x384000)
#define SPRD_IIS3_PHYS			0X71000000
#define SPRD_IIS3_SIZE			SZ_4K

#define SPRD_SIM0_BASE			SCI_IOMAP(0x390000)
#define SPRD_SIM0_PHYS			0X71100000
#define SPRD_SIM0_SIZE			SZ_4K

#define SPRD_APBCKG_BASE		SCI_IOMAP(0x3a0000)
#define SPRD_APBCKG_PHYS		0X71200000
#define SPRD_APBCKG_SIZE		SZ_4K

#define SPRD_APBREG_BASE		SCI_IOMAP(0x3b0000)
#define SPRD_APBREG_PHYS		0X71300000
#define SPRD_APBREG_SIZE		SZ_64K

#define SPRD_INTC0_BASE			SCI_IOMAP(0x3c0000)
#define SPRD_INTC0_PHYS			0X71400000
#define SPRD_INTC0_SIZE			SZ_4K

#define SPRD_INTC1_BASE			SCI_IOMAP(0x3c2000)
#define SPRD_INTC1_PHYS			0X71500000
#define SPRD_INTC1_SIZE			SZ_4K

#define SPRD_INTC2_BASE			SCI_IOMAP(0x3c4000)
#define SPRD_INTC2_PHYS			0X71600000
#define SPRD_INTC2_SIZE			SZ_4K

#define SPRD_INTC3_BASE			SCI_IOMAP(0x3c6000)
#define SPRD_INTC3_PHYS			0X71700000
#define SPRD_INTC3_SIZE			SZ_4K

#define SPRD_IRAM0_BASE			SCI_IOMAP(0x3d0000)
#define SPRD_IRAM0_PHYS			0X0
#define SPRD_IRAM0_SIZE			SZ_4K

#define SPRD_IRAM0H_BASE			SCI_IOMAP(0x3d1000)
#define SPRD_IRAM0H_PHYS			0X1000
#define SPRD_IRAM0H_SIZE			SZ_4K

#if 0
#define SPRD_IRAM1_BASE			SCI_IOMAP(0x3e0000)
#define SPRD_IRAM1_PHYS			0X50000000
#define SPRD_IRAM1_SIZE			(SZ_32K + SZ_16K + SZ_4K)
#else
#define SPRD_IRAM1_BASE			SCI_IOMAP(0x3d4000)
#define SPRD_IRAM1_PHYS			0x50000000
#define SPRD_IRAM1_SIZE			(SZ_8K + SZ_4K)

#define SPRD_IRAM2_BASE			SCI_IOMAP(0x3d7000)
#define SPRD_IRAM2_PHYS			0x50004000
#define SPRD_IRAM2_SIZE			(SZ_32K + SZ_4K)
#endif
/*begin mapping adie master and slave address */
#define SPRD_ADI_BASE			SCI_IOMAP(0x3f0000)
#define SPRD_ADI_PHYS			0X40030000
#define SPRD_ADI_SIZE			(SZ_4K)

#define SPRD_ADISLAVE_BASE			SCI_IOMAP(0x3f0000 + SZ_32K)
#define SPRD_ADISLAVE_PHYS			0X40038000
#define SPRD_ADISLAVE_SIZE			(SZ_4K)
/*end*/
#if defined(CONFIG_ARCH_SCX15)
#define SPRD_ZIPENC_BASE			SCI_IOMAP(0x3fc000)
#define SPRD_ZIPENC_PHYS			0X21200000
#define SPRD_ZIPENC_SIZE			(SZ_4K)
#define SPRD_ZIPDEC_BASE			SCI_IOMAP(0x400000)
#define SPRD_ZIPDEC_PHYS			0X21300000
#define SPRD_ZIPDEC_SIZE			(SZ_4K)

#define SPRD_GSPMMU_BASE			SCI_IOMAP(0x410000)
#define SPRD_GSPMMU_PHYS			0X21400000
#define SPRD_GSPMMU_SIZE			(SZ_64K + SZ_4K)

#define SPRD_MMMMU_BASE				SCI_IOMAP(0x430000)
#define SPRD_MMMMU_PHYS				0X60F00000
#define SPRD_MMMMU_SIZE				(SZ_64K + SZ_4K)
#endif

#if defined(CONFIG_ARCH_SCX30G)
#define SPRD_ZIPENC_BASE			SCI_IOMAP(0x3fc000)
#define SPRD_ZIPENC_PHYS			0X21200000
#define SPRD_ZIPENC_SIZE			(SZ_4K)

#define SPRD_ZIPDEC_BASE			SCI_IOMAP(0x400000)
#define SPRD_ZIPDEC_PHYS			0X21300000
#define SPRD_ZIPDEC_SIZE			(SZ_4K)

#define SPRD_GSPMMU_BASE			SCI_IOMAP(0x410000)
#define SPRD_GSPMMU_PHYS			0X21400000
#define SPRD_GSPMMU_SIZE			(SZ_64K)

#define SPRD_MMMMU_BASE				SCI_IOMAP(0x430000)
#define SPRD_MMMMU_PHYS				0X60F00000
#define SPRD_MMMMU_SIZE				(SZ_128K + SZ_4K)
#if defined(CONFIG_ARCH_SCX30G2)
//add vpp&coda7l for tshark2
#define SPRD_VPP_BASE				SCI_IOMAP(0x451000)
#define SPRD_VPP_PHYS				0X61000000
#define SPRD_VPP_SIZE				(SZ_16K)
#define SPRD_CODA7L_BASE			SCI_IOMAP(0x455000)
#define SPRD_CODA7L_PHYS			0X62100000
#define SPRD_CODA7L_SIZE			(SZ_16K)
#define SPRD_CODECAHB_BASE			SCI_IOMAP(0x459000)
#define SPRD_CODECAHB_PHYS			0X62000000
#define SPRD_CODECAHB_SIZE			(SZ_4K)
#endif
#endif

#define CORE_GIC_CPU_VA			(SPRD_CORE_BASE + 0x2000)
#define CORE_GIC_DIS_VA			(SPRD_CORE_BASE + 0x1000)

#ifdef CONFIG_ARCH_SCX30G
#define HOLDING_PEN_VADDR		(SPRD_AHB_BASE + 0x14)
#else
#define HOLDING_PEN_VADDR		(SPRD_AHB_BASE + 0x4c)
#endif
#define CPU_JUMP_VADDR			(HOLDING_PEN_VADDR + 0X4)


/* registers for watchdog ,RTC, touch panel, aux adc, analog die... */
#define SPRD_MISC_BASE	((unsigned int)SPRD_ADI_BASE)
#define SPRD_MISC_PHYS	((unsigned int)SPRD_ADI_PHYS)

#define ANA_PWM_BASE			(SPRD_ADISLAVE_BASE + 0x20 )
#define ANA_WDG_BASE			(SPRD_ADISLAVE_BASE + 0x40 )
#define ANA_RTC_BASE			(SPRD_ADISLAVE_BASE + 0x80 )
#define ANA_EIC_BASE			(SPRD_ADISLAVE_BASE + 0x100 )
#define ANA_PIN_BASE			(SPRD_ADISLAVE_BASE + 0x180 )
#define ANA_THM_BASE			(SPRD_ADISLAVE_BASE + 0x280 )
#define ADC_BASE				(SPRD_ADISLAVE_BASE + 0x300 )
#define ANA_CTL_INT_BASE		(SPRD_ADISLAVE_BASE + 0x380 )
#define ANA_BTLC_INT_BASE		(SPRD_ADISLAVE_BASE + 0x3c0 )
#define ANA_AUDIFA_INT_BASE		(SPRD_ADISLAVE_BASE + 0x400 )
#define ANA_GPIO_INT_BASE		(SPRD_ADISLAVE_BASE + 0x480 )
#define ANA_FPU_INT_BASE		(SPRD_ADISLAVE_BASE + 0x500 )
#define ANA_AUDCFGA_INT_BASE		(SPRD_ADISLAVE_BASE + 0x600 )
#define ANA_HDT_INT_BASE		(SPRD_ADISLAVE_BASE + 0x700 )
#define ANA_CTL_GLB_BASE		(SPRD_ADISLAVE_BASE + 0x800 )

#define SPRD_ANA_PIN_BASE		((unsigned int)SPRD_ADI_BASE + 0x8180)

#ifndef REGS_AHB_BASE
#define REGS_AHB_BASE                                   ( SPRD_AHB_BASE  + 0x200)
#endif

#define SPRD_IRAM_BASE		SPRD_IRAM0_BASE + 0x1000
#define SPRD_IRAM_PHYS		SPRD_IRAM0_PHYS + 0x1000
#define SPRD_IRAM_SIZE		SZ_4K
#define SPRD_GREG_BASE		SPRD_AONAPB_BASE
#define SPRD_GREG_PHYS		SPRD_AONAPB_PHYS
#define SPRD_GREG_SIZE		SZ_64K

#ifndef REGS_GLB_BASE
#define REGS_GLB_BASE                                   ( SPRD_GREG_BASE )
#define ANA_REGS_GLB_BASE                               ( ANA_CTL_GLB_BASE )
#endif

#define CHIP_ID_LOW_REG		(SPRD_AHB_BASE + 0xfc)

#define SPRD_GPTIMER_BASE	SPRD_GPTIMER0_BASE
//#define REG_GLB_GEN0 		SPRD_AONAPB_BASE
#define SPRD_EFUSE_BASE		SPRD_UIDEFUSE_BASE

#define REGS_AP_AHB_BASE	SPRD_AHB_BASE
#define REGS_AP_APB_BASE	SPRD_APBREG_BASE
#define REGS_AON_APB_BASE	SPRD_AONAPB_BASE
#define REGS_GPU_APB_BASE	SPRD_GPUAPB_BASE
#define REGS_MM_AHB_BASE	SPRD_MMAHB_BASE
#define REGS_PMU_APB_BASE	SPRD_PMU_BASE
#define REGS_AON_CLK_BASE	SPRD_AONCKG_BASE
#define REGS_AP_CLK_BASE	SPRD_APBCKG_BASE
#define REGS_GPU_CLK_BASE	SPRD_GPUCKG_BASE
#define REGS_MM_CLK_BASE	SPRD_MMCKG_BASE
#define REGS_PUB_APB_BASE	SPRD_PUB_BASE
#if defined(CONFIG_ARCH_SCX30G2)
#define REGS_CODEC_AHB_BASE SPRD_CODECAHB_BASE
#endif

#if defined(CONFIG_ARCH_SCX15)
#if defined(CONFIG_SPRD_MODEM_TD)
#define SIPC_SMEM_ADDR 		(CONFIG_PHYS_OFFSET + 120 * SZ_1M)
#define CPT_START_ADDR		(CONFIG_PHYS_OFFSET + 128 * SZ_1M)
#define CPT_TOTAL_SIZE		(SZ_1M * 18)
#define CPT_RING_ADDR		(CPT_START_ADDR + CPT_TOTAL_SIZE - SZ_4K)
#define CPT_RING_SIZE		(SZ_4K)
#define CPT_SMEM_SIZE		(SZ_1M + SZ_256K)
#define WCN_START_ADDR		(CONFIG_PHYS_OFFSET + 168 * SZ_1M)
#define WCN_TOTAL_SIZE		0x281000//(SZ_1M * 5)
#define WCN_RING_ADDR		(WCN_START_ADDR + WCN_TOTAL_SIZE - SZ_4K)
#define WCN_RING_SIZE		(SZ_4K)
#define WCN_SMEM_SIZE		(SZ_512K + SZ_256K)
#else
#define SIPC_SMEM_ADDR 		(CONFIG_PHYS_OFFSET + 120 * SZ_1M)
#define CPW_START_ADDR		(CONFIG_PHYS_OFFSET + 128 * SZ_1M)
#define CPW_TOTAL_SIZE		0x18A0000 //(SZ_1M * 32)
#define CPW_RING_ADDR		(CPW_START_ADDR + CPW_TOTAL_SIZE - SZ_4K)
#define CPW_RING_SIZE		(SZ_4K)
#define CPW_SMEM_SIZE		(SZ_1M + SZ_256K)
#define WCN_START_ADDR		(CONFIG_PHYS_OFFSET + 168 * SZ_1M)
#define WCN_TOTAL_SIZE		0x281000//(SZ_1M * 5)
#define WCN_RING_ADDR		(WCN_START_ADDR + WCN_TOTAL_SIZE - SZ_4K)
#define WCN_RING_SIZE		(SZ_4K)
#define WCN_SMEM_SIZE		(SZ_512K + SZ_256K)
#endif
#else
#define SIPC_SMEM_ADDR 		(CONFIG_PHYS_OFFSET + 120 * SZ_1M)

#define CPT_START_ADDR		(CONFIG_PHYS_OFFSET + 128 * SZ_1M)
#define CPT_TOTAL_SIZE                  (SZ_1M * 18)
#define CPT_RING_ADDR			(CPT_START_ADDR + CPT_TOTAL_SIZE - SZ_4K)
#define CPT_RING_SIZE			(SZ_4K)
#define CPT_SMEM_SIZE			(SZ_1M + SZ_256K)

#ifdef CONFIG_ARCH_SCX30G
#define CPW_START_ADDR		(CONFIG_PHYS_OFFSET + 128 * SZ_1M)
#else
#define CPW_START_ADDR		(CONFIG_PHYS_OFFSET + 256 * SZ_1M)
#endif
#if defined(CONFIG_MODEM_W_MEMCUT)
#define CPW_TOTAL_SIZE		(SZ_1M * 28)
#elif defined CONFIG_ARCH_SCX30G
#define CPW_TOTAL_SIZE		(SZ_1M * 27)
#else
#define CPW_TOTAL_SIZE		(SZ_1M * 33)
#endif
#define CPW_RING_ADDR		(CPW_START_ADDR + CPW_TOTAL_SIZE - SZ_4K)
#define CPW_RING_SIZE			(SZ_4K)
#define CPW_SMEM_SIZE		(SZ_1M + SZ_256K)

#if defined(CONFIG_ARCH_SCX30G)
#define WCN_START_ADDR		(CONFIG_PHYS_OFFSET + 168 * SZ_1M)//Tshark moves cp2 to 168M
#define WCN_TOTAL_SIZE		0x201000//Tshark 8830gea memcut to 2M+4k
#else
#define WCN_START_ADDR		(CONFIG_PHYS_OFFSET + 320 * SZ_1M)
#define WCN_TOTAL_SIZE		0x281000//(SZ_1M * 5)
#endif
#define WCN_RING_ADDR		(WCN_START_ADDR + WCN_TOTAL_SIZE - SZ_4K)
#define WCN_RING_SIZE			(SZ_4K)
#define WCN_SMEM_SIZE		(SZ_512K + SZ_256K)
#endif

#ifdef CONFIG_SEC_DEBUG
/* we have to consider io remap area to whether io memory ares is overlap or not
 * we have to set up device io map to not overlap
 */ 
#define SPRD_SECDEBUG_BASE         SCI_IOMAP(0x460000)
#define SPRD_SECDEBUG_PHYS         0x50003000
#define SPRD_SECDEBUG_SIZE         (SZ_4K)
#define SEC_DEBUG_MAGIC_BASE_VA    (SPRD_SECDEBUG_BASE)
#endif

#endif
