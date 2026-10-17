// undefined FUN_080e7dfc(void)
// entry 0x80e7dfc


undefined4 FUN_080e7dfc(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cd28();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e7ea0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  if (*(char *)(param_1 + 0x11) == '\0') {
    if ((((byte)(*(char *)(param_1 + 0x10) - 1U) < 2) && ((bVar1 & 0x10) == 0)) &&
       (bVar1 = *(char *)(param_1 + 0x10) + 1, *(byte *)(param_1 + 0x10) = bVar1, 2 < bVar1)) {
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
    if (*(char *)(param_1 + 0x11) == '\0') {
      FUN_080e7d70(param_1 + 0x54,(uint)*(byte *)(param_1 + 0x10) << 8 | 1,
                   *(byte *)(param_1 + 10) >> 4 & 1);
      *(undefined1 *)(param_1 + 0x25) = 0x18;
    }
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080e7ea4));
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 1;
  FUN_080e7ea8(param_1);
  return in_lr;
}


