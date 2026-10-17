// undefined FUN_080ce4a8(void)
// entry 0x80ce4a8


undefined4 FUN_080ce4a8(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0xbc);
  uVar1 = *(undefined1 *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080ce548);
    if (*(char *)(param_1 + 0xb6) != '\0') {
      FUN_0801cf00(param_1,DAT_080ce54c);
      *(char *)(param_1 + 0xb6) = '\0';
    }
    iVar5 = 0x80;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  uVar2 = FUN_0810d410(param_1 + 0x54,*DAT_080ce550 + 0x54,uVar1,2);
  iVar4 = DAT_080ce554;
  iVar3 = *(short *)((uVar2 * 0x1000000 + 0x40000000 >> 0x17) + DAT_080ce554) * iVar5;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar3 >> 8);
  iVar4 = *(short *)((uVar2 & 0xff) * 2 + iVar4) * iVar5;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar4 >> 8);
  *(int *)(param_1 + 0xbc) = iVar5;
  *(char *)(param_1 + 0xb4) = (char)uVar2;
  return in_lr;
}


