// undefined FUN_080d91ac(void)
// entry 0x80d91ac


undefined4 FUN_080d91ac(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar1 = 0xc0;
  }
  else {
    uVar1 = 0xffffff40;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  uVar2 = *DAT_080d91e8 * DAT_080d91ec + DAT_080d91f0;
  *DAT_080d91e8 = uVar2 & 0x7fffffff;
  *(byte *)(param_1 + 0x12) = ((byte)(uVar2 >> 0x10) & 7) + 0x4c;
  return in_lr;
}


