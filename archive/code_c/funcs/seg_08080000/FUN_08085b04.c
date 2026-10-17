// undefined FUN_08085b04(void)
// entry 0x8085b04


undefined4 FUN_08085b04(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar3 = DAT_08085b7c;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = DAT_08085b7c;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0x180;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    uVar3 = DAT_08085b80;
    *(undefined4 *)(param_1 + 100) = DAT_08085b80;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0xa00;
    }
    *(undefined4 *)(param_1 + 100) = uVar3;
    FUN_08005784(param_1 + 0x74,DAT_08085b84);
    FUN_0801cf00(param_1,DAT_08085b88);
    *(undefined1 *)(param_1 + 0x12) = 0x5a;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  FUN_0801cff0(param_1);
  iVar4 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb8);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (-1 < iVar4) goto LAB_08085baa;
  }
  else if (iVar4 < 0) goto LAB_08085baa;
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  if (0xa000 < iVar4) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    return in_lr;
  }
LAB_08085baa:
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == '\0') ||
     (sVar2 = FUN_08007c7c(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100),
                           *(int *)(param_1 + 0x58) + DAT_08085bf8), sVar2 != 0)) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  iVar4 = FUN_08008aa4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
  FUN_08085418(param_1,*(int *)(param_1 + 0x5c) + iVar4,0x800);
  return in_lr;
}


