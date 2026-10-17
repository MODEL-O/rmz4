// undefined FUN_08058200(void)
// entry 0x8058200


undefined4 FUN_08058200(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_0805825c);
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
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0xb8) +
         *(short *)((uint)*(byte *)(param_1 + 0xb5) * 2 + DAT_08058304) * 2;
    *(uint *)(param_1 + 0x5c) = ((uint)bVar1 * 2 + -1) * 0x300;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_0805830c) * 4 + DAT_08058308)) * 0x18 + DAT_08058310);
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  if ((uint)((iVar3 - *(int *)(param_1 + 0xcc)) + DAT_08058314) < 0x19001) {
    *(undefined1 *)(param_1 + 0xe) = 4;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


