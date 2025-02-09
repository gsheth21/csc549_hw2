/* This file was generated by lv6 version 6.101.27. */
/*  lv6 -cc switch.lus -n Switch */
/* on c74 the 08/02/2025 at 07:06:02 */
#include "switch_Switch.h"
//// Defining step functions
// Memory initialisation for Lustre_arrow_ctx
void Lustre_arrow_ctx_reset(Lustre_arrow_ctx_type* ctx){  ctx->_memory = _true;
}
// Memory allocation for Lustre_arrow_ctx
Lustre_arrow_ctx_type* Lustre_arrow_ctx_new_ctx(){

   Lustre_arrow_ctx_type* ctx = (Lustre_arrow_ctx_type*)calloc(1, sizeof(Lustre_arrow_ctx_type));
   // ctx->client_data = cdata;
   Lustre_arrow_ctx_reset(ctx);
  return ctx;
}
// Step function(s) for Lustre_arrow_ctx
void Lustre_arrow_step(_integer i1,_integer i2,_integer *out,Lustre_arrow_ctx_type* ctx){  *out = ((ctx->_memory)? i1 : i2);
  ctx->_memory = _false;

} // End of Lustre_arrow_step

// Memory initialisation for Lustre_pre_ctx
void Lustre_pre_ctx_reset(Lustre_pre_ctx_type* ctx){
}
// Memory allocation for Lustre_pre_ctx
Lustre_pre_ctx_type* Lustre_pre_ctx_new_ctx(){

   Lustre_pre_ctx_type* ctx = (Lustre_pre_ctx_type*)calloc(1, sizeof(Lustre_pre_ctx_type));
   // ctx->client_data = cdata;
   Lustre_pre_ctx_reset(ctx);
  return ctx;
}
// Step function(s) for Lustre_pre_ctx
void Lustre_pre_get(_integer *out,Lustre_pre_ctx_type* ctx){
  *out = ctx->_memory;

} // End of Lustre_pre_get

void Lustre_pre_set(_integer i1,Lustre_pre_ctx_type* ctx){
  ctx->_memory = i1;

} // End of Lustre_pre_set

// Memory initialisation for switch_Switch_ctx
void switch_Switch_ctx_reset(switch_Switch_ctx_type* ctx){
  int _i;

    Lustre_pre_ctx_reset(&ctx->Lustre_pre_ctx_tab[0]);
    Lustre_pre_ctx_reset(&ctx->Lustre_pre_ctx_tab[1]);
    Lustre_arrow_ctx_reset(&ctx->Lustre_arrow_ctx_tab[0]);
    Lustre_arrow_ctx_reset(&ctx->Lustre_arrow_ctx_tab[1]);
}
// Memory allocation for switch_Switch_ctx
switch_Switch_ctx_type* switch_Switch_ctx_new_ctx(){

   switch_Switch_ctx_type* ctx = (switch_Switch_ctx_type*)calloc(1, sizeof(switch_Switch_ctx_type));
   // ctx->client_data = cdata;
   switch_Switch_ctx_reset(ctx);
  return ctx;
}
// Step function(s) for switch_Switch_ctx
void switch_Switch_step(_boolean press,_integer *mode,_integer *x,switch_Switch_ctx_type* ctx){   _integer _split_12;
   _integer _split_11;
   _boolean _split_10;
   _boolean _split_9;
   _boolean _split_8;
   _integer _split_7;
   _boolean _split_6;
   _boolean _split_5;
   _integer _split_4;
   _boolean _split_3;
   _integer _split_2;
   _integer _split_1;
   _integer pm;
   _integer px;

  Lustre_pre_get(&_split_1,&ctx->Lustre_pre_ctx_tab[0]); 
  Lustre_pre_get(&_split_2,&ctx->Lustre_pre_ctx_tab[1]); 
  Lustre_arrow_step(0,_split_2,&px,&ctx->Lustre_arrow_ctx_tab[1]); 
  _split_5 = px >= 10;
  _split_6 = press | _split_5;
   if (_split_6 == _true) {
     _split_7 = 0;
   } else {
     _split_7 = 1;
   }
  Lustre_arrow_step(0,_split_1,&pm,&ctx->Lustre_arrow_ctx_tab[0]); 
  _split_3 = pm == 0;
   if (press == _true) {
     _split_4 = 1;
   } else {
     _split_4 = 0;
   }
   if (_split_3 == _true) {
     *mode = _split_4;
   } else {
     *mode = _split_7;
   }
  Lustre_pre_set(*mode,&ctx->Lustre_pre_ctx_tab[0]); 
  _split_9 = px >= 10;
  _split_10 = press | _split_9;
  _split_11 = px + 1;
   if (_split_10 == _true) {
     _split_12 = 0;
   } else {
     _split_12 = _split_11;
   }
  _split_8 = pm == 0;
   if (_split_8 == _true) {
     *x = 0;
   } else {
     *x = _split_12;
   }
  Lustre_pre_set(*x,&ctx->Lustre_pre_ctx_tab[1]); 

} // End of switch_Switch_step

