//OV5648_tables.c
/*****************************************************************************/
/*!
 *  \file        OV5648_tables.c \n
 *  \version     1.0 \n
 *  \author      Meinicke \n
 *  \brief       Image-sensor-specific tables and other
 *               constant values/structures for OV13850. \n
 *
 *  \revision    $Revision: 803 $ \n
 *               $Author: $ \n
 *               $Date: 2010-02-26 16:35:22 +0100 (Fr, 26 Feb 2010) $ \n
 *               $Id: OV13850_tables.c 803 2010-02-26 15:35:22Z  $ \n
 */
/*  This is an unpublished work, the copyright in which vests in Silicon Image
 *  GmbH. The information contained herein is the property of Silicon Image GmbH
 *  and is supplied without liability for errors or omissions. No part may be
 *  reproduced or used expect as authorized by contract or other written
 *  permission. Copyright(c) Silicon Image GmbH, 2009, all rights reserved.
 */
/*****************************************************************************/
/*
#include "stdinc.h"

#if( OV5648_DRIVER_USAGE == USE_CAM_DRV_EN )
*/


#include <ebase/types.h>
#include <ebase/trace.h>
#include <ebase/builtins.h>

#include <common/return_codes.h>

#include "isi.h"
#include "isi_iss.h"
#include "isi_priv.h"
#include "GS8604_MIPI_priv.h"


/*****************************************************************************
 * DEFINES
 *****************************************************************************/


/*****************************************************************************
 * GLOBALS
 *****************************************************************************/

// Image sensor register settings default values taken from data sheet OV13850_DS_1.1_SiliconImage.pdf.
// The settings may be altered by the code in IsiSetupSensor.

