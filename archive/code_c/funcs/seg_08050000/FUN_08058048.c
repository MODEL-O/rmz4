// undefined FUN_08058048(void)
// entry 0x8058048


undefined4 FUN_08058048(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x100);
    FUN_0801cf00(param_1,DAT_080580ac);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xcc) + 0xf000;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    if ((uint)((*(int *)(*DAT_080580e0 + 0x54) - *(int *)(param_1 + 0xcc)) + DAT_080580e4) < 0xa001)
    {
      iVar4 = *(int *)(param_1 + 0xb8) + 0x2000;
    }
    else {
      iVar4 = *(int *)(param_1 + 0xb8) + 0x1000;
    }
    *(int *)(param_1 + 0xbc) = iVar4;
    *(int *)(param_1 + 0x58) =
         iVar4 + *(short *)((uint)*(byte *)(param_1 + 0xb5) * 2 + DAT_080581e8) * 2;
    *(uint *)(param_1 + 0x5c) = ((uint)bVar1 * 2 + -1) * 0x380;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0xfffffff0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_080581f0) * 4 + DAT_080581ec)) * 0x18 + DAT_080581f4);
  if ((*(char *)(param_1 + 0x12) == '\0') &&
     (*(int *)(*DAT_080581f8 + 0x58) < *(int *)(param_1 + 0x58))) {
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  if (*(char *)(param_1 + 0x12) != '\0') {
    iVar3 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar3;
    if (iVar3 < DAT_080581fc) {
      *(int *)(param_1 + 0x60) = DAT_080581fc;
    }
    iVar3 = *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0xbc) = iVar3;
    *(int *)(param_1 + 0x58) =
         iVar3 + *(short *)((uint)*(byte *)(param_1 + 0xb5) * 2 + DAT_080581e8) * 2;
  }
  if (0x28000 < (iVar4 - *(int *)(param_1 + 0xcc)) + 0x5000U) {
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


