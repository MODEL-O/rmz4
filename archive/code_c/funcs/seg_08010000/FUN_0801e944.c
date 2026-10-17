// undefined FUN_0801e944(void)
// entry 0x801e944


undefined4 FUN_0801e944(undefined1 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  *param_1 = 2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x42] = 0;
  iVar2 = 0x13;
  puVar1 = param_1 + 0x29;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + -1;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  puVar1 = param_1 + 0x31;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + -1;
  } while ((int)(param_1 + 0x2a) <= (int)puVar1);
  puVar1 = param_1 + 0x41;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + -1;
  } while ((int)(param_1 + 0x32) <= (int)puVar1);
  return in_lr;
}


