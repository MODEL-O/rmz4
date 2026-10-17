// undefined FUN_0801f748(void)
// entry 0x801f748


undefined8 FUN_0801f748(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar2 = DAT_0801f7d8;
  iVar4 = *(int *)(param_1 + 0x20);
  if ((iVar4 != 0) && (((*(uint *)(iVar4 + 0x8c) & 0x200) != 0 || (*(short *)(iVar4 + 0xa4) == 0))))
  {
    *(ushort *)(DAT_0801f7d8 + 8) = (ushort)DAT_0801f7dc & *(ushort *)(DAT_0801f7d8 + 8) | 8;
  }
  uVar1 = *(ushort *)(iVar2 + 8);
  if (((uVar1 & 1) == 0) && ((uVar1 & 8) != 0)) {
    *DAT_0801f7e0 = *DAT_0801f7e0 | 0x80;
    *(uint *)(DAT_0801f7e4 + 0x10) = uVar1 & 1;
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != DAT_0801f7e8) && (iVar4 != DAT_0801f7ec)) &&
       (iVar4 != *(int *)(*(int *)(DAT_0801f7f0 + 0x40) + 0x78))) {
      if ((*(uint *)(iVar2 + 0x154) == 0) || ((*(uint *)(iVar2 + 0x154) & 1) != 0)) {
        FUN_080275f0(DAT_0801f800,DAT_0801f7e8);
      }
      else {
        FUN_080275f0(iVar2 + 0x10);
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return CONCAT44(in_lr,uVar3);
}


