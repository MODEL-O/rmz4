// undefined FUN_08018eac(void)
// entry 0x8018eac


void FUN_08018eac(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_08018eb8;
  uVar2 = param_1[1];
  *DAT_08018eb8 = *param_1;
  puVar1[1] = uVar2;
  return;
}


