// undefined FUN_080922b0(void)
// entry 0x80922b0


undefined4 FUN_080922b0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = FUN_080921ac();
  if (cVar1 == '\0') {
    FUN_08092200(param_1);
    cVar1 = FUN_080921fc(param_1);
    if (cVar1 == '\0') {
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080922f8));
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080922fc));
    }
  }
  return in_lr;
}


