// undefined FUN_0809b8cc(void)
// entry 0x809b8cc


undefined4 FUN_0809b8cc(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_0809b900);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xb5) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809b92c);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
      FUN_0809ba14(param_1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


