// undefined FUN_080b2e08(void)
// entry 0x80b2e08


undefined4 FUN_080b2e08(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_10 [2];
  
  local_10[1] = DAT_080b2e3c[1];
  local_10[0] = *DAT_080b2e3c;
  uVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
  if ((uVar3 & 0x4000) == 0) {
    if ((uVar3 & 0x2000) == 0) {
      return in_lr;
    }
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0xb6) = bVar1;
  sVar2 = FUN_08007c7c(*(int *)(param_1 + 0x54) + local_10[*(byte *)(param_1 + 0xb6)] * 0x100,
                       *(int *)(param_1 + 0x58) + DAT_080b2e8c);
  if (sVar2 == 0) {
    iVar4 = FUN_08008aa4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
  }
  return in_lr;
}


