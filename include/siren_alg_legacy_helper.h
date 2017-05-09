#ifndef SIREN_ALG_LEGACY_HELPER_
#define SIREN_ALG_LEGACY_HELPER_

#include "legacy/r2math.h"

#include "legacy/r2math.h"
#include "legacy/r2mem_i.h"
#include "legacy/r2mem_rdc.h"
#include "legacy/r2mem_aec.h"
#include "legacy/r2mem_o.h"
#include "legacy/r2mem_aec_fix.h"
#include "legacy/r2mem_rs2.h"
#include "legacy/r2mem_buff.h"

namespace BlackSiren {

struct PreprocessorMicInfoAdapter {
    r2_mic_info *m_pMicInfo_in;
    r2_mic_info *m_pMicInfo_rs;
    r2_mic_info *m_pMicInfo_aec;
    r2_mic_info *m_pMicInfo_aec_ref;
    
    r2_mic_info *m_pCpuInfo_aec;
};

struct PreprocessorUnitAdapter {
    r2mem_i *m_pMem_in;
    r2mem_rs2 *m_pMem_rs;
    r2mem_aec_fix *m_pMem_aec_fix;
    r2mem_rdc *m_pMem_rdc;
    r2mem_aec *m_pMem_aec;
    r2mem_o *m_pMem_out;
    r2mem_buff *m_pMem_buff;
};

}


#endif
