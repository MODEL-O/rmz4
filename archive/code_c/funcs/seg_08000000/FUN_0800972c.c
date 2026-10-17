// undefined FUN_0800972c(void)
// entry 0x800972c


undefined8 FUN_0800972c(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 in_lr;
  
  if (param_2 < param_3) {
    param_3 = FUN_080094a8(param_1,param_3);
  }
  else {
    iVar1 = param_2 - param_3 >> 1;
    uVar4 = (uint)*(byte *)(DAT_080097e0 + 0x1d2);
    if (uVar4 != 0) {
      piVar7 = (int *)(DAT_080097e0 + 0x1e0);
      piVar5 = (int *)(DAT_080097e0 + 0x1dc);
      iVar8 = DAT_080097e0;
      do {
        uVar6 = (uint)*(ushort *)(iVar8 + 0x1d8) * 2;
        uVar2 = (param_1 - *piVar5) + (uint)*(ushort *)(iVar8 + 0x1d8);
        if (uVar2 <= uVar6 && uVar6 - uVar2 != 0) {
          iVar3 = (uint)*(ushort *)(iVar8 + 0x1da) + iVar1;
          if ((((uint)(((param_2 - iVar1) - *piVar7) + iVar3) <= (uint)(iVar3 * 2)) &&
              (iVar3 = *piVar7 + (uint)*(ushort *)(iVar8 + 0x1da) + 1, param_3 < iVar3)) &&
             ((*(ushort *)(iVar8 + 0x1d6) & 0x8400) == 0)) {
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
  return CONCAT44(in_lr,param_3);
}


