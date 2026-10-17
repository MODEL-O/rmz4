// undefined FUN_080cbca4(void)
// entry 0x80cbca4


undefined4 FUN_080cbca4(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(*(int *)(param_1 + 0x28) + 200) == '\0') || (*(char *)(param_1 + 0xd) == '\0')) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080cbcdc));
  }
  else {
    FUN_08005784(param_1 + 0x74,DAT_080cbcc4);
  }
  return in_lr;
}


