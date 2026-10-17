// undefined FUN_0808db28(void)
// entry 0x808db28


undefined8 FUN_0808db28(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar3 - *(int *)(param_1 + 0x58) <= DAT_0808db7c) {
    *(int *)(param_1 + 0x58) = iVar3;
  }
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  iVar5 = (bVar1 & 1) * 0x2800 + DAT_0808db80;
  iVar3 = *(int *)(param_1 + 0x58) + DAT_0808db84;
  sVar2 = FUN_08007c7c(*(int *)(param_1 + 0x54) + iVar5,iVar3);
  if (sVar2 == 0) {
    uVar4 = 0;
  }
  else {
    if ((bVar1 & 1) == 0) {
      iVar3 = FUN_08008988(*(int *)(param_1 + 0x54) + iVar5,iVar3);
    }
    else {
      iVar3 = FUN_08008868(*(int *)(param_1 + 0x54) + iVar5,iVar3);
    }
    *(int *)(param_1 + 0x54) = iVar3 - iVar5;
    uVar4 = 1;
  }
  return CONCAT44(in_lr,uVar4);
}


