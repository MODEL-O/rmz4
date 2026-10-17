// undefined FUN_0806c20c(void)
// entry 0x806c20c


undefined4 FUN_0806c20c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806c234);
    FUN_08002b10(199);
    uVar1 = DAT_0806c274;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar1 = 0x500;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ('\x01' < *(char *)(param_1 + 0x71)) {
      FUN_08005784(param_1 + 0x74,DAT_0806c278);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(param_1 + 200) + 0x1800;
      if (iVar2 <= iVar3) {
        return in_lr;
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0xcc) + DAT_0806c2a4;
      if (iVar3 <= iVar2) {
        return in_lr;
      }
    }
    *(int *)(param_1 + 0x54) = iVar2;
    *(undefined1 *)(param_1 + 0xf) = 2;
  }
  else {
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_0806c300) {
      FUN_0801cf00(param_1);
      FUN_0801cff0(param_1);
      FUN_08005784(param_1 + 0x74,DAT_0806c304);
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined1 *)(param_1 + 0xd) = 0x15;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


