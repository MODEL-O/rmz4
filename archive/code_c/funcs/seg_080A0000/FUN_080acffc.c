// undefined FUN_080acffc(void)
// entry 0x80acffc


undefined4 FUN_080acffc(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_20 [4];
  
  local_20[0] = *DAT_080ad048;
  local_20[1] = DAT_080ad048[1];
  local_20[2] = DAT_080ad048[2];
  local_20[3] = DAT_080ad048[3];
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,*(undefined2 *)(local_20 + bVar1));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  pbVar2 = (byte *)(iVar3 + 0xb5);
  *pbVar2 = *pbVar2 & ~(byte)(1 << (uint)bVar1);
  return in_lr;
}


