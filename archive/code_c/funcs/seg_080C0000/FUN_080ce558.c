// undefined FUN_080ce558(void)
// entry 0x80ce558


undefined4 FUN_080ce558(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0xbc);
  bVar1 = *(byte *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080ce600);
    FUN_0801cf00(param_1,DAT_080ce604);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  pcVar4 = (char *)(param_1 + 0xb5);
  if (*pcVar4 != '\0') {
    *pcVar4 = *pcVar4 + -1;
  }
  iVar2 = DAT_080ce608;
  iVar3 = *(short *)((bVar1 + 0x40 & 0xff) * 2 + DAT_080ce608) * iVar5;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar3 >> 8);
  iVar2 = iVar5 * *(short *)((uint)bVar1 * 2 + iVar2);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar2 >> 8);
  *(int *)(param_1 + 0xbc) = iVar5;
  *(byte *)(param_1 + 0xb4) = bVar1;
  if (*pcVar4 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


