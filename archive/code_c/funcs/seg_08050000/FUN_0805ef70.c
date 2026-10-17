// undefined FUN_0805ef70(void)
// entry 0x805ef70


undefined4 FUN_0805ef70(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  int aiStack_58 [3];
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 auStack_40 [12];
  undefined1 **local_34 [4];
  undefined1 *local_24;
  undefined1 *local_20;
  
  uVar2 = DAT_0805f068;
  FUN_08129258(auStack_64,DAT_0805f068,3);
  FUN_08129258(auStack_60,uVar2,3);
  FUN_08129258(auStack_5c,uVar2,3);
  local_4c = auStack_64;
  local_48 = auStack_60;
  local_44 = auStack_5c;
  FUN_08129258(aiStack_58,&local_4c,0xc);
  FUN_08129258(&local_4c,DAT_0805f06c,3);
  FUN_08129258(&local_48,DAT_0805f070,3);
  FUN_08129258(&local_44,DAT_0805f074,3);
  local_34[0] = &local_4c;
  local_34[1] = &local_48;
  local_34[2] = &local_44;
  FUN_08129258(auStack_40,local_34,0xc);
  local_34[3] = (undefined1 **)auStack_40;
  local_24 = auStack_40;
  local_20 = auStack_40;
  FUN_08129258(local_34,local_34 + 3,0xc);
  bVar1 = *(byte *)(param_1 + 0x10);
  iVar3 = FUN_0805f150(param_1);
  pbVar5 = (byte *)(param_1 + 0xba);
  if (2 < *pbVar5) {
    local_34[bVar1][iVar3][*(byte *)(param_1 + 0xb9)] = 0;
  }
  uVar4 = FUN_0805f194(local_34[bVar1][iVar3],3);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(aiStack_58[bVar1] + uVar4);
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  if (uVar4 == *(byte *)(param_1 + 0xb9)) {
    *pbVar5 = *pbVar5 + 1;
  }
  else {
    *pbVar5 = 1;
    *(byte *)(param_1 + 0xb9) = (byte)uVar4;
  }
  return in_lr;
}


