// undefined FUN_080bef88(void)
// entry 0x80bef88


undefined4 FUN_080bef88(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080befb8));
  if (cVar1 == '\0') {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080befbc));
  }
  return in_lr;
}


