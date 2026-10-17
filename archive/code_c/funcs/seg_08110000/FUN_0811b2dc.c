// undefined FUN_0811b2dc(void)
// entry 0x811b2dc


undefined4 FUN_0811b2dc(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  pbVar5 = (byte *)(param_1 + 0xde0);
  if ((4 < (byte)(*pbVar5 - 1)) && (cVar1 = FUN_08118248(param_1), cVar1 != '\0')) {
    return in_lr;
  }
  if ((*(ushort *)(DAT_0811b370 + 4) & 0x40) != 0) {
    *pbVar5 = (char)(*pbVar5 + 7) + (char)((int)(*pbVar5 + 7) >> 3) * -8;
    FUN_08002b10(1);
  }
  if ((*(ushort *)(DAT_0811b370 + 4) & 0x80) != 0) {
    iVar3 = *(byte *)(param_1 + 0xde0) + 1;
    *(byte *)(param_1 + 0xde0) = (char)iVar3 + (char)(iVar3 >> 3) * -8;
    FUN_08002b10(1);
  }
  if (*(byte *)(param_1 + 0xde0) < 8) {
                    /* WARNING: Could not recover jumptable at 0x0811b368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(PTR_PTR_0811b374 + (uint)*(byte *)(param_1 + 0xde0) * 4))();
    return uVar2;
  }
  if (*(byte *)(param_1 + 0xde0) < 6) {
    uVar4 = 0x16;
    uVar2 = DAT_0811b824;
    iVar3 = DAT_0811b820;
  }
  else {
    if (*(byte *)(param_1 + 0xde0) != 6) {
      FUN_080027b8(param_1 + DAT_0811b88c,DAT_0811b890,0x25,0,0);
      goto LAB_0811b85a;
    }
    uVar4 = 0x24;
    uVar2 = DAT_0811b844;
    iVar3 = DAT_0811b840;
  }
  FUN_080027b8(param_1 + iVar3,uVar2,uVar4,0,0);
LAB_0811b85a:
  iVar3 = param_1 + DAT_0811b88c;
  FUN_0811ba00(param_1,iVar3);
  FUN_080025d8(0x33);
  FUN_08001f1c(iVar3,(*DAT_0811b894 & 0x1f00) << 3,0x1000);
  return in_lr;
}


