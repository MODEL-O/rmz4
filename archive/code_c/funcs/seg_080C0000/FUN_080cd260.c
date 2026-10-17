// undefined FUN_080cd260(void)
// entry 0x80cd260


undefined4 FUN_080cd260(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  undefined4 local_10 [2];
  
  local_10[0] = *DAT_080cd2d4;
  local_10[1] = DAT_080cd2d4[1];
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    FUN_0801cf00(param_1,*(undefined2 *)(local_10 + *(byte *)(param_1 + 0x11)));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cd2d8);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  }
  return in_lr;
}


