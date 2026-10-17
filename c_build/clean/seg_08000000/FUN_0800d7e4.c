// undefined FUN_0800d7e4(void)
// entry 0x800d7e4


void FUN_0800d7e4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_0800d7f0;
  uVar2 = param_1[1];
  *(int *)DAT_0800d7f0 = *param_1;
  puVar1[1] = uVar2;
  return;
}


