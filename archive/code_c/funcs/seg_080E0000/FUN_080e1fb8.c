// undefined FUN_080e1fb8(void)
// entry 0x80e1fb8


undefined4 FUN_080e1fb8(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar1 = *DAT_080e2000 * DAT_080e2004 + DAT_080e2008;
  *DAT_080e2000 = uVar1 & 0x7fffffff;
  uVar3 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 0x10;
  if (0 < *(int *)(param_1 + 0x5c)) {
    uVar3 = uVar3 | 1;
  }
  FUN_080d4c8c(param_1 + 0x54,((uVar1 & 0x7fffffff) >> 0x10 & 1) * 0x1c + DAT_080e200c,0,uVar3);
  FUN_080d0c88(1,param_1 + 0x54);
  FUN_08002b10(0x2a);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e2048);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


