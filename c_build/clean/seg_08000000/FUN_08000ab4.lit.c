// undefined FUN_08000ab4(void)
// entry 0x8000ab4


void FUN_08000ab4(undefined2 param_1,uint param_2,uint param_3)

{
  undefined2 *puVar1;
  undefined4 local_1c;
  undefined2 local_18 [2];
  
  param_3 = param_3 & 0xfffffffe;
  if (param_3 != 0) {
    puVar1 = (undefined2 *)(param_2 & 0xfffffffe);
    if ((param_2 & 2) != 0) {
      *puVar1 = param_1;
      param_3 = param_3 - 2;
      if (param_3 == 0) {
        return;
      }
      puVar1 = puVar1 + 1;
    }
    if (0x20 < param_3) {
      local_1c = CONCAT22(param_1,param_1);
      FUN_08128be0(&local_1c,puVar1,(param_3 & 0xffffffe0) >> 2 & 0x001fffff | 0x1000000);
      puVar1 = (undefined2 *)((int)puVar1 + (param_3 & 0xffffffe0));
      param_3 = param_3 & 0x1f;
      if (param_3 == 0) {
        return;
      }
    }
    local_18[0] = param_1;
    FUN_08128be4(local_18,puVar1,(param_3 & 0x3fffff) >> 1 | 0x1000000);
  }
  return;
}


