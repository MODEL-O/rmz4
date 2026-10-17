// undefined FUN_080b2f80(void)
// entry 0x80b2f80


undefined4 FUN_080b2f80(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb6) == '\0') {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080b2fa0));
  }
  else {
    FUN_080b3730(param_1);
  }
  if ((*(int *)(param_1 + 0x2c) == 0) || (*(char *)(param_1 + 0xd) == '\x02')) {
    cVar1 = FUN_080b3804(param_1);
    if (cVar1 != '\0') {
      FUN_080e67ac(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
      *(undefined1 *)(param_1 + 0x13) = 0x1e;
    }
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


