// undefined FUN_080cbb1c(void)
// entry 0x80cbb1c


undefined4 FUN_080cbb1c(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 200) != '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080cbb4c);
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080cbb50));
  return in_lr;
}


