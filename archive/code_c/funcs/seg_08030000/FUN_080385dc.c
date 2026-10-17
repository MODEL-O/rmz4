// undefined FUN_080385dc(void)
// entry 0x80385dc


undefined8 FUN_080385dc(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)((uint)*(byte *)(param_1 + 0x174) * 8 + DAT_08038618 + 6);
  iVar4 = *(int *)(param_1 + 0x58);
  if ((*(ushort *)(DAT_0803861c + 0x1d0) & 0x7f) == 2) {
    iVar2 = FUN_08007b84(param_1 + 0x54);
  }
  else {
    iVar2 = *(int *)(DAT_0803861c + DAT_08038630);
  }
  if (iVar2 < iVar4 - ((int)((uint)uVar1 << 0x10) >> 0x11)) {
    uVar3 = 0x380;
  }
  else {
    uVar3 = 0x700;
  }
  return CONCAT44(in_lr,uVar3);
}