//four lane
const IsiRegDescription_t Sensor_g_aRegDescription_fourlane[] =
{
	//{0x0100,  0x00, "0x0100", eReadWrite},	
	{0x30EB,  0x05, "0x0100", eReadWrite},	   
	{0x30EB,  0x0C, "0x0100", eReadWrite},	   
	{0x300A,  0xFF, "0x0100", eReadWrite},	   
	{0x300B,  0xFF, "0x0100", eReadWrite},	   
	{0x30EB,  0x05, "0x0100", eReadWrite},	   
	{0x30EB,  0x09, "0x0100", eReadWrite},			  
	{0x0114,  0x03, "0x0100", eReadWrite},	   
	{0x0128,  0x00, "0x0100", eReadWrite},	   
	{0x012A,  0x18, "0x0100", eReadWrite},	   
	{0x012B,  0x00, "0x0100", eReadWrite},	
	{0x0150,   0x00, "0x0100", eReadWrite}, 
	{0x0152,   0x01, "0x0100", eReadWrite}, 
	{0x0154,   0x00, "0x0100", eReadWrite}, 
	{0x0254,   0x00, "0x0100", eReadWrite}, 
	//group A
	{0x0160,  0x05, "0x0100", eReadWrite},	   
	{0x0161,  0x34, "0x0100", eReadWrite},		
	{0x0162,  0x0d, "0x0100", eReadWrite},	   
	{0x0163,  0x78, "0x0100", eReadWrite},		
	{0x0164,  0x00, "0x0100", eReadWrite},	   
	{0x0165,  0x00, "0x0100", eReadWrite},	   
	{0x0166,  0x0C, "0x0100", eReadWrite},	   
	{0x0167,  0xCF, "0x0100", eReadWrite},	   
	{0x0168,  0x00, "0x0100", eReadWrite},	   
	{0x0169,  0x00, "0x0100", eReadWrite},	   
	{0x016A,  0x09, "0x0100", eReadWrite},	   
	{0x016B,  0x9F, "0x0100", eReadWrite},	   
	{0x016C,  0x06, "0x0100", eReadWrite},	   
	{0x016D,  0x68, "0x0100", eReadWrite},	   
	{0x016E,  0x04, "0x0100", eReadWrite},	   
	{0x016F,  0xD0, "0x0100", eReadWrite},	   
	{0x0170,  0x01, "0x0100", eReadWrite},		
	{0x0171,  0x01, "0x0100", eReadWrite},
	{0x0172,  0x03, "0x0100", eReadWrite},	
	{0x0174,  0x01, "0x0100", eReadWrite},	   
	{0x0175,  0x01, "0x0100", eReadWrite},	   
	{0x018C,  0x0A, "0x0100", eReadWrite},	   
	{0x018D,  0x0A, "0x0100", eReadWrite},	 

	//group B
	{0x0260,  0x05, "0x0100", eReadWrite},	   
	{0x0261,  0x34, "0x0100", eReadWrite},		
	{0x0262,  0x0d, "0x0100", eReadWrite},	   
	{0x0263,  0x78, "0x0100", eReadWrite},		
	{0x0264,  0x00, "0x0100", eReadWrite},	   
	{0x0265,  0x00, "0x0100", eReadWrite},	   
	{0x0266,  0x0C, "0x0100", eReadWrite},	   
	{0x0267,  0xCF, "0x0100", eReadWrite},	   
	{0x0268,  0x00, "0x0100", eReadWrite},	   
	{0x0269,  0x00, "0x0100", eReadWrite},	   
	{0x026A,  0x09, "0x0100", eReadWrite},	   
	{0x026B,  0x9F, "0x0100", eReadWrite},	   
	{0x026C,  0x06, "0x0100", eReadWrite},	   
	{0x026D,  0x68, "0x0100", eReadWrite},	   
	{0x026E,  0x04, "0x0100", eReadWrite},	   
	{0x026F,  0xD0, "0x0100", eReadWrite},	   
	{0x0270,  0x01, "0x0100", eReadWrite},	   
	{0x0271,  0x01, "0x0100", eReadWrite},
	{0x0272,  0x03, "0x0100", eReadWrite},	
	{0x0274,  0x01, "0x0100", eReadWrite},	   
	{0x0275,  0x01, "0x0100", eReadWrite},	   
	{0x028C,  0x0A, "0x0100", eReadWrite},	   
	{0x028D,  0x0A, "0x0100", eReadWrite},	
	
	{0x0301,  0x05, "0x0100", eReadWrite},	   
	{0x0303,  0x01, "0x0100", eReadWrite},	   
	{0x0304,  0x03, "0x0100", eReadWrite},	   
	{0x0305,  0x03, "0x0100", eReadWrite},	   
	{0x0306,  0x00, "0x0100", eReadWrite},	   
	{0x0307,  0x2B, "0x0100", eReadWrite},	   
	{0x0309,  0x0A, "0x0100", eReadWrite},	   
	{0x030B,  0x01, "0x0100", eReadWrite},	   
	{0x030C,  0x00, "0x0100", eReadWrite},	   
	{0x030D,  0x2E, "0x0100", eReadWrite},	   
	{0x455E,  0x00, "0x0100", eReadWrite},	   
	{0x471E,  0x4B, "0x0100", eReadWrite},	   
	{0x4767,  0x0F, "0x0100", eReadWrite},	   
	{0x4750,  0x14, "0x0100", eReadWrite},	   
	{0x4540,  0x00, "0x0100", eReadWrite},	   
	{0x47B4,  0x14, "0x0100", eReadWrite},	   
	{0x4713,  0x30, "0x0100", eReadWrite},	   
	{0x478B,  0x10, "0x0100", eReadWrite},	   
	{0x478F,  0x10, "0x0100", eReadWrite},	   
	{0x4793,  0x10, "0x0100", eReadWrite},	   
	{0x4797,  0x0E, "0x0100", eReadWrite},	   
	{0x479B,  0x0E, "0x0100", eReadWrite},	   
	//{0x0100,  0x01, "0x0100", eReadWrite},	    
	{0x0000 ,0x00,"eTableEnd",eTableEnd}

};

