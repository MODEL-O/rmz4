// undefined FUN_080a0bcc(void)
// entry 0x80a0bcc


undefined8 FUN_080a0bcc(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x54) + ((*(byte *)(param_1 + 10) >> 4 & 1) * 2 + -1) * 0x1400;
  iVar3 = *(int *)(param_1 + 0x58);
  sVar1 = FUN_08007c7c(iVar4,iVar3);
  if ((sVar1 == 0) || (iVar4 = FUN_08008534(iVar4,iVar3), iVar3 + DAT_080a0c0c <= iVar4)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}


