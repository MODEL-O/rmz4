// undefined FUN_08009370(void)
// entry 0x8009370


undefined4 FUN_08009370(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *local_24;
  
  iVar4 = 0;
  if (*(byte *)(0x02000ab0 + 0x1d2) != 0) {
    piVar6 = (int *)(0x02000ab0 + 0x1e0);
    local_24 = (int *)(0x02000ab0 + 0x1dc);
    iVar5 = 0;
    iVar3 = 0x02000ab0;
    do {
      uVar2 = (uint)*(ushort *)(iVar3 + 0x1d8) * 2;
      uVar1 = (param_1 - *local_24) + (uint)*(ushort *)(iVar3 + 0x1d8);
      if ((uVar1 <= uVar2 && uVar2 - uVar1 != 0) &&
         (uVar2 = (uint)*(ushort *)(iVar3 + 0x1da) * 2,
         uVar1 = ((param_2 - *piVar6) + (uint)*(ushort *)(iVar3 + 0x1da)) - 1,
         uVar1 <= uVar2 && uVar2 - uVar1 != 0)) {
        (*(int *)0x02000028) = *local_24 - *(int *)(iVar5 + 0x02000c94);
        uVar1 = (uint)*(ushort *)(iVar3 + 0x1d6);
        goto LAB_0800940e;
      }
      piVar6 = piVar6 + 6;
      local_24 = local_24 + 6;
      iVar3 = iVar3 + 0x18;
      iVar5 = iVar5 + 0x18;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(byte *)(0x02000ab0 + 0x1d2));
  }
  uVar1 = 0;
LAB_0800940e:
  return uVar1;
}


