// undefined FUN_0800989c(void)
// entry 0x800989c


undefined8 FUN_0800989c(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 in_lr;
  
  if (param_1 < param_3) {
    param_3 = FUN_080095e8(param_3);
  }
  else {
    iVar1 = param_1 - param_3 >> 1;
    uVar2 = (uint)*(byte *)(DAT_08009950 + 0x1d2);
    if (uVar2 != 0) {
      piVar7 = (int *)(DAT_08009950 + 0x1dc);
      piVar5 = (int *)(DAT_08009950 + 0x1e0);
      iVar8 = DAT_08009950;
      do {
        uVar6 = (uint)*(ushort *)(iVar8 + 0x1da) * 2;
        uVar3 = (param_2 - *piVar5) + (uint)*(ushort *)(iVar8 + 0x1da);
        if (uVar3 <= uVar6 && uVar6 - uVar3 != 0) {
          iVar4 = (uint)*(ushort *)(iVar8 + 0x1d8) + iVar1;
          uVar6 = iVar4 * 2;
          uVar3 = ((param_1 - iVar1) - *piVar7) + iVar4;
          if (((uVar3 <= uVar6 && uVar6 - uVar3 != 0) &&
              (iVar4 = *piVar7 + (uint)*(ushort *)(iVar8 + 0x1d8), param_3 < iVar4)) &&
             ((*(ushort *)(iVar8 + 0x1d6) & 0x8400) == 0)) {
            param_3 = iVar4;
          }
        }
        piVar7 = piVar7 + 6;
        piVar5 = piVar5 + 6;
        iVar8 = iVar8 + 0x18;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  return CONCAT44(in_lr,param_3);
}


