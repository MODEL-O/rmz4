// undefined FUN_0806c13c(void)
// entry 0x806c13c


undefined4 FUN_0806c13c(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806c1a4);
    FUN_08002b10(0xd3);
    FUN_08005784(param_1 + 0x74,DAT_0806c1a8);
    iVar3 = *(int *)(param_1 + 0x5c);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    *(int *)(param_1 + 100) = iVar3 >> 2;
    *(undefined1 *)(param_1 + 0x12) = 4;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0xf) = 1;
    return in_lr;
  }
  if (*(char *)(param_1 + 0xf) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 200) + 0x2000) {
      *(undefined1 *)(param_1 + 0xd) = 0x15;
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 10) & 0x10;
      return in_lr;
    }
  }
  else if (*(int *)(param_1 + 0xcc) + DAT_0806c1e0 < *(int *)(param_1 + 0x54)) {
    uVar2 = 0x15;
    goto LAB_0806c202;
  }
  uVar2 = 0x13;
LAB_0806c202:
  *(undefined1 *)(param_1 + 0xd) = uVar2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


