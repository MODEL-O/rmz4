// undefined FUN_0810ba9c(void)
// entry 0x810ba9c


undefined4 FUN_0810ba9c(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x28) + DAT_0810babc);
  uVar3 = *(byte *)(param_1 + 0x11) & 0xf;
  bVar1 = *(byte *)(param_1 + 0x11) >> 4;
  if (bVar1 == 0) {
    pbVar2 = (byte *)(iVar4 + 0xf1);
  }
  else if (bVar1 == 1) {
    pbVar2 = (byte *)(iVar4 + 0xf2);
  }
  else {
    pbVar2 = (byte *)(iVar4 + 0xf3);
  }
  if (uVar3 < *pbVar2) {
    FUN_0801cf00(param_1,uVar3 | 0x4200);
  }
  else {
    FUN_0801cf00(param_1,DAT_0810bae0);
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


