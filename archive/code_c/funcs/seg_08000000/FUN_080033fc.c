// undefined FUN_080033fc(void)
// entry 0x80033fc


undefined4 FUN_080033fc(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  puVar1 = (undefined4 *)
           (((param_4 << 0x10) >> 0xe) + ((param_3 << 0x10) >> 9) + *(int *)(param_1 + 0x200));
  *param_2 = *puVar1;
  *puVar1 = param_2;
  return in_lr;
}


