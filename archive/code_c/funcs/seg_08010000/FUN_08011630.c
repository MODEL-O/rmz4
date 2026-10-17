// undefined FUN_08011630(void)
// entry 0x8011630


undefined4 FUN_08011630(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_08011690;
  uVar3 = *(uint *)(DAT_08011694 + DAT_08011698) * DAT_0801169c + DAT_080116a0;
  *(uint *)(DAT_08011694 + DAT_08011698) = uVar3;
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)((uVar3 >> 0x10 & 0x1f) * 2 + iVar1);
  piVar2 = DAT_080116a4;
  FUN_08001ea4(*DAT_080116a4 + DAT_080116a8,0x4000);
  FUN_08002208(*piVar2 + DAT_080116ac,0);
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(char *)(DAT_080116b0 + DAT_080116b4) = *(char *)(DAT_080116b0 + DAT_080116b4) + '\x01';
  return in_lr;
}


