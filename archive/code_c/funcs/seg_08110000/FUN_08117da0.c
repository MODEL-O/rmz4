// undefined FUN_08117da0(void)
// entry 0x8117da0


undefined4 FUN_08117da0(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + DAT_08117de4);
  *pcVar1 = '\0';
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + DAT_08117dec) * 4 + DAT_08117de8));
  FUN_080025d8(0x12);
  if ((*pcVar1 == '\0') && ((*(ushort *)(DAT_08117df0 + 4) & 8) != 0)) {
    *(undefined1 *)(param_1 + 1) = 3;
    *(undefined1 *)(param_1 + 2) = 3;
  }
  return in_lr;
}


