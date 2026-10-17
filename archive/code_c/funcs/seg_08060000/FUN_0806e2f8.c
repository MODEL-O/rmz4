// undefined FUN_0806e2f8(void)
// entry 0x806e2f8


undefined4 FUN_0806e2f8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_0806e3ac);
    *(undefined4 *)(param_1 + 100) = 0x11e;
    *(uint *)(param_1 + 0x68) = (uint)*(byte *)(param_1 + 0xc1) * -2 + 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  iVar1 = FUN_08129050(*(undefined4 *)(param_1 + 100),0x16);
  if (iVar1 == 0) {
    FUN_08002b10(DAT_0806e3b0);
    FUN_0801cf00(param_1,DAT_0806e3b4);
    local_10 = *(undefined4 *)(param_1 + 0x54);
    local_c = *(undefined4 *)(param_1 + 0x58);
    iVar1 = FUN_08128fb8(0x11e - *(int *)(param_1 + 100),0x16);
    FUN_080bd94c(param_1,&local_10,0,
                 *(int *)(param_1 + 0x68) * iVar1 * 0x10 + 0x80 + (uint)*(byte *)(param_1 + 0xc0) &
                 0xff);
    local_10 = *(undefined4 *)(param_1 + 0x54);
    local_c = *(undefined4 *)(param_1 + 0x58);
    FUN_080e2064(&local_10,1,0);
  }
  FUN_0801cff0(param_1);
  iVar1 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar1;
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0xe) = 4;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


