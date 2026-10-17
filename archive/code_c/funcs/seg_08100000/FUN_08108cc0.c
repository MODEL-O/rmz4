// undefined FUN_08108cc0(void)
// entry 0x8108cc0


undefined4 FUN_08108cc0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_08108ed4(*(undefined1 *)(param_1 + 0x10));
  iVar1 = FUN_080d57ac(0,*(undefined1 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    FUN_08002b10(0x24);
  }
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08108cf4);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


