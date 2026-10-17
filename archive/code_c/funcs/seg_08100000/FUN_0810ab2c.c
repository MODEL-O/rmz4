// undefined FUN_0810ab2c(void)
// entry 0x810ab2c


undefined4 FUN_0810ab2c(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(*(int *)(param_1 + 0x28) + DAT_0810ab4c);
  pbVar2 = (byte *)(iVar7 + 0xbc + (uint)*(byte *)(param_1 + 0x11));
  bVar1 = *pbVar2;
  if (bVar1 == 0x20) {
    uVar5 = 0xb;
  }
  else if (bVar1 == 0) {
    uVar5 = 0;
  }
  else if (bVar1 == 0x1f) {
    uVar5 = 10;
  }
  else {
    iVar3 = FUN_08128fb8(*pbVar2 - 1,3);
    uVar5 = iVar3 + 1U & 0xff;
  }
  if (*(byte *)(param_1 + 0x11) < 2) {
    FUN_0801cf00(param_1,uVar5 | 0x3600);
  }
  else {
    FUN_0801cf00(param_1,uVar5 + DAT_0810abd4);
  }
  uVar6 = 0;
  uVar5 = 0;
  if (*(byte *)(param_1 + 0x11) != 0) {
    do {
      if (*(char *)(iVar7 + 0xbc + uVar5) != -1) {
        uVar6 = uVar6 + 1 & 0xff;
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < *(byte *)(param_1 + 0x11));
  }
  *(uint *)(param_1 + 0x54) = uVar6 * 0x1800 + 0x8800;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0x6000;
  }
  else {
    uVar4 = 0x5800;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  return in_lr;
}


