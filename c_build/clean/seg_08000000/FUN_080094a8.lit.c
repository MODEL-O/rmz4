// undefined FUN_080094a8(void)
// entry 0x80094a8


undefined4 FUN_080094a8(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
LAB_080094ba:
  iVar5 = 0;
  if (*(byte *)(0x02000ab0 + 0x1d2) == 0) {
LAB_08009532:
    return param_2;
  }
  piVar2 = (int *)(0x02000ab0 + 0x1e0);
  piVar6 = (int *)(0x02000ab0 + 0x1dc);
  iVar4 = 0x02000ab0;
  do {
    uVar3 = (uint)*(ushort *)(iVar4 + 0x1d8) * 2;
    uVar1 = (param_1 - *piVar6) + (uint)*(ushort *)(iVar4 + 0x1d8);
    if (uVar1 <= uVar3 && uVar3 - uVar1 != 0) {
      uVar3 = (uint)*(ushort *)(iVar4 + 0x1da);
      uVar1 = ((param_2 - *piVar2) + uVar3) - 1;
      if ((uVar1 <= uVar3 * 2 && uVar3 * 2 - uVar1 != 0) &&
         ((*(ushort *)(iVar4 + 0x1d6) & 0x8400) == 0)) break;
    }
    piVar2 = piVar2 + 6;
    piVar6 = piVar6 + 6;
    iVar4 = iVar4 + 0x18;
    iVar5 = iVar5 + 1;
    if ((int)(uint)*(byte *)(0x02000ab0 + 0x1d2) <= iVar5) goto LAB_08009532;
  } while( true );
  param_2 = *piVar2 + uVar3 + 1;
  goto LAB_080094ba;
}


