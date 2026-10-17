// undefined FUN_0801c550(void)
// entry 0x801c550


void FUN_0801c550(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_0801c55c;
  uVar2 = param_1[1];
  *DAT_0801c55c = *param_1;
  puVar1[1] = uVar2;
  return;
}


