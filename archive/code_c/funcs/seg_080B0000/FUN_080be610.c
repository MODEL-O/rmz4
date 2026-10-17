// undefined FUN_080be610(void)
// entry 0x80be610


undefined4 FUN_080be610(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080be640));
  if (cVar1 == '\0') {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080be644));
  }
  return in_lr;
}


