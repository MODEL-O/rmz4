// undefined FUN_08107aa8(void)
// entry 0x8107aa8


undefined4 FUN_08107aa8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_08107b18;
  if (*(char *)(param_1 + 0x10) == '\x02') {
    if (*(int *)(*(int *)(param_1 + 0x2c) + DAT_08107b18 + 0x68) == 0xff) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined1 *)(param_1 + 0xb4) = 0;
    }
    else if (*(char *)(param_1 + 0xb4) == '\0') {
      FUN_0801cc9c(param_1);
      *(char *)(param_1 + 0x22) = (char)*(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar1 + 0x68);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      FUN_0801cf00(param_1,0xf600);
      *(char *)(param_1 + 0xb4) = '\x01';
    }
  }
  else if (*(int *)(*(int *)(param_1 + 0x2c) + DAT_08107ad0 + 0x3c) != 0) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08107ad4));
  }
  if (*(int *)(*(int *)(param_1 + 0x2c) + DAT_08107b78 + 0x3c) == 3) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08107b7c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


