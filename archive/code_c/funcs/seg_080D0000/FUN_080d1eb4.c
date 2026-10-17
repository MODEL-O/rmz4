// undefined FUN_080d1eb4(void)
// entry 0x80d1eb4


undefined4 FUN_080d1eb4(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar4 = DAT_080d1f1c;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar4 = 0xf00;
  }
  *(int *)(param_1 + 0x54) = iVar1 + iVar4;
  uVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((uVar2 & 0xf) == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080d1f20;
    uVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54));
    if ((uVar2 & 0xf) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d1f24);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
      return in_lr;
    }
  }
  uVar2 = *DAT_080d1f88 * DAT_080d1f8c + DAT_080d1f90;
  *DAT_080d1f88 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + (((uVar2 & 0x7fffffff) >> 0x10 & 4) - 2) * 0x100;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x11);
  *(undefined1 *)(param_1 + 0x12) = 0;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d1f94);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_080d1dd0(param_1);
  return in_lr;
}