const IsiRegDescription_t Sensor_g_fourlane_resolution_1632_1224[] =
{
    {0x0160,  0x05, "0x0100", eReadWrite},  
	{0x0161,  0x34, "0x0100", eReadWrite},	
	{0x016C,  0x06, "0x0100", eReadWrite},	   
	{0x016D,  0x68, "0x0100", eReadWrite},	   
	{0x016E,  0x04, "0x0100", eReadWrite},	   
	{0x016F,  0xD0, "0x0100", eReadWrite},	      
	{0x0174,  0x01, "0x0100", eReadWrite},	   
	{0x0175,  0x01, "0x0100", eReadWrite},	

	{0x0260,  0x05, "0x0100", eReadWrite},  
	{0x0261,  0x34, "0x0100", eReadWrite},	
	{0x026C,  0x06, "0x0100", eReadWrite},	   
	{0x026D,  0x68, "0x0100", eReadWrite},	   
	{0x026E,  0x04, "0x0100", eReadWrite},	   
	{0x026F,  0xD0, "0x0100", eReadWrite},	      
	{0x0274,  0x01, "0x0100", eReadWrite},	   
	{0x0275,  0x01, "0x0100", eReadWrite},	
	
	{0x0307,  0x2B, "0x0100", eReadWrite},	   
	{0x030D,  0x2E, "0x0100", eReadWrite},	 
	{0x0000,  0x00, "eTableEnd",eTableEnd}

};

const IsiRegDescription_t Sensor_g_1632x1224P30_fourlane_fpschg[] =
{
    {0x0160,  0x05, "0x0100", eReadWrite},  
	{0x0161,  0x34, "0x0100", eReadWrite},	
	{0x0260,  0x05, "0x0100", eReadWrite},  
	{0x0261,  0x34, "0x0100", eReadWrite},	
	{0x0000,  0x00, "eTableEnd",eTableEnd}
};

const IsiRegDescription_t Sensor_g_1632x1224P20_fourlane_fpschg[] =
{
    {0x0160,  0x08, "0x0100", eReadWrite},  
	{0x0161,  0x53, "0x0100", eReadWrite},	
	{0x0260,  0x08, "0x0100", eReadWrite},  
	{0x0261,  0x53, "0x0100", eReadWrite},	
	{0x0000,  0x00, "eTableEnd",eTableEnd}
};

const IsiRegDescription_t Sensor_g_1632x1224P15_fourlane_fpschg[] =
{
    {0x0160,  0x0b, "0x0100", eReadWrite},  
	{0x0161,  0x19, "0x0100", eReadWrite},	
	{0x0260,  0x0b, "0x0100", eReadWrite},  
	{0x0261,  0x19, "0x0100", eReadWrite},	
	{0x0000,  0x00, "eTableEnd",eTableEnd}
};

const IsiRegDescription_t Sensor_g_1632x1224P10_fourlane_fpschg[] =
{
    {0x0160,  0x10, "0x0100", eReadWrite},  
	{0x0161,  0xa6, "0x0100", eReadWrite},	
	{0x0260,  0x10, "0x0100", eReadWrite},  
	{0x0261,  0xa6, "0x0100", eReadWrite},	
	{0x0000,  0x00, "eTableEnd",eTableEnd}
};

const IsiRegDescription_t Sensor_g_fourlane_resolution_3264_2448[] =
{
	{0x0160,   0x09, "0x0100", eReadWrite},	
    {0x0161,   0xf0, "0x0100", eReadWrite},	 
    {0x016C,   0x0C, "0x0100", eReadWrite},	
    {0x016D,   0xD0, "0x0100", eReadWrite},	
    {0x016E,   0x09, "0x0100", eReadWrite},	
    {0x016F,   0xA0, "0x0100", eReadWrite},	 
    {0x0174,   0x00, "0x0100", eReadWrite},	
    {0x0175,   0x00, "0x0100", eReadWrite},

    {0x0260,   0x09, "0x0100", eReadWrite},	
    {0x0261,   0xf0, "0x0100", eReadWrite},	 
    {0x026C,   0x0C, "0x0100", eReadWrite},	
    {0x026D,   0xD0, "0x0100", eReadWrite},	
    {0x026E,   0x09, "0x0100", eReadWrite},	
    {0x026F,   0xA0, "0x0100", eReadWrite},	 
    {0x0274,   0x00, "0x0100", eReadWrite},	
    {0x0275,   0x00, "0x0100", eReadWrite},
    
    {0x0307,   0x53, "0x0100", eReadWrite},
    {0x030D,   0x56, "0x0100", eReadWrite},	
	{0x0000,  0x00, "eTableEnd",eTableEnd}

};

