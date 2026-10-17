// undefined FUN_080c56ec(void)
// entry 0x80c56ec


undefined4 FUN_080c56ec(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080c572c));
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c5714);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080c5e50(param_1);
  }
  return in_lr;
}


