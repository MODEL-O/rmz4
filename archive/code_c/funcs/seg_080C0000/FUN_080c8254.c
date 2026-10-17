// undefined FUN_080c8254(void)
// entry 0x80c8254


undefined4 FUN_080c8254(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(uint *)(param_1 + 0x68) =
         ((uint)*(byte *)(*(int *)(param_1 + 0x28) + 0xb5) - (*(byte *)(param_1 + 0x11) + 2)) * 4 +
         0x80;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  FUN_0801cff0(param_1);
  iVar1 = *(int *)(param_1 + 0x68) + -1;
  *(int *)(param_1 + 0x68) = iVar1;
  if (iVar1 == 0) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c82a4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080c82a8(param_1);
  }
  return in_lr;
}