const IsiRegDescription_t Sensor_g_3264x2448P30_fourlane_fpschg[] =
{
    {0x0160,   0x09, "0x0100", eReadWrite},	
    {0x0161,   0xf0, "0x0100", eReadWrite},
    {0x0260,   0x09, "0x0100", eReadWrite},	
    {0x0261,   0xf0, "0x0100", eReadWrite},
    {0x0000,  0x00, "eTableEnd",eTableEnd}
};

const IsiRegDescription_t Sensor_g_3264x2448P20_fourlane_fpschg[] =
{
    {0x0160,   0x0E, "0x0100", eReadWrite},	
    {0x0161,   0xE8, "0x0100", eReadWrite},
    {0x0260,   0x0E, "0x0100", eReadWrite},	
    {0x0261,   0xE8, "0x0100", eReadWrite},
    {0x0000,  0x00, "eTableEnd",eTableEnd}
};

const IsiRegDescription_t Sensor_g_3264x2448P15_fourlane_fpschg[] =
{
    {0x0160,   0x13, "0x0100", eReadWrite},	
    {0x0161,   0xE0, "0x0100", eReadWrite},
    {0x0260,   0x13, "0x0100", eReadWrite},	
    {0x0261,   0xE0, "0x0100", eReadWrite},
    {0x0000,  0x00, "eTableEnd",eTableEnd}
};

const IsiRegDescription_t Sensor_g_3264x2448P10_fourlane_fpschg[] =
{
    {0x0160,   0x1D, "0x0100", eReadWrite},	
    {0x0161,   0xD0, "0x0100", eReadWrite},
    {0x0260,   0x1D, "0x0100", eReadWrite},	
    {0x0261,   0xD0, "0x0100", eReadWrite},
    {0x0000,  0x00, "eTableEnd",eTableEnd}
};

const IsiRegDescription_t Sensor_g_3264x2448P7_fourlane_fpschg[] =
{
    {0x0160,   0x2A, "0x0100", eReadWrite},	
    {0x0161,   0x96, "0x0100", eReadWrite},
    {0x0260,   0x2A, "0x0100", eReadWrite},	
    {0x0261,   0x96, "0x0100", eReadWrite},
    {0x0000,  0x00, "eTableEnd",eTableEnd}
};

