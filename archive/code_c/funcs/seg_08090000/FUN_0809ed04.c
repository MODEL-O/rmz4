// undefined FUN_0809ed04(void)
// entry 0x809ed04


undefined4 FUN_0809ed04(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,0x5900);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x58) + 0x400;
  sVar1 = FUN_08007c7c(uVar3,iVar2);
  if (sVar1 != 0) {
    iVar2 = FUN_08008534(uVar3,iVar2);
    *(int *)(param_1 + 0x58) = iVar2 + DAT_0809ed70;
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


