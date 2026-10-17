// undefined FUN_080c2be8(void)
// entry 0x80c2be8


undefined4 FUN_080c2be8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  undefined4 local_14 [2];
  
  local_14[0] = *DAT_080c2c38;
  local_14[1] = DAT_080c2c38[1];
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,*(undefined2 *)(local_14 + *(byte *)(param_1 + 0x11)));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0xb6) == '\0') {
    FUN_0801cff0(param_1);
    if (*(char *)(param_1 + 0xb4) != '\0') {
      *(char *)(param_1 + 0xb4) = '\0';
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c2c3c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080c2f2c(param_1);
  }
  return in_lr;
}