//two lane
const IsiRegDescription_t Sensor_g_aRegDescription_twolane[] =
{
    //{0x0100,   0x00, "0x0100", eReadWrite}, 
	{0x30EB,   0x05, "0x0100", eReadWrite}, 
	{0x30EB,   0x0C, "0x0100", eReadWrite}, 
	{0x300A,   0xFF, "0x0100", eReadWrite}, 
	{0x300B,   0xFF, "0x0100", eReadWrite}, 
	{0x30EB,   0x05, "0x0100", eReadWrite}, 
	{0x30EB,   0x09, "0x0100", eReadWrite}, 
	{0x0114,   0x01, "0x0100", eReadWrite}, 
	{0x0128,   0x00, "0x0100", eReadWrite}, 
	{0x012A,   0x18, "0x0100", eReadWrite}, 
	{0x012B,   0x00, "0x0100", eReadWrite}, 
	{0x0150,   0x00, "0x0100", eReadWrite}, 
	{0x0152,   0x01, "0x0100", eReadWrite}, 
	{0x0154,   0x00, "0x0100", eReadWrite}, 
	{0x0254,   0x00, "0x0100", eReadWrite}, 
    //group a
	{0x0164,   0x00, "0x0100", eReadWrite}, 
	{0x0165,   0x00, "0x0100", eReadWrite}, 
	{0x0166,   0x0C, "0x0100", eReadWrite}, 
	{0x0167,   0xCF, "0x0100", eReadWrite}, 
	{0x0168,   0x00, "0x0100", eReadWrite}, 
	{0x0169,   0x00, "0x0100", eReadWrite}, 
	{0x016A,   0x09, "0x0100", eReadWrite}, 
	{0x016B,   0x9F, "0x0100", eReadWrite}, 
    {0x0170,   0x01, "0x0100", eReadWrite}, 
	{0x0171,   0x01, "0x0100", eReadWrite},
	{0x0172,   0x03, "0x0100", eReadWrite},
    {0x018C,   0x0A, "0x0100", eReadWrite}, 
	{0x018D,   0x0A, "0x0100", eReadWrite}, 

    //group B
	{0x0264,   0x00, "0x0100", eReadWrite}, 
	{0x0265,   0x00, "0x0100", eReadWrite}, 
	{0x0266,   0x0C, "0x0100", eReadWrite}, 
	{0x0267,   0xCF, "0x0100", eReadWrite}, 
	{0x0268,   0x00, "0x0100", eReadWrite}, 
	{0x0269,   0x00, "0x0100", eReadWrite}, 
	{0x026A,   0x09, "0x0100", eReadWrite}, 
	{0x026B,   0x9F, "0x0100", eReadWrite}, 
    {0x0270,   0x01, "0x0100", eReadWrite}, 
	{0x0271,   0x01, "0x0100", eReadWrite},
	{0x0272,   0x03, "0x0100", eReadWrite},
    {0x028C,   0x0A, "0x0100", eReadWrite}, 
	{0x028D,   0x0A, "0x0100", eReadWrite}, 
	
	{0x0301,   0x05, "0x0100", eReadWrite}, 
	{0x0303,   0x01, "0x0100", eReadWrite}, 
	{0x0304,   0x03, "0x0100", eReadWrite}, 
	{0x0305,   0x03, "0x0100", eReadWrite}, 
	{0x0306,   0x00, "0x0100", eReadWrite}, 
	{0x0307,   0x36, "0x0100", eReadWrite}, 
	{0x0309,   0x0A, "0x0100", eReadWrite}, 
	{0x030B,   0x01, "0x0100", eReadWrite}, 
	{0x030C,   0x00, "0x0100", eReadWrite}, 
	{0x030D,   0x6c, "0x0100", eReadWrite}, 
	{0x455E,   0x00, "0x0100", eReadWrite}, 
	{0x471E,   0x4B, "0x0100", eReadWrite}, 
	{0x4767,   0x0F, "0x0100", eReadWrite}, 
	{0x4750,   0x14, "0x0100", eReadWrite}, 
	{0x4540,   0x00, "0x0100", eReadWrite}, 
	{0x47B4,   0x14, "0x0100", eReadWrite}, 
	{0x4713,   0x30, "0x0100", eReadWrite}, 
	{0x478B,   0x10, "0x0100", eReadWrite}, 
	{0x478F,   0x10, "0x0100", eReadWrite}, 
	{0x4793,   0x10, "0x0100", eReadWrite}, 
	{0x4797,   0x0E, "0x0100", eReadWrite}, 
	{0x479B,   0x0E, "0x0100", eReadWrite}, 

	{0x0000,   0x00, "eTableEnd",eTableEnd}

};

