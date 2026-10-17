// undefined FUN_080be338(void)
// entry 0x80be338


undefined4 FUN_080be338(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080be368));
  if (cVar1 == '\0') {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080be36c));
  }
  return in_lr;
}


