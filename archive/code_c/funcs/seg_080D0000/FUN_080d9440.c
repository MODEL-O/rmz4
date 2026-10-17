// undefined FUN_080d9440(void)
// entry 0x80d9440


undefined4 FUN_080d9440(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(char *)(*DAT_080d945c + 0xf8) == '\x02') {
    uVar1 = 1;
  }
  else {
    if (*(char *)(*DAT_080d945c + 0xf9) != '\x02') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d948c);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
      return in_lr;
    }
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 0x22) = uVar1;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080d94ac));
  return in_lr;
}


