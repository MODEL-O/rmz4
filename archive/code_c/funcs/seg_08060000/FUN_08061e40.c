// undefined FUN_08061e40(void)
// entry 0x8061e40


undefined4 FUN_08061e40(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08061e64);
    *(undefined4 *)(param_1 + 0x60) = DAT_08061e68;
    uVar1 = DAT_08061e6c;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar1 = 0x1c0;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    if (*(int *)(param_1 + 0xc0) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    if (*(short *)(param_1 + 0xca) != 0) {
      FUN_08002b5c(0x5d);
      *(undefined2 *)(param_1 + 0xca) = 0;
    }
    FUN_08002b10(DAT_08061f00);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    iVar4 = *(int *)(param_1 + 0xb8);
    if (iVar4 < iVar3) {
      uVar2 = *DAT_08061f04 * DAT_08061f08 + DAT_08061f0c;
      *DAT_08061f04 = uVar2 & 0x7fffffff;
      if (((uVar2 & 0x7fffffff) >> 0x10 & 1) == 0) {
        *(int *)(param_1 + 0x58) = iVar4;
        *(undefined1 *)(param_1 + 0xd) = 6;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
      else {
        FUN_0801cf00(param_1,DAT_08061f10);
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


