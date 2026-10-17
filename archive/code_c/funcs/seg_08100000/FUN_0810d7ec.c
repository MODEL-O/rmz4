// undefined FUN_0810d7ec(void)
// entry 0x810d7ec


undefined8 FUN_0810d7ec(byte *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  short sVar4;
  undefined4 in_lr;
  uint uVar5;
  
  puVar2 = DAT_0810d830;
  uVar5 = 0;
  sVar4 = 0;
  bVar1 = *param_1;
  while (bVar1 < 0xfd) {
    if (bVar1 == 0xf9) {
      iVar3 = FUN_0810d7ec(*puVar2);
      uVar5 = (short)uVar5 + iVar3 & 0xffff;
    }
    if (*param_1 < 0xf0) {
      uVar5 = uVar5 * 0x10000 + 0x10000 >> 0x10;
    }
    sVar4 = (short)uVar5;
    param_1 = param_1 + 1;
    bVar1 = *param_1;
  }
  return CONCAT44(in_lr,(int)sVar4);
}