const IsiRegDescription_t Sensor_g_twolane_resolution_1632_1224[] =
{   
    {0x0150,   0x00, "0x0100", eReadWrite}, 
	{0x0152,   0x01, "0x0100", eReadWrite}, 
	{0x0154,   0x00, "0x0100", eReadWrite}, 
	{0x0254,   0x00, "0x0100", eReadWrite}, 
	{0x0160,   0x06, "0x0100", eReadWrite}, 
	{0x0161,   0x87, "0x0100", eReadWrite},
	{0x0162,   0x0d, "0x0100", eReadWrite}, 
	{0x0163,   0x78, "0x0100", eReadWrite}, 
	{0x016C,   0x06, "0x0100", eReadWrite},    
	{0x016D,   0x68, "0x0100", eReadWrite},    
	{0x016E,   0x04, "0x0100", eReadWrite},    
	{0x016F,   0xD0, "0x0100", eReadWrite}, 

	{0x0174,   0x01, "0x0100", eReadWrite},    
	{0x0175,   0x01, "0x0100", eReadWrite},    
	   
	{0x0260,   0x06, "0x0100", eReadWrite}, 
	{0x0261,   0x87, "0x0100", eReadWrite},
	{0x0262,   0x0d, "0x0100", eReadWrite}, 
	{0x0263,   0x78, "0x0100", eReadWrite}, 
	{0x026C,   0x06, "0x0100", eReadWrite},    
	{0x026D,   0x68, "0x0100", eReadWrite},    
	{0x026E,   0x04, "0x0100", eReadWrite},    
	{0x026F,   0xD0, "0x0100", eReadWrite}, 
	{0x0274,   0x01, "0x0100", eReadWrite},    
	{0x0275,   0x01, "0x0100", eReadWrite}, 
	
	{0x0000,   0x00, "eTableEnd",eTableEnd}

};

const IsiRegDescription_t Sensor_g_twolane_resolution_3264_2448[] =
{
    {0x0150,   0x00, "0x0100", eReadWrite}, 
	{0x0152,   0x01, "0x0100", eReadWrite}, 
	{0x0154,   0x00, "0x0100", eReadWrite}, 
	{0x0254,   0x00, "0x0100", eReadWrite}, 
	{0x0160,   0x09, "0x0100", eReadWrite}, 
	{0x0161,   0xC8, "0x0100", eReadWrite},
	{0x0162,   0x0d, "0x0100", eReadWrite}, 
	{0x0163,   0x78, "0x0100", eReadWrite},
	{0x016C,   0x0C, "0x0100", eReadWrite}, 
	{0x016D,   0xD0, "0x0100", eReadWrite}, 
	{0x016E,   0x09, "0x0100", eReadWrite}, 
	{0x016F,   0xA0, "0x0100", eReadWrite}, 

	{0x0174,   0x00, "0x0100", eReadWrite}, 
	{0x0175,   0x00, "0x0100", eReadWrite}, 

	{0x0260,   0x09, "0x0100", eReadWrite}, 
	{0x0261,   0xC8, "0x0100", eReadWrite},
	{0x0262,   0x0d, "0x0100", eReadWrite}, 
	{0x0263,   0x78, "0x0100", eReadWrite}, 
	{0x026C,   0x0C, "0x0100", eReadWrite}, 
	{0x026D,   0xD0, "0x0100", eReadWrite}, 
	{0x026E,   0x09, "0x0100", eReadWrite}, 
	{0x026F,   0xA0, "0x0100", eReadWrite},
	{0x0274,   0x00, "0x0100", eReadWrite}, 
	{0x0275,   0x00, "0x0100", eReadWrite}, 
	{0x0000,   0x00, "eTableEnd",eTableEnd}
};


const IsiRegDescription_t Sensor_g_1632x1224P30_twolane_fpschg[] =
{
	{0x0160,   0x06, "0x0100", eReadWrite}, 
	{0x0161,   0x87, "0x0100", eReadWrite},
	{0x0260,   0x06, "0x0100", eReadWrite}, 
	{0x0261,   0x87, "0x0100", eReadWrite},
	{0x0000,   0x00, "eTableEnd",eTableEnd}
};



