// undefined FUN_0804babc(void)
// entry 0x804babc


undefined4 FUN_0804babc(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
    FUN_08005760(param_1 + 0x74,DAT_0804bb20,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_0804bb24;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  iVar2 = FUN_08008534(iVar2,*(undefined4 *)(param_1 + 0x58));
  iVar5 = *(int *)(param_1 + 0x58) - iVar2;
  if (iVar5 < 0) {
    if (iVar2 - *(int *)(param_1 + 0x58) <= DAT_0804bb5c) goto LAB_0804bb34;
  }
  else if (iVar5 <= DAT_0804bb28) {
LAB_0804bb34:
    *(int *)(param_1 + 0x58) = iVar2;
    uVar3 = FUN_0801fb14(DAT_0804bb60,param_1 + 0x54);
    if ((uVar3 < 0x4001) && ((*(uint *)(param_1 + 0x8c) & 0x1000) == 0)) {
      return in_lr;
    }
    if ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0) {
      FUN_08002b10(0x2b);
    }
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804bbb4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_0804bbb8(param_1);
    return in_lr;
  }
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804bb80);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
  FUN_0804bbb8(param_1);
  return in_lr;
}


