// undefined FUN_080095e8(void)
// entry 0x80095e8


undefined8 FUN_080095e8(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 in_lr;
  
  while( true ) {
    iVar5 = 0;
    if (*(byte *)(DAT_08009664 + 0x1d2) == 0) break;
    piVar6 = (int *)(DAT_08009664 + 0x1e0);
    piVar2 = (int *)(DAT_08009664 + 0x1dc);
    iVar7 = DAT_08009664;
    while( true ) {
      uVar4 = (uint)*(ushort *)(iVar7 + 0x1d8);
      uVar1 = (param_1 - *piVar2) + uVar4;
      if (((uVar1 <= uVar4 * 2 && uVar4 * 2 - uVar1 != 0) &&
          (uVar3 = (uint)*(ushort *)(iVar7 + 0x1da) * 2,
          uVar1 = ((param_2 - *piVar6) + (uint)*(ushort *)(iVar7 + 0x1da)) - 1,
          uVar1 <= uVar3 && uVar3 - uVar1 != 0)) && ((*(ushort *)(iVar7 + 0x1d6) & 0x8400) == 0))
      break;
      piVar6 = piVar6 + 6;
      piVar2 = piVar2 + 6;
      iVar7 = iVar7 + 0x18;
      iVar5 = iVar5 + 1;
      if ((int)(uint)*(byte *)(DAT_08009664 + 0x1d2) <= iVar5) goto LAB_08009676;
    }
    param_1 = *piVar2 + uVar4;
  }
LAB_08009676:
  return CONCAT44(in_lr,param_1);
}


