// undefined FUN_080df71c(void)
// entry 0x80df71c


undefined4 FUN_080df71c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar3 = param_2 * 0x1000000 + 0xfe000000U >> 0x18;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar3 = uVar3 + 4 & 0xff;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x54) + *(int *)(uVar3 * 8 + DAT_080df784) * 0x100;
    iVar2 = DAT_080df784;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54) + *(int *)(uVar3 * 8 + DAT_080df750) * -0x100;
    iVar2 = DAT_080df750;
  }
  iVar4 = uVar3 * 8;
  *(int *)(param_1 + 0x54) = iVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(iVar4 + iVar2 + 4) * 0x100;
  if (*(char *)(param_1 + 0x74) == '\0') {
    iVar2 = -*(int *)(iVar4 + DAT_080df7a8);
    iVar1 = DAT_080df7a8;
  }
  else {
    iVar2 = *(int *)(iVar4 + DAT_080df788);
    iVar1 = DAT_080df788;
  }
  *(int *)(param_1 + 0x5c) = iVar2 << 8;
  *(int *)(param_1 + 0x60) = *(int *)(iVar4 + iVar1 + 4) << 8;
  return in_lr;
}


