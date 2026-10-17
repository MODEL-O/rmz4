// undefined FUN_080cde30(void)
// entry 0x80cde30


undefined4 FUN_080cde30(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(*(int *)(param_1 + 0x28) + 0xd7) = 1;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080cde4c));
  return in_lr;
}


