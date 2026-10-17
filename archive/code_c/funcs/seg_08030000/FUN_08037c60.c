// undefined FUN_08037c60(void)
// entry 0x8037c60


undefined4 FUN_08037c60(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x144) < 2) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x144) * 4 + DAT_08037c90));
  }
  else {
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}


