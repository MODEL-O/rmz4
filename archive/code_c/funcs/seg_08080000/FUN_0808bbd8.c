// undefined FUN_0808bbd8(void)
// entry 0x808bbd8


undefined4 FUN_0808bbd8(int param_1)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  uVar3 = (*(int *)(param_1 + 0xb4) - iVar4) + 0x4000;
  if (0x8000 < uVar3) {
    iVar4 = *(int *)(param_1 + 0xb4) + (uint)*(byte *)(param_1 + 0xb8) * 0x8000 + DAT_0808bc5c;
  }
  iVar6 = iVar4 + ((uint)(0 < *(int *)(param_1 + 0x5c)) * 2 + -1) * 0x1000;
  sVar2 = FUN_08007c7c(iVar6,*(int *)(param_1 + 0x58) + 1);
  if (sVar2 == 0) {
    iVar4 = *(int *)(param_1 + 0x54);
  }
  bVar1 = sVar2 == 0 || 0x8000 < uVar3;
  uVar5 = *(undefined4 *)(param_1 + 0x58);
  sVar2 = FUN_08007c7c(iVar6,uVar5);
  if (sVar2 != 0) {
    if (*(int *)(param_1 + 0x5c) < 0) {
      iVar4 = FUN_08008988(iVar6,uVar5);
      iVar6 = 0x1000;
    }
    else {
      iVar4 = FUN_08008868(iVar6,uVar5);
      iVar6 = DAT_0808bc94;
    }
    iVar4 = iVar4 + iVar6;
    bVar1 = true;
  }
  *(int *)(param_1 + 0x54) = iVar4;
  if (bVar1) {
    FUN_0808bbc0(param_1,*(char *)(param_1 + 0xb8) + 1U & 1);
  }
  return in_lr;
}


