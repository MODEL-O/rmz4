// undefined FUN_0801e0d0(void)
// entry 0x801e0d0


undefined4 FUN_0801e0d0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_lr;
  
  iVar6 = DAT_0801e170;
  *(undefined4 *)(DAT_0801e170 + DAT_0801e174) = param_1;
  *(undefined4 *)(iVar6 + 0x460) = param_2;
  iVar2 = *(int *)(iVar6 + 0x458);
  piVar7 = (int *)*(int *)(iVar6 + DAT_0801e178);
  while (piVar1 = piVar7, piVar1 != (int *)0x0) {
    piVar7 = (int *)*piVar1;
    iVar6 = piVar1[1];
    if (((iVar6 != 0) && ((*(ushort *)((int)piVar1 + 10) & 0x10) == 0)) &&
       ((iVar4 = (*(int *)(*(short *)(piVar1 + 2) * 0xc + iVar2 + 4) + -1) * 0x100,
        iVar4 < *(int *)(DAT_0801e170 + DAT_0801e174) ||
        (iVar3 = *(int *)(DAT_0801e170 + DAT_0801e174 + 4), iVar4 - iVar3 != 0 && iVar3 <= iVar4))))
    {
      if ((*(ushort *)((int)piVar1 + 10) & 5) != 0) {
        puVar5 = (uint *)(((int)((uint)*(ushort *)(piVar1 + 2) << 0x10) >> 0x15) * 4 + DAT_0801e170)
        ;
        *puVar5 = *puVar5 | 1 << (*(ushort *)(piVar1 + 2) & 0x1f);
      }
      FUN_0801df34(iVar6);
      FUN_0801e204(piVar1);
    }
  }
  return in_lr;
}


