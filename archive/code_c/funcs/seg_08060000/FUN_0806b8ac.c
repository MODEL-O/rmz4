// undefined FUN_0806b8ac(void)
// entry 0x806b8ac


undefined4 FUN_0806b8ac(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806b8d4);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = DAT_0806b924;
      uVar1 = 0xffffffc0;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x200;
      uVar1 = 0x40;
    }
    *(undefined4 *)(param_1 + 100) = uVar1;
    FUN_08005784(param_1 + 0x74,DAT_0806b928);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar2 = *(int *)(param_1 + 0x5c);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
    *(int *)(param_1 + 0x5c) = iVar2 - *(int *)(param_1 + 100);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


