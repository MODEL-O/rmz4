// undefined FUN_080f948c(void)
// entry 0x80f948c


undefined4 FUN_080f948c(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  puVar4 = (uint *)(param_1 + 0x8c);
  if ((*puVar4 & 1) != 0) {
    FUN_08006984(0x32);
  }
  if ((*puVar4 & 0x200) != 0) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f94d8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    if ((*puVar4 & 0x10000) == 0) {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    FUN_080f9a70(param_1);
    return in_lr;
  }
  if ((*(byte *)(DAT_080f953c + 0x26) < 2) &&
     (uVar2 = FUN_0801fb14(DAT_080f9540,param_1 + 0x54), 0x8000 < uVar2)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar4 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f9544);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_080f9576:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_080f963a;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    iVar3 = FUN_0802adac(0,param_1,DAT_080f9610);
    *(int *)(param_1 + 0x2c) = iVar3;
    if (iVar3 == 0) goto LAB_080f963a;
    FUN_08005784(param_1 + 0x74,DAT_080f9614);
    goto LAB_080f9576;
  }
  iVar3 = FUN_0802b3e4();
  if (iVar3 == 0) {
    FUN_0801cfc8(param_1,CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)),
                 (short)*(char *)(param_1 + 0x71),*(char *)(param_1 + 0x72) + 1);
    FUN_0801cff0(param_1);
    uVar2 = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70));
    iVar3 = (int)*(char *)(param_1 + 0x71);
    FUN_08005784(param_1 + 0x74,
                 *(int *)(iVar3 * 4 +
                         *(int *)((uint)*(ushort *)((uVar2 + DAT_080f9620) * 2 + DAT_080f961c) * 4 +
                                 DAT_080f9618)) +
                 (uint)*(byte *)(*(int *)(uVar2 * 4 +
                                          *(int *)(((int)(-*(uint *)(param_1 + 0x2c) |
                                                         *(uint *)(param_1 + 0x2c)) >> 0x1f & 4U) +
                                                  DAT_080f9624) + DAT_080f9628) + iVar3) * 0x18);
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_08005784(param_1 + 0x74,DAT_080f9650);
LAB_080f963a:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080f9654));
  return in_lr;
}


