// undefined FUN_08039714(void)
// entry 0x8039714


undefined4 FUN_08039714(int param_1,char param_2)

{
  int iVar1;
  short sVar2;
  undefined4 in_lr;
  
  *(char *)(param_1 + 0xde) = param_2;
  if (param_2 == '\0') {
    *(undefined2 *)(param_1 + 0x25c) = 1;
    iVar1 = DAT_08039748;
    *(undefined2 *)(param_1 + DAT_08039748) = 0x200;
    *(undefined2 *)(param_1 + 0x260) = 2;
    sVar2 = 0x100;
    iVar1 = iVar1 + 4;
  }
  else {
    if (param_2 != '\x01') {
      return in_lr;
    }
    *(undefined2 *)(param_1 + 0x25c) = 1;
    *(undefined2 *)(param_1 + DAT_08039778) = 0x100;
    *(undefined2 *)(param_1 + 0x260) = 2;
    sVar2 = (short)DAT_0803977c + -0x62;
    iVar1 = DAT_0803977c;
  }
  *(short *)(param_1 + iVar1) = sVar2;
  return in_lr;
}


