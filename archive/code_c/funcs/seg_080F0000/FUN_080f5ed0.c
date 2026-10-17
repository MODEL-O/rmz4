// undefined FUN_080f5ed0(void)
// entry 0x80f5ed0


undefined4 FUN_080f5ed0(int param_1)

{
  ushort uVar1;
  int *piVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  undefined4 in_lr;
  
  piVar2 = DAT_080f5f24;
  iVar8 = *(int *)(param_1 + 0x58);
  if (0x4b000 < (uint)(*(int *)(*DAT_080f5f24 + 0x54) + DAT_080f5f28)) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f5f2c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_080f5df4(param_1);
  }
  if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
LAB_080f5f48:
    if (*(char *)(param_1 + 0xd) == '\x01') {
      uVar3 = 2;
      goto LAB_080f5f52;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x58) - *(int *)(*piVar2 + 0x58);
    if (iVar5 < 0) {
      if (DAT_080f5f44 < *(int *)(*piVar2 + 0x58) - *(int *)(param_1 + 0x58)) goto LAB_080f5f48;
    }
    else if (DAT_080f5f30 < iVar5) goto LAB_080f5f48;
    uVar3 = 1;
LAB_080f5f52:
    *(undefined1 *)(param_1 + 0xd) = uVar3;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080f5f98));
  if (iVar8 < *(int *)(param_1 + 0x58)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080f5f9c,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    uVar1 = *(ushort *)(param_1 + 0xb4);
    uVar6 = 0x174;
  }
  else {
    if (iVar8 <= *(int *)(param_1 + 0x58)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      FUN_08005760(param_1 + 0x74,DAT_080f6024,param_1 + 0x54,0);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      psVar7 = (short *)(param_1 + 0xb4);
      if (*psVar7 != 0) {
        FUN_08002b5c((int)*psVar7);
        *psVar7 = 0;
      }
      goto LAB_080f6016;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080f5fdc,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    uVar1 = *(ushort *)(param_1 + 0xb4);
    uVar6 = DAT_080f5fe0;
  }
  if (uVar1 != uVar6) {
    FUN_08002b10(uVar6);
    *(short *)(param_1 + 0xb4) = (short)uVar6;
  }
LAB_080f6016:
  FUN_0801cff0(param_1);
  return in_lr;
}


