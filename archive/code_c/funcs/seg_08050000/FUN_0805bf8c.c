// undefined FUN_0805bf8c(void)
// entry 0x805bf8c


undefined4 FUN_0805bf8c(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 in_lr;
  undefined1 auStack_9c [8];
  undefined1 auStack_94 [8];
  undefined1 auStack_8c [8];
  undefined1 auStack_84 [8];
  undefined1 auStack_7c [8];
  undefined1 auStack_74 [8];
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [8];
  undefined1 *local_5c;
  undefined1 *local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 **local_3c;
  undefined1 **local_38;
  undefined1 **local_34;
  undefined1 **local_30;
  undefined1 ***local_2c [3];
  
  uVar3 = DAT_0805c078;
  FUN_08129258(auStack_9c,DAT_0805c078,7);
  local_2c[2] = (undefined1 ***)auStack_94;
  FUN_08129258(local_2c[2],uVar3,7);
  FUN_08129258(auStack_8c,DAT_0805c07c,7);
  FUN_08129258(auStack_84,DAT_0805c080,7);
  uVar3 = DAT_0805c084;
  FUN_08129258(auStack_7c,DAT_0805c084,7);
  FUN_08129258(auStack_74,uVar3,7);
  FUN_08129258(auStack_6c,DAT_0805c088,7);
  FUN_08129258(auStack_64,DAT_0805c08c,7);
  local_3c = &local_5c;
  local_58 = (undefined1 *)local_2c[2];
  local_38 = &local_54;
  local_34 = &local_4c;
  local_30 = &local_44;
  local_2c[0] = &local_3c;
  local_2c[1] = &local_34;
  if (((*(ushort *)(DAT_0805c090 + 8) & 8) == 0) &&
     ((*(int *)(param_1 + 200) == 0 ||
      ((((cVar2 = *(char *)(param_1 + 0xbf), 1 < (byte)(cVar2 - 1U) && (cVar2 != '\x04')) &&
        (cVar2 != '\x05')) && (cVar2 != '\x03')))))) {
    bVar1 = DAT_0805c148 <
            (uint)((*(int *)(*DAT_0805c140 + 0x54) - *(int *)(param_1 + 0x54)) + DAT_0805c144);
    local_5c = auStack_9c;
    local_54 = auStack_8c;
    local_50 = auStack_84;
    local_4c = auStack_7c;
    local_48 = auStack_74;
    local_44 = auStack_6c;
    local_40 = auStack_64;
    iVar4 = FUN_0805c240(param_1);
    bVar6 = 0;
    if (((*(byte *)(DAT_0805c14c + DAT_0805c150) & 0x10) != 0) &&
       ((*(byte *)(DAT_0805c154 + 4) & 4) == 0)) {
      bVar6 = 1;
    }
    pbVar7 = (byte *)(param_1 + 0xcd);
    pbVar8 = (byte *)(param_1 + 0xcc);
    if (1 < *pbVar7) {
      local_2c[bVar1][iVar4][bVar6][*pbVar8] = 0;
    }
    uVar5 = FUN_0805c328(local_2c[bVar1][iVar4][bVar6],7);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(uVar5 + DAT_0805c158);
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    if (uVar5 == *pbVar8) {
      *pbVar7 = *pbVar7 + 1;
    }
    else {
      *pbVar7 = 1;
      *pbVar8 = (byte)uVar5;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


