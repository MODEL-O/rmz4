// undefined FUN_0802e2d0(void)
// entry 0x802e2d0


undefined8 FUN_0802e2d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = 0;
  if (*(byte *)(param_1 + 0x1b8) != 0) {
    do {
      iVar3 = (uint)*(byte *)(param_1 + 0x188 + uVar2) * 0x18;
      iVar1 = iVar3 + DAT_0802e350;
      if (((param_2 - *(int *)(iVar3 + DAT_0802e350 + 0x1dc)) + (uint)*(ushort *)(iVar1 + 0x1d8) <
           (uint)*(ushort *)(iVar1 + 0x1d8) << 1) &&
         ((param_3 - *(int *)(iVar3 + DAT_0802e350 + 0x1e0)) + (uint)*(ushort *)(iVar1 + 0x1da) <
          (uint)*(ushort *)(iVar1 + 0x1da) << 1)) {
        uVar2 = (uint)*(ushort *)(iVar1 + 0x1d6);
        goto LAB_0802e360;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < *(byte *)(param_1 + 0x1b8));
  }
  uVar2 = 0;
LAB_0802e360:
  return CONCAT44(in_lr,uVar2);
}


