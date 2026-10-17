// undefined FUN_0806bf40(void)
// entry 0x806bf40


undefined4 FUN_0806bf40(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806bfa4);
    FUN_08005784(param_1 + 0x74,DAT_0806bfa8);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xd0)) {
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (iVar2 < *(int *)(param_1 + 0xd0)) goto LAB_0806bf8e;
  }
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xb8);
LAB_0806bf8e:
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar3 = DAT_0806bfac;
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x01') {
      if (*(char *)(param_1 + 0x71) < '\x02') {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 0x10;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    uVar3 = DAT_0806bfd8;
    if (cVar1 != -1) {
      return in_lr;
    }
  }
  FUN_0801cf00(param_1,uVar3);
  FUN_0801cff0(param_1);
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}


