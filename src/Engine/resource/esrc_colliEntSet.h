/*
 * ========================= esrc_colliEntSet.h ==========================
 *                          -- tpr --
 *                                        CREATE -- 2019.04.19
 *                                        MODIFY --
 * ----------------------------------------------------------
 */
#ifndef TPR_ESRC_COLLI_ENT_SET_H_
#define TPR_ESRC_COLLI_ENT_SET_H_

//-------------------- CPP --------------------//
#include <unordered_map>
#include <string>

//-------------------- Engine --------------------//
#include "ColliEntSet.h"

namespace esrc {//------------------ namespace: esrc -------------------------//


void load_colliEntSets();
void debug_colliEntSets(); //- debug

const ColliEntSet &get_colliEntSetRef( int _colliEntSetIdx );


void init_colliEntSet_tables(); 


}//---------------------- namespace: esrc -------------------------//
#endif

