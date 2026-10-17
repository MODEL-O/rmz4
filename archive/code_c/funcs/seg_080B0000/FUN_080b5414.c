// undefined FUN_080b5414(void)
// entry 0x80b5414


undefined4 FUN_080b5414(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080b5468);
    *(undefined1 *)(param_1 + 0x12) = 10;
    *(undefined4 *)(param_1 + 0x68) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 != 0) {
      uVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      FUN_0801cf00(param_1,DAT_080b546c);
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_080b548e;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  cVar1 = '\0';
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
LAB_080b548e:
  *(char *)(param_1 + 0xe) = cVar1;
  return in_lr;
}


