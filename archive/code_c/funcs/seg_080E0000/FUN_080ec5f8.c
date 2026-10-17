// undefined FUN_080ec5f8(void)
// entry 0x80ec5f8


undefined4 FUN_080ec5f8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xc) == '\x04') {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ec620);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080ec920(param_1);
  }
  else {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080ec638));
  }
  return in_lr;
}


