// undefined FUN_080ebb8c(void)
// entry 0x80ebb8c


undefined4 FUN_080ebb8c(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  pcVar5 = (char *)(param_1 + 0xbf);
  if ((*pcVar5 == '\0') &&
     (sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x3000),
     sVar1 == 0)) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined4 *)(param_1 + 0x30) = DAT_080ebbfc;
    *(undefined2 *)(param_1 + 0x26) = 0xf;
    *pcVar5 = *pcVar5 + '\x01';
  }
  if (((*(uint *)(param_1 + 0x8c) & 0x200) == 0) &&
     (iVar3 = *(int *)(param_1 + 0xc0) + -1, *(int *)(param_1 + 0xc0) = iVar3, iVar3 != 0)) {
    FUN_0801cff0(param_1);
    iVar3 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
    if (DAT_080ebc64 < iVar3) {
      *(int *)(param_1 + 0x60) = iVar3 + -4;
    }
    uVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_080ebc68);
    if ((uVar2 & 0xf) == 0xf) {
      uVar2 = 0;
    }
    if ((uVar2 & 0x8000) != 0) {
      uVar2 = 0;
    }
    if (uVar2 == 0) {
      return in_lr;
    }
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ebc6c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_080ebc70(param_1);
    return in_lr;
  }
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ebc00);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
  FUN_080ebc70(param_1);
  return in_lr;
}


