// undefined FUN_080ecac0(void)
// entry 0x80ecac0


undefined4 FUN_080ecac0(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xc) == '\x04') {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ecae8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080ecbd8(param_1);
  }
  else {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080ecb00));
  }
  return in_lr;
}


