// undefined FUN_080e189c(void)
// entry 0x80e189c


undefined4 FUN_080e189c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_0801cf00(param_1,*(ushort *)(param_1 + 0x76) | 9);
    iVar1 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (iVar1 == *(int *)(param_1 + 0x58)) {
      *(undefined1 *)(param_1 + 0x12) = 0x14;
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  FUN_080e19e0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -0x40;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}


