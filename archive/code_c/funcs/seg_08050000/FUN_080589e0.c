// undefined FUN_080589e0(void)
// entry 0x80589e0


undefined4 FUN_080589e0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_08058abc);
    *(uint *)(param_1 + 0x5c) = ((bVar1 >> 4 & 1) * 2 + -1) * 0x200;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0xffffffe0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_08058ac4) * 4 + DAT_08058ac0)) * 0x18 + DAT_08058ac8);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar2;
  if (iVar2 < DAT_08058acc) {
    *(int *)(param_1 + 0x60) = DAT_08058acc;
  }
  piVar5 = (int *)(param_1 + 0xbc);
  iVar3 = *piVar5 + *(int *)(param_1 + 0x60);
  *piVar5 = iVar3;
  iVar2 = DAT_08058ad0;
  *(int *)(param_1 + 0x58) =
       iVar3 + *(short *)((uint)*(byte *)(param_1 + 0xb5) * 2 + DAT_08058ad0) * 2;
  iVar4 = *(int *)(param_1 + 0xb8);
  if (iVar3 <= iVar4) {
    *piVar5 = iVar4;
    *(int *)(param_1 + 0x58) = iVar4 + *(short *)((uint)*(byte *)(param_1 + 0xb5) * 2 + iVar2) * 2;
    *(undefined1 *)(param_1 + 0xe) = 5;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


