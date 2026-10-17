// undefined FUN_08078fdc(void)
// entry 0x8078fdc


undefined4 FUN_08078fdc(int param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar1 = DAT_08078ffc;
  uVar4 = *(uint *)((uint)param_2 * 4 + DAT_08078ffc);
  if (param_2 == 1) {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar2;
  uVar3 = (uint)*(byte *)(param_1 + 0xc4);
  if ((uVar3 == 1) || (uVar3 == 0xff)) {
    FUN_0801cf00(param_1,uVar4 & 0xffff);
  }
  else if ((uVar4 != 0x9c00) || (*(int *)(uVar3 * 4 + iVar1) != 0x9c00)) {
    FUN_0801cf00(param_1,uVar4 & 0xffff);
  }
  *(byte *)(param_1 + 0xc4) = param_2;
  return in_lr;
}