const IsiRegDescription_t Sensor_g_1632x1224P25_twolane_fpschg[] =
{
	{0x0160,   0x07, "0x0100", eReadWrite}, 
	{0x0161,   0xd5, "0x0100", eReadWrite},
	{0x0260,   0x07, "0x0100", eReadWrite}, 
	{0x0261,   0xd5, "0x0100", eReadWrite},
	{0x0000,   0x00, "eTableEnd",eTableEnd}
};


const IsiRegDescription_t Sensor_g_1632x1224P20_twolane_fpschg[] =
{
	{0x0160,   0x09, "0x0100", eReadWrite}, 
	{0x0161,   0xca, "0x0100", eReadWrite},
	{0x0260,   0x09, "0x0100", eReadWrite}, 
	{0x0261,   0xca, "0x0100", eReadWrite},
	{0x0000,   0x00, "eTableEnd",eTableEnd}
};

const IsiRegDescription_t Sensor_g_1632x1224P15_twolane_fpschg[] =
{
	{0x0160,   0x0d, "0x0100", eReadWrite}, 
	{0x0161,   0x0E, "0x0100", eReadWrite},
	{0x0260,   0x0d, "0x0100", eReadWrite}, 
	{0x0261,   0x0E, "0x0100", eReadWrite},
	{0x0000,   0x00, "eTableEnd",eTableEnd}
};

const IsiRegDescription_t Sensor_g_1632x1224P10_twolane_fpschg[] =
{
	{0x0160,   0x13, "0x0100", eReadWrite}, 
	{0x0161,   0x95, "0x0100", eReadWrite},
	{0x0260,   0x13, "0x0100", eReadWrite}, 
	{0x0261,   0x95, "0x0100", eReadWrite},
	{0x0000,   0x00, "eTableEnd",eTableEnd}
};


const IsiRegDescription_t Sensor_g_3264x2448P20_twolane_fpschg[] =
{
	{0x0160,   0x09, "0x0100", eReadWrite}, 
	{0x0161,   0xC8, "0x0100", eReadWrite},
	{0x0260,   0x09, "0x0100", eReadWrite}, 
	{0x0261,   0xC8, "0x0100", eReadWrite},
	{0x0000,   0x00, "eTableEnd",eTableEnd}
};

const IsiRegDescription_t Sensor_g_3264x2448P15_twolane_fpschg[] =
{
	{0x0160,   0x0d, "0x0100", eReadWrite}, 
	{0x0161,   0x0A, "0x0100", eReadWrite},
	{0x0260,   0x0d, "0x0100", eReadWrite}, 
	{0x0261,   0x0A, "0x0100", eReadWrite},
	{0x0000,   0x00, "eTableEnd",eTableEnd}
};

const IsiRegDescription_t Sensor_g_3264x2448P10_twolane_fpschg[] =
{
	{0x0160,   0x13, "0x0100", eReadWrite}, 
	{0x0161,   0x90, "0x0100", eReadWrite},
	{0x0260,   0x13, "0x0100", eReadWrite}, 
	{0x0261,   0x90, "0x0100", eReadWrite},
	{0x0000,   0x00, "eTableEnd",eTableEnd}
};

const IsiRegDescription_t Sensor_g_3264x2448P7_twolane_fpschg[] =
{
	{0x0160,   0x1B, "0x0100", eReadWrite}, 
	{0x0161,   0xf2, "0x0100", eReadWrite},
	{0x0260,   0x1B, "0x0100", eReadWrite}, 
	{0x0261,   0xf2, "0x0100", eReadWrite},
	{0x0000,   0x00, "eTableEnd",eTableEnd}
};



//one lane
const IsiRegDescription_t Sensor_g_aRegDescription_onelane[] =
{
	{0x0000 ,0x00,"eTableEnd",eTableEnd}

};

const IsiRegDescription_t Sensor_g_onelane_resolution_3264_2448[] =
{
	{0x0000, 0x00 ,"eTableEnd",eTableEnd}
};


const IsiRegDescription_t Sensor_g_onelane_resolution_1632_1224[] =
{
    {0x0000 ,0x00,"eTableEnd",eTableEnd}
};

