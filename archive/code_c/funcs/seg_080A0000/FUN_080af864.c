// undefined FUN_080af864(void)
// entry 0x80af864


undefined4 FUN_080af864(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*DAT_080af898 + 0x54) - *(int *)(param_1 + 0x54) >> 8;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar2 < 0x79) {
    iVar2 = *(int *)(*DAT_080af898 + 0x58) - *(int *)(param_1 + 0x58) >> 8;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < 0x51) {
      uVar1 = 1;
      goto LAB_080af8a2;
    }
  }
  uVar1 = 0;
LAB_080af8a2:
  *(undefined1 *)(param_1 + 0xb6) = uVar1;
  return in_lr;
}


