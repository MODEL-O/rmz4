// undefined FUN_08055c08(void)
// entry 0x8055c08


undefined4 FUN_08055c08(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 *local_20 [2];
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0xf7);
    FUN_0801cf00(param_1,DAT_08055cc0);
    *(undefined4 *)(param_1 + 0x60) = DAT_08055cc4;
    *(undefined4 *)(param_1 + 0x68) = 0x38;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_08055ccc) * 4 + DAT_08055cc8)) * 0x18 + DAT_08055cd0);
  iVar3 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar3;
  if (0 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  piVar4 = (int *)(param_1 + 0xbc);
  iVar3 = *piVar4 + *(int *)(param_1 + 0x60);
  *piVar4 = iVar3;
  *(int *)(param_1 + 0x58) =
       iVar3 + *(short *)((uint)*(byte *)(param_1 + 0xb5) * 2 + DAT_08055cd4) * 2;
  iVar3 = DAT_08055cd8;
  if (*piVar4 < *(int *)(DAT_08055cd8 + 0x3c) + DAT_08055cdc) {
    uVar2 = 2;
  }
  else {
    if (*(int *)(param_1 + 0x60) != 0) {
      return in_lr;
    }
    FUN_08129258(auStack_2c,PTR_DAT_08055d28,3);
    FUN_08129258(auStack_28,PTR_DAT_08055d2c,3);
    FUN_08129258(auStack_24,PTR_DAT_08055d30,3);
    local_20[0] = auStack_28;
    local_20[1] = auStack_24;
    bVar1 = (byte)*(ushort *)(iVar3 + -0xe0) & 8;
    if ((*(ushort *)(iVar3 + -0xe0) & 8) != 0) {
      *(undefined1 *)(param_1 + 0xe) = 1;
      *(undefined1 *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    iVar3 = FUN_08059b68(local_20[0x7e00 < (*(int *)(param_1 + 0x54) -
                                           *(int *)(*DAT_08055d70 + 0x54)) + 0x3f00U],3);
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 0xd) = auStack_2c[iVar3];
      *(byte *)(param_1 + 0xe) = bVar1;
      *(byte *)(param_1 + 0xf) = bVar1;
      return in_lr;
    }
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0xe) = uVar2;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


