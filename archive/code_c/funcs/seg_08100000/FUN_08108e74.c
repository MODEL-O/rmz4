// undefined FUN_08108e74(void)
// entry 0x8108e74


undefined4 FUN_08108e74(int param_1)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  piVar1 = DAT_08108ecc;
  *DAT_08108ecc = param_1;
  local_18 = 0;
  FUN_08128be0(&local_18,param_1,0x1000000);
  local_14 = 0;
  FUN_08128be4(&local_14,param_1,DAT_08108ed0);
  uVar4 = 0;
  do {
    pbVar3 = (byte *)(*piVar1 + (uVar4 >> 1));
    iVar2 = (uVar4 & 1) << 2;
    *pbVar3 = (byte)(9 << iVar2) | *pbVar3 & ~(byte)(0xf << iVar2);
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 0x33);
  return in_lr;
}


