// undefined FUN_08059a9c(void)
// entry 0x8059a9c


ulonglong FUN_08059a9c(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  iVar5 = *(int *)(*DAT_08059b30 + 0x54);
  iVar3 = *(int *)(param_1 + 0xb8);
  if (0xa000 < (uint)((iVar5 - *(int *)(param_1 + 0xcc)) + DAT_08059b38)) {
    iVar3 = iVar3 + DAT_08059b3c;
  }
  uVar2 = FUN_0810d338(((uint)(*(int *)(param_1 + 0x54) < iVar5) * -2 + 1) *
                       (iVar5 - (*(int *)(param_1 + 0x54) + ((bVar1 & 1) * 2 + -1) * 0xc00)),
                       iVar3 - (*(int *)(param_1 + 0xbc) + DAT_08059b34));
  uVar4 = uVar2 * 0x1000000 + 0x40000000 >> 0x18;
  if (uVar4 < 0x90) {
    uVar2 = 0x50;
  }
  else if (0xa8 < uVar4) {
    uVar2 = 0x68;
  }
  if ((bVar1 & 1) != 0) {
    uVar2 = 0x80 - uVar2 & 0xff;
  }
  return CONCAT44(in_lr,uVar2) & 0xffffffff000000ff;
}


