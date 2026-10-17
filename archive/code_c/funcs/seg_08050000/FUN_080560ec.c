// undefined FUN_080560ec(void)
// entry 0x80560ec


undefined4 FUN_080560ec(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar2 = *DAT_08056200;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0xfa);
    FUN_0801cf00(param_1,DAT_08056204);
    iVar3 = FUN_0805977c(param_1);
    uVar1 = *(ushort *)(iVar3 * 2 + DAT_08056208);
    *(ushort *)(param_1 + 0xc2) = uVar1;
    uVar4 = FUN_080598f4(param_1);
    iVar3 = DAT_0805620c;
    iVar5 = (uint)uVar1 * (int)*(short *)((uVar4 + 0x40 & 0xff) * 2 + DAT_0805620c);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar5 >> 8;
    iVar3 = (uint)uVar1 * (int)*(short *)((uVar4 & 0xff) * 2 + iVar3);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar3 >> 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar3 = DAT_08056218;
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_08056214) * 4 + DAT_08056210)) * 0x18 + DAT_08056218);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar5 = *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0xbc) = iVar5;
  *(int *)(param_1 + 0x58) =
       iVar5 + *(short *)((uint)*(byte *)(param_1 + 0xb5) * 2 + DAT_0805620c) * 2;
  if ((iVar2 == 0) || ((*(uint *)(param_1 + 0x8c) & 0x800) == 0)) {
    if (*(int *)(DAT_08056244 + 0x3c) + DAT_08056248 <= *(int *)(param_1 + 0x58) + DAT_08056240) {
      *(undefined1 *)(param_1 + 0xe) = 4;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *(undefined4 *)(iVar2 + 0x60) = 0;
    FUN_08005784(param_1 + 0x74,iVar3 + 0x168);
    *(undefined1 *)(param_1 + 0xe) = 5;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


