// undefined FUN_080e176c(void)
// entry 0x80e176c


undefined4 FUN_080e176c(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x74) == '\0') {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_080e17a4));
  FUN_0801cff0(param_1);
  return in_lr;
}


