// undefined FUN_080e0ac4(void)
// entry 0x80e0ac4


undefined4 FUN_080e0ac4(int param_1)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = *(byte *)(param_1 + 0x11);
    if (2 < bVar1) {
      bVar1 = 2;
    }
    *(byte *)(param_1 + 0xd) = bVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080e0b1c));
  FUN_0801cff0(param_1);
  sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 != 0) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e0b20);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  }
  return in_lr;
}


