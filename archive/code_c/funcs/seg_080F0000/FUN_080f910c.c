// undefined FUN_080f910c(void)
// entry 0x80f910c


undefined4 FUN_080f910c(int param_1)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined4 local_20;
  int local_1c;
  
  local_20 = *(undefined4 *)(param_1 + 0x54);
  local_1c = *(int *)(param_1 + 0x58);
  cVar2 = FUN_080f872c(param_1 + 0x54);
  pbVar5 = (byte *)(param_1 + 0xb9);
  *pbVar5 = 0;
  if (cVar2 == '\f') {
    uVar3 = 1;
    do {
      local_1c = local_1c + DAT_080f9164 + (char)*pbVar5 * 0x2000;
      cVar2 = FUN_080f872c(&local_20);
      if (cVar2 != '\f') {
        *pbVar5 = *pbVar5 ^ 1;
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0xf0);
  }
  uVar6 = 0;
  pbVar5 = (byte *)(param_1 + 0xb9);
  do {
    local_1c = local_1c + DAT_080f91a4 + (char)*pbVar5 * 0x2000;
    cVar2 = FUN_080f872c(&local_20);
    if (cVar2 != '\f') {
      *pbVar5 = *pbVar5 ^ 1;
      break;
    }
    uVar6 = uVar6 + 1 & 0xffff;
  } while (uVar6 < 0xf0);
  uVar4 = FUN_08129198(*(undefined4 *)(DAT_080f9208 + DAT_080f920c),(uVar6 & 0x7fff) << 5);
  if ((uVar6 & 0x7fff) * 0x10 <= uVar4) {
    uVar4 = uVar4 + (uVar6 & 0x7fff) * -0x10;
    *pbVar5 = *pbVar5 ^ 1;
  }
  iVar1 = DAT_080f9210;
  uVar6 = 0;
  if (uVar4 != 0) {
    do {
      FUN_08128f88(param_1 + 0x54,pbVar5,1,*(undefined4 *)(iVar1 + 4));
      uVar6 = uVar6 + 1 & 0xffff;
    } while (uVar6 < uVar4);
  }
  return in_lr;
}


