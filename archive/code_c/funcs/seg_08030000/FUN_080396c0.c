// undefined FUN_080396c0(void)
// entry 0x80396c0


undefined8 FUN_080396c0(int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_08039710;
  if (param_2 == '\0') {
    iVar1 = 0x260;
  }
  uVar3 = 0;
  uVar2 = 0;
  do {
    if (((*(ushort *)(param_1 + 0x1d0 + uVar2 * 2) & *(ushort *)(param_1 + iVar1)) != 0) &&
       ((*(ushort *)(param_1 + 0x1d0 + (uVar2 + 1) * 2) & *(ushort *)(param_1 + iVar1)) == 0)) {
      uVar3 = uVar3 + 1 & 0xff;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x20);
  return CONCAT44(in_lr,uVar3);
}


