// undefined FUN_080cfb28(void)
// entry 0x80cfb28


undefined4 FUN_080cfb28(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_080025d8(0xc5);
  if (*(char *)(param_1 + 0xb4) == '\0') {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080cfb74));
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cfb58);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080cfc50(param_1);
  }
  return in_lr;
}


