// undefined FUN_0811d718(void)
// entry 0x811d718


undefined8 FUN_0811d718(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  byte local_30 [4];
  byte local_2c [4];
  uint local_28;
  
  local_28 = 0xff;
  local_30[0] = *param_1;
  local_30[1] = param_1[1];
  local_30[2] = param_1[2];
  local_30[3] = param_1[3];
  uVar6 = 0;
  do {
    uVar4 = uVar6 + 1 & 0xff;
    if (uVar4 < 4) {
      do {
        bVar1 = local_30[uVar4];
        bVar2 = local_30[uVar6];
        if (bVar1 < bVar2) {
          local_30[uVar6] = bVar1;
          local_30[uVar4] = bVar2;
        }
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < 4);
    }
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 3);
  uVar6 = 0;
  do {
    pbVar3 = (byte *)(uVar6 * 4 + DAT_0811d814);
    local_2c[0] = *pbVar3;
    local_2c[1] = pbVar3[1];
    local_2c[2] = pbVar3[2];
    local_2c[3] = pbVar3[3];
    uVar4 = 0;
    do {
      uVar5 = uVar4 + 1 & 0xff;
      if (uVar5 < 4) {
        do {
          bVar1 = local_2c[uVar5];
          bVar2 = local_2c[uVar4];
          if (bVar1 < bVar2) {
            local_2c[uVar4] = bVar1;
            local_2c[uVar5] = bVar2;
          }
          uVar5 = uVar5 + 1 & 0xff;
        } while (uVar5 < 4);
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < 3);
    if ((((local_30[0] == local_2c[0]) && (local_30[1] == local_2c[1])) &&
        (local_30[2] == local_2c[2])) && (local_30[3] == local_2c[3])) {
      local_28 = uVar6;
    }
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 0x1c);
  return CONCAT44(in_lr,local_28);
}


