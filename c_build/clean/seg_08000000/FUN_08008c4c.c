// undefined FUN_08008c4c(void)
// entry 0x8008c4c


undefined4 FUN_08008c4c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  iVar1 = DAT_08008cdc;
  if (*(short *)(DAT_08008cdc + 0x1d0) == 4) {
    param_2 = FUN_08129050(DAT_08008ce0 + param_2,0x3c000);
    param_2 = param_2 + 0xf000;
  }
  param_1 = param_1 + 1;
  if (param_1 < (int)(uint)*(byte *)(iVar1 + 0x1d2)) {
    iVar2 = param_1 * 0x18;
    piVar6 = (int *)(iVar2 + 0x1e0 + iVar1);
    piVar5 = (int *)(iVar2 + 0x1dc + iVar1);
    iVar2 = iVar2 + iVar1;
    do {
      uVar4 = (uint)*(ushort *)(iVar2 + 0x1d8) * 2;
      uVar3 = (param_2 - *piVar5) + (uint)*(ushort *)(iVar2 + 0x1d8);
      if ((uVar3 <= uVar4 && uVar4 - uVar3 != 0) &&
         (uVar4 = (uint)*(ushort *)(iVar2 + 0x1da) * 2,
         uVar3 = ((param_3 - *piVar6) + (uint)*(ushort *)(iVar2 + 0x1da)) - 1,
         uVar3 <= uVar4 && uVar4 - uVar3 != 0)) goto LAB_08008cf4;
      piVar6 = piVar6 + 6;
      piVar5 = piVar5 + 6;
      iVar2 = iVar2 + 0x18;
      param_1 = param_1 + 1;
    } while (param_1 < (int)(uint)*(byte *)(iVar1 + 0x1d2));
  }
  param_1 = -1;
LAB_08008cf4:
  return param_1;
}


