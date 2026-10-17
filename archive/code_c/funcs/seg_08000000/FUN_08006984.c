// undefined FUN_08006984(void)
// entry 0x8006984


undefined4 FUN_08006984(uint param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  iVar2 = DAT_080069b8;
  pbVar3 = (byte *)(((param_1 & 0xffff) >> 3) + DAT_080069b8);
  bVar1 = *pbVar3;
  if (((int)(uint)bVar1 >> (param_1 & 7) & 1U) == 0) {
    *pbVar3 = bVar1 | (byte)(1 << (param_1 & 7));
    *(undefined1 *)(iVar2 + 0x38) = 1;
  }
  return in_lr;
}


