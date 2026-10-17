// undefined FUN_080b10a8(void)
// entry 0x80b10a8


undefined4 FUN_080b10a8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc2) == -1) {
    FUN_080d0c88(2,param_1 + 0x54);
    iVar2 = *(int *)(param_1 + 0x2c);
    if ((iVar2 != 0) && (*(byte *)(iVar2 + 0xc) < 2)) {
      *(undefined1 *)(iVar2 + 0xc2) = 0xff;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
  }
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b10f0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


