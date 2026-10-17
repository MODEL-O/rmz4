// undefined FUN_08108fb8(void)
// entry 0x8108fb8


undefined4 FUN_08108fb8(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  piVar1 = DAT_08109014;
  *DAT_08109014 = param_1;
  uVar3 = 0;
  local_1c = 0;
  FUN_08128be0(&local_1c,param_1,0x1000000);
  local_18 = 0;
  FUN_08128be4(&local_18,param_1,DAT_08109018);
  do {
    pbVar2 = (byte *)(*piVar1 + (uVar3 >> 2));
    *pbVar2 = (byte)(1 << (uVar3 & 3)) | *pbVar2;
    pbVar2 = (byte *)(*piVar1 + (uVar3 >> 2));
    *pbVar2 = (byte)(0x10 << (uVar3 & 3)) | *pbVar2;
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 0x1c);
  return in_lr;
}


