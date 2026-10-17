// undefined FUN_0810dbdc(void)
// entry 0x810dbdc


uint FUN_0810dbdc(uint param_1,uint param_2,byte *param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  uint local_30;
  ushort *local_28;
  uint local_24;
  
  param_1 = param_1 & 0xff;
  local_30 = param_2 & 0xff;
  param_4 = param_4 & 0xffff;
  puVar6 = (ushort *)(*DAT_0810dc28 + (local_30 * 0x20 + param_1) * 2);
  local_24 = 0;
  uVar3 = (uint)*param_3;
  if ((0xfc < uVar3) || (uVar7 = param_1, local_28 = puVar6, param_4 == 0)) {
    return param_4;
  }
  do {
    if (uVar3 < 0xf1) {
      param_3 = param_3 + 1;
      uVar3 = (uint)*param_3 | uVar3 << 8 | local_24;
      if (((uVar7 - *(byte *)(DAT_0810dd0c + 0x598) & 0xff) < (uint)*(byte *)(DAT_0810dd0c + 0x59a))
         && ((local_30 - *(byte *)(DAT_0810dd0c + DAT_0810dd10) & 0xff) <
             (uint)*(byte *)(DAT_0810dd0c + DAT_0810dd14))) {
        iVar4 = FUN_0810ddbc(uVar3);
        if (iVar4 == 0) {
          return param_4;
        }
        *(ushort *)(iVar4 + 4) = (ushort)uVar3;
        uVar2 = (ushort)DAT_0810ddb4;
        uVar1 = (ushort)uVar3 & 0xf000 | uVar2 & *(ushort *)(iVar4 + 6);
        *puVar6 = uVar1;
        puVar6[0x20] = uVar1 + 1;
        uVar7 = uVar7 + 1 & 0xff;
        iVar5 = uVar3 + DAT_0810ddb0;
        iVar4 = FUN_0810ddbc(iVar5,DAT_0810ddb8);
        if (iVar4 == 0) {
          return param_4;
        }
        uVar1 = (ushort)iVar5;
        *(ushort *)(iVar4 + 4) = uVar1;
        uVar1 = uVar1 & 0xf000 | uVar2 & *(ushort *)(iVar4 + 6);
        puVar6[1] = uVar1;
        puVar6[0x21] = uVar1 + 1;
LAB_0810dd80:
        puVar6 = puVar6 + 1;
        uVar7 = uVar7 + 1 & 0xff;
      }
      else {
        uVar7 = uVar7 + 1 & 0xff;
        if (DAT_0810dd18 < uVar3) goto LAB_0810dd80;
      }
      puVar6 = puVar6 + 1;
      param_4 = param_4 - 1 & 0xffff;
    }
    else if (uVar3 == 0xf1) {
      local_24 = 0;
    }
    else if (uVar3 == 0xf2) {
      local_24 = 0x8000;
    }
    else if (uVar3 == 0xf7) {
      param_3 = param_3 + 1;
      local_24 = ((uint)*(ushort *)(DAT_0810dc74 + 6) + (uint)*param_3) * 0x1000 & 0xffff | 0x5b0;
    }
    else if (uVar3 == 0xfc) {
      puVar6 = local_28 + 0x40;
      local_30 = local_30 + 2 & 0xff;
      uVar7 = param_1;
      local_28 = puVar6;
    }
    else if (uVar3 == 0xf9) {
      uVar3 = FUN_0810dbdc(uVar7,local_30,*DAT_0810dcbc,param_4);
      uVar3 = uVar3 & 0xffff;
      if (uVar3 == 0) {
        return param_4;
      }
      puVar6 = puVar6 + (param_4 - uVar3);
      uVar7 = uVar7 + (param_4 - uVar3) & 0xff;
      param_4 = uVar3;
    }
    else if (uVar3 < 0xf9) {
      param_3 = param_3 + 1;
    }
    param_3 = param_3 + 1;
    uVar3 = (uint)*param_3;
    if (0xfc < uVar3) {
      return param_4;
    }
    if (param_4 == 0) {
      return 0;
    }
  } while( true );
}


