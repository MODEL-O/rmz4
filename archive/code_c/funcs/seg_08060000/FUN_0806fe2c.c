// undefined FUN_0806fe2c(void)
// entry 0x806fe2c


undefined4 FUN_0806fe2c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(char *)(*(int *)(param_1 + 0xbc) + 0xd) != '\0') ||
       (*(char *)(*(int *)(param_1 + 0xc0) + 0xd) != '\0')) {
      FUN_0801cff0(param_1);
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0806fe74);
    *(undefined1 *)(*(int *)(param_1 + 0xbc) + 0xbf) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0xbf) = 1;
    *(undefined4 *)(param_1 + 0x68) = 4;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
    *(undefined1 *)(param_1 + 0x13) = 0;
    FUN_08002b10(DAT_0806fe78);
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else {
    if ((*(char *)(param_1 + 0xe) != '\x01') || (*(char *)(param_1 + 0x73) != '\x03'))
    goto LAB_0806fea4;
    FUN_0801cf00(param_1,DAT_0806feec);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0806fea4:
  FUN_0801cff0(param_1);
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  iVar1 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar1;
  if ((0 < iVar1) && (*(int *)(param_1 + 0xb8) < iVar2)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((*(char *)(*(int *)(param_1 + 0xbc) + 0xbf) == '\0') &&
     (*(char *)(*(int *)(param_1 + 0xc0) + 0xbf) == '\0')) {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


