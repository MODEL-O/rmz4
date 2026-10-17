// undefined FUN_080e18ec(void)
// entry 0x80e18ec


undefined4 FUN_080e18ec(int param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_0801cf00(param_1,*(ushort *)(param_1 + 0x76) | 10);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  FUN_080e19e0(param_1);
  sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_080e193c);
  if (sVar1 != 0) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e1940);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


