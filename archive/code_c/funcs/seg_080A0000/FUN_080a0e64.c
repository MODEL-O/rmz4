// undefined FUN_080a0e64(void)
// entry 0x80a0e64


undefined4 FUN_080a0e64(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080a0ec4);
    FUN_0801cf00(param_1,DAT_080a0ec8);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    uVar4 = *(undefined4 *)(param_1 + 0x54);
    iVar2 = iVar2 + 1;
    sVar1 = FUN_08007c7c(uVar4,iVar2);
    if (sVar1 == 0) {
      iVar2 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar2;
      if (iVar2 < 0x701) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0x60) = 0x700;
      return in_lr;
    }
    uVar4 = FUN_08008534(uVar4,iVar2);
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xb4) + -1;
  *(int *)(param_1 + 0xb4) = iVar2;
  if (iVar2 < 1) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a0f10);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_080a0f14(param_1);
  }
  return in_lr;
}


