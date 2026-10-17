// undefined FUN_0802e1f0(void)
// entry 0x802e1f0


undefined8 FUN_0802e1f0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = 0;
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    do {
      iVar2 = (uint)*(byte *)(param_1 + 0x188 + uVar5) * 0x18;
      iVar3 = iVar2 + DAT_0802e2a0;
      if (((((param_2 - *(int *)(iVar2 + DAT_0802e2a4)) + (uint)*(ushort *)(iVar3 + 0x1d8) <
             (uint)*(ushort *)(iVar3 + 0x1d8) << 1) &&
           (iVar4 = *(int *)(iVar2 + DAT_0802e2a0 + 0x1e0),
           (param_3 - iVar4) + (uint)*(ushort *)(iVar3 + 0x1da) <
           (uint)*(ushort *)(iVar3 + 0x1da) << 1)) && ((*(ushort *)(iVar3 + 0x1d6) & 0x200) == 0))
         && ((((*(ushort *)(iVar3 + 0x1d6) & 0xf) != 0xf &&
              (*(int *)(iVar2 + DAT_0802e2a4) == *(int *)(iVar2 + DAT_0802e2a0 + 0x1e4))) &&
             (iVar4 != *(int *)(iVar2 + DAT_0802e2a0 + 0x1e8))))) {
        uVar1 = 1;
        goto LAB_0802e2be;
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < *(byte *)(param_1 + 0x1b8));
  }
  uVar1 = 0;
LAB_0802e2be:
  return CONCAT44(in_lr,uVar1);
}


