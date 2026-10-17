// undefined FUN_08127df0(void)
// entry 0x8127df0


undefined4 FUN_08127df0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = (int *)*DAT_08127e1c;
  iVar2 = *piVar1;
  if (iVar2 != DAT_08127e20) {
    *DAT_08127e24 = 0xb600;
    *(undefined1 *)(piVar1 + 1) = 0;
    *piVar1 = iVar2 + -10;
  }
  return in_lr;
}


