// undefined FUN_0802e124(void)
// entry 0x802e124


undefined8 FUN_0802e124(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar6 = 0;
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    iVar2 = DAT_0802e1c0 + 0x1e8;
    do {
      uVar4 = (uint)*(byte *)(param_1 + 0x188 + uVar6);
      iVar3 = uVar4 * 0x18;
      iVar5 = iVar3 + DAT_0802e1c0;
      if (((param_2 - *(int *)(iVar3 + DAT_0802e1c0 + 0x1e4)) + (uint)*(ushort *)(iVar5 + 0x1d8) <
           (uint)*(ushort *)(iVar5 + 0x1d8) << 1) &&
         ((param_3 - *(int *)(iVar3 + iVar2)) + (uint)*(ushort *)(iVar5 + 0x1da) <
          (uint)*(ushort *)(iVar5 + 0x1da) << 1)) {
        FUN_0802e63c(param_1,uVar4);
        uVar1 = *(ushort *)(iVar5 + 0x1d6);
        if ((uVar1 & 0xf) != 0xf) {
          uVar4 = (uint)*(ushort *)(iVar5 + 0x1d6);
          goto LAB_0802e1e0;
        }
        uVar4 = DAT_0802e1c4;
        if ((uVar1 & 0x8000) != 0) goto LAB_0802e1e0;
      }
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < *(byte *)(param_1 + 0x1b8));
  }
  uVar4 = 0;
LAB_0802e1e0:
  return CONCAT44(in_lr,uVar4);
}


