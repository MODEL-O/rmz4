// undefined FUN_08103cdc(void)
// entry 0x8103cdc


undefined4 FUN_08103cdc(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar3 = 0x28;
    uVar5 = 0x5000;
  }
  else {
    iVar3 = 0x48;
    uVar5 = 0x9000;
  }
  uVar1 = FUN_08129050(iVar3 * (uint)*(byte *)(param_1 + 0x11) +
                       (uint)*(ushort *)(DAT_08103d28 + DAT_08103d2c) & 0xffff,iVar3 << 2);
  uVar2 = iVar3 * 2;
  if (uVar1 < uVar2) {
    iVar4 = *(int *)(param_1 + 100);
    iVar3 = FUN_08129120(uVar5 * uVar1,uVar2);
    iVar3 = (iVar4 - (uVar5 >> 1)) + iVar3;
  }
  else {
    iVar4 = *(int *)(param_1 + 100);
    iVar3 = FUN_08129120(uVar5 * (uVar1 + iVar3 * -2),uVar2);
    iVar3 = (iVar4 + (uVar5 >> 1)) - iVar3;
  }
  *(int *)(param_1 + 0x54) = iVar3;
  FUN_0801cff0(param_1);
  return in_lr;
}


