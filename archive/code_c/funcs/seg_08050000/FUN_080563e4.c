// undefined FUN_080563e4(void)
// entry 0x80563e4


undefined4 FUN_080563e4(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080564d8);
    FUN_0805977c(param_1);
    uVar1 = FUN_080599a4(param_1);
    iVar3 = DAT_080564dc;
    iVar2 = *(short *)((uVar1 + 0x40 & 0xff) * 2 + DAT_080564dc) * 0x500;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
    iVar3 = *(short *)((uVar1 & 0xff) * 2 + iVar3) * 0x500;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar3 >> 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_080564e4) * 4 + DAT_080564e0)) * 0x18 + DAT_080564e8);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  piVar4 = (int *)(param_1 + 0xbc);
  iVar5 = *piVar4 + *(int *)(param_1 + 0x60);
  *piVar4 = iVar5;
  iVar3 = DAT_080564dc;
  *(int *)(param_1 + 0x58) =
       iVar5 + *(short *)((uint)*(byte *)(param_1 + 0xb5) * 2 + DAT_080564dc) * 2;
  iVar2 = *(int *)(param_1 + 0xb8);
  if (iVar5 <= iVar2) {
    *piVar4 = iVar2;
    *(int *)(param_1 + 0x58) = iVar2 + *(short *)((uint)*(byte *)(param_1 + 0xb5) * 2 + iVar3) * 2;
    *(undefined1 *)(param_1 + 0xe) = 8;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


