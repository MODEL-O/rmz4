// undefined FUN_08058d20(void)
// entry 0x8058d20


undefined4 FUN_08058d20(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_08058d54);
    iVar1 = DAT_08058df0;
    if (*(int *)(param_1 + 0xbc) < *(int *)(param_1 + 0xb8)) {
      iVar3 = 0x30;
      if (*(int *)(param_1 + 0x54) < *(int *)(*DAT_08058d58 + 0x54)) {
        iVar3 = 0x50;
      }
    }
    else {
      iVar3 = 0xd0;
      if (*(int *)(param_1 + 0x54) < *(int *)(*DAT_08058dec + 0x54)) {
        iVar3 = 0xb0;
      }
    }
    *(int *)(param_1 + 0x5c) = (int)*(short *)((iVar3 + 0x40U & 0xff) * 2 + DAT_08058df0) << 1;
    *(int *)(param_1 + 0x60) = (int)*(short *)(iVar3 * 2 + iVar1) << 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_08058df8) * 4 + DAT_08058df4)) * 0x18 + DAT_08058dfc);
  iVar1 = FUN_080597ac(param_1);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    piVar2 = (int *)(param_1 + 0xbc);
    iVar3 = *piVar2 + *(int *)(param_1 + 0x60);
    *piVar2 = iVar3;
    iVar1 = DAT_08058e70;
    *(int *)(param_1 + 0x58) =
         iVar3 + *(short *)((uint)*(byte *)(param_1 + 0xb5) * 2 + DAT_08058e70) * 2;
    if (((*(int *)(param_1 + 0x60) < 0) && (iVar3 <= *(int *)(param_1 + 0xb8))) ||
       ((0 < *(int *)(param_1 + 0x60) && (*(int *)(param_1 + 0xb8) <= iVar3)))) {
      *piVar2 = *(int *)(param_1 + 0xb8);
      *(int *)(param_1 + 0x58) =
           *(int *)(param_1 + 0xb8) + *(short *)((uint)*(byte *)(param_1 + 0xb5) * 2 + iVar1) * 2;
      FUN_08059548(param_1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


