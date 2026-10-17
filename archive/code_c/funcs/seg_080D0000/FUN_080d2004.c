// undefined FUN_080d2004(void)
// entry 0x80d2004


undefined4 FUN_080d2004(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0xf);
  puVar4 = DAT_080d20a8;
  puVar1 = DAT_080d2044;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar2 = *DAT_080d20a8 * DAT_080d20ac + DAT_080d20b0;
    *DAT_080d20a8 = uVar2 & 0x7fffffff;
    uVar2 = -((uVar2 & 0x1ffffff) >> 0x10);
  }
  else {
    uVar2 = *DAT_080d2044 * DAT_080d2048 + DAT_080d204c;
    *DAT_080d2044 = uVar2 & 0x7fffffff;
    uVar2 = (uVar2 & 0x1ffffff) >> 0x10;
    puVar4 = puVar1;
  }
  *(uint *)(param_1 + 0x5c) = uVar2;
  uVar2 = *puVar4 * DAT_080d20ac + DAT_080d20b0;
  *puVar4 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = (((uVar2 & 0x7fffffff) >> 0x10 & 0xf) + 0xd) * -0x40;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d20b4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_080d1dd0(param_1);
  return in_lr;
}


