// undefined FUN_080a8c38(void)
// entry 0x80a8c38


undefined4 FUN_080a8c38(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(iVar2 + 0x58) + DAT_080a8c84;
  *(int *)(param_1 + 0x58) = iVar3 + (*(int *)(iVar4 + 0x58) - iVar3 >> 1);
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar2 = *(int *)(iVar2 + 0x54) + DAT_080a8d1c;
    *(int *)(param_1 + 0x54) = iVar2 + (*(int *)(iVar4 + 0x54) - iVar2 >> 1);
    uVar1 = FUN_08128bdc((iVar2 - *(int *)(iVar4 + 0x54)) * 0x100 >> 0x10,
                         (iVar3 - *(int *)(iVar4 + 0x58)) * 0x100 >> 0x10);
    uVar1 = ((uVar1 & 0xffff) >> 8) + 0xc0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x54) + 0x3500;
    *(int *)(param_1 + 0x54) = iVar2 + (*(int *)(iVar4 + 0x54) - iVar2 >> 1);
    uVar1 = FUN_08128bdc((iVar2 - *(int *)(iVar4 + 0x54)) * 0x100 >> 0x10,
                         (iVar3 - *(int *)(iVar4 + 0x58)) * 0x100 >> 0x10);
    uVar1 = ((uVar1 & 0xffff) >> 8) + 0x40;
  }
  iVar3 = DAT_080a8d20;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       ((int)*(short *)(iVar4 + 0xbc) *
        (int)*(short *)(((uVar1 & 0xff) + 0x40 & 0xff) * 2 + DAT_080a8d20) >> 8);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) +
       ((int)*(short *)(iVar4 + 0xbc) * (int)*(short *)((uVar1 & 0xff) * 2 + iVar3) >> 8);
  if (iVar2 < *(int *)(iVar4 + 0x54)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined1 *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  iVar3 = *(int *)(iVar4 + 0x54) - iVar2;
  if (iVar3 < 0) {
    iVar3 = iVar2 - *(int *)(iVar4 + 0x54);
  }
  if (iVar3 < 0x801) {
    FUN_0801cf00(param_1,DAT_080a8d80);
  }
  else {
    FUN_0801cf00(param_1,DAT_080a8d68);
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


