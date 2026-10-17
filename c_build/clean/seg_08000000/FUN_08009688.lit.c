// undefined FUN_08009688(void)
// entry 0x8009688


undefined4 FUN_08009688(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  if (param_3 < param_2) {
    param_3 = FUN_08009420(param_1,param_3);
  }
  else {
    iVar1 = param_3 - param_2 >> 1;
    uVar4 = (uint)*(byte *)(0x02000ab0 + 0x1d2);
    if (uVar4 != 0) {
      piVar7 = (int *)(0x02000ab0 + 0x1e0);
      piVar5 = (int *)(0x02000ab0 + 0x1dc);
      iVar8 = 0x02000ab0;
      do {
        uVar6 = (uint)*(ushort *)(iVar8 + 0x1d8) * 2;
        uVar2 = (param_1 - *piVar5) + (uint)*(ushort *)(iVar8 + 0x1d8);
        if (uVar2 <= uVar6 && uVar6 - uVar2 != 0) {
          iVar3 = (uint)*(ushort *)(iVar8 + 0x1da) + iVar1;
          uVar6 = iVar3 * 2;
          uVar2 = ((param_2 + iVar1) - *piVar7) + iVar3;
          if ((uVar2 <= uVar6 && uVar6 - uVar2 != 0) &&
             (iVar3 = *piVar7 - (uint)*(ushort *)(iVar8 + 0x1da), iVar3 < param_3)) {
            param_3 = iVar3;
          }
        }
        piVar7 = piVar7 + 6;
        piVar5 = piVar5 + 6;
        iVar8 = iVar8 + 0x18;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return param_3;
}


