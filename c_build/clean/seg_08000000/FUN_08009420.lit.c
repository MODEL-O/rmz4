// undefined FUN_08009420(void)
// entry 0x8009420


undefined4 FUN_08009420(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
LAB_08009430:
  iVar4 = 0;
  if (*(byte *)(0x02000ab0 + 0x1d2) == 0) {
LAB_08009496:
    return param_2;
  }
  piVar3 = (int *)(0x02000ab0 + 0x1e0);
  piVar5 = (int *)(0x02000ab0 + 0x1dc);
  iVar6 = 0x02000ab0;
  do {
    uVar2 = (uint)*(ushort *)(iVar6 + 0x1d8) * 2;
    uVar1 = (param_1 - *piVar5) + (uint)*(ushort *)(iVar6 + 0x1d8);
    if (uVar1 <= uVar2 && uVar2 - uVar1 != 0) {
      uVar2 = (uint)*(ushort *)(iVar6 + 0x1da);
      uVar1 = ((param_2 - *piVar3) + uVar2) - 1;
      if (uVar1 <= uVar2 * 2 && uVar2 * 2 - uVar1 != 0) break;
    }
    piVar3 = piVar3 + 6;
    piVar5 = piVar5 + 6;
    iVar6 = iVar6 + 0x18;
    iVar4 = iVar4 + 1;
    if ((int)(uint)*(byte *)(0x02000ab0 + 0x1d2) <= iVar4) goto LAB_08009496;
  } while( true );
  param_2 = *piVar3 - uVar2;
  goto LAB_08009430;
}


