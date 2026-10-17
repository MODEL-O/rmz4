// undefined FUN_0810e808(void)
// entry 0x810e808


undefined4 FUN_0810e808(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(char *)(DAT_0810e854 + 0x14) == '\x01') && (*(char *)(param_1 + 4) != '\x01')) {
    if (*(char *)(param_1 + 6) == '\0') {
      iVar3 = *(int *)(DAT_0810e854 + 4) + (uint)*(byte *)(param_1 + 5) * 0x40 + 2;
      uVar1 = 0;
      do {
        FUN_08000b30((short)uVar1 * 0xc + DAT_0810e858,iVar3,0xc);
        uVar2 = (int)(short)uVar1 + 1;
        iVar3 = iVar3 + 0x40;
        uVar1 = uVar2 & 0xffff;
      } while ((int)(uVar2 * 0x10000) >> 0x10 < 6);
    }
    else {
      iVar3 = *(int *)(DAT_0810e854 + 4) + (uint)*(byte *)(param_1 + 5) * 0x40 + 0x2e;
      uVar1 = 0;
      do {
        FUN_08000b30((short)uVar1 * 0xc + DAT_0810e890,iVar3,0xc);
        uVar2 = (int)(short)uVar1 + 1;
        iVar3 = iVar3 + 0x40;
        uVar1 = uVar2 & 0xffff;
      } while ((int)(uVar2 * 0x10000) >> 0x10 < 6);
    }
  }
  return in_lr;
}


