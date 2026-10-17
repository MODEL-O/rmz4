// undefined FUN_0801e25c(void)
// entry 0x801e25c


undefined4 FUN_0801e25c(uint param_1,uint param_2)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 in_lr;
  undefined4 local_30 [2];
  uint local_28;
  int local_24;
  
  puVar2 = DAT_0801e460;
  iVar5 = DAT_0801e45c;
  local_28 = param_2 & 0xff;
  local_24 = (param_1 & 0xff) * 4;
  pbVar7 = *(byte **)(local_24 + DAT_0801e454);
  if (*DAT_0801e458 == -1) {
    FUN_08001d30(DAT_0801e45c,
                 ((uint)*DAT_0801e460 - (uint)(*(ushort *)(DAT_0801e45c + 6) >> 6)) * 0x20 + 0x10000
                );
    puVar4 = DAT_0801e468;
    iVar3 = DAT_0801e464;
    FUN_08002208(DAT_0801e464,
                 ((uint)*DAT_0801e468 - (uint)*(byte *)(DAT_0801e464 + 7)) * 0x20 + 0x200);
    FUN_08001d30(iVar5 + 0x14,
                 ((uint)puVar2[1] - (uint)(*(ushort *)(iVar5 + 0x1a) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(iVar3 + 0x14,((uint)puVar4[1] - (uint)*(byte *)(iVar3 + 0x1b)) * 0x20 + 0x200);
    FUN_08001d30(iVar5 + 0x28,
                 ((uint)puVar2[2] - (uint)(*(ushort *)(iVar5 + 0x2e) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(iVar3 + 0x28,((uint)puVar4[2] - (uint)*(byte *)(iVar3 + 0x2f)) * 0x20 + 0x200);
    FUN_08001d30(iVar5 + 0x50,
                 ((uint)puVar2[4] - (uint)(*(ushort *)(iVar5 + 0x56) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(iVar3 + 0x50,((uint)puVar4[4] - (uint)*(byte *)(iVar3 + 0x57)) * 0x20 + 0x200);
    FUN_08001d30(iVar5 + 100,
                 ((uint)puVar2[5] - (uint)(*(ushort *)(iVar5 + 0x6a) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(iVar3 + 100,((uint)puVar4[5] - (uint)*(byte *)(iVar3 + 0x6b)) * 0x20 + 0x200);
    local_30[0] = 0xffffffff;
    FUN_08128be0(local_30,DAT_0801e46c,DAT_0801e470);
    *DAT_0801e458 = -2;
  }
  iVar5 = DAT_0801e474;
  puVar4 = DAT_0801e468;
  puVar2 = DAT_0801e460;
  if ((*(ushort *)(DAT_0801e474 + DAT_0801e478) & 1) == 0) {
    if (*DAT_0801e458 == -2) {
      bVar1 = *pbVar7;
      while (bVar1 != 0xff) {
        puVar2[*pbVar7] = *(ushort *)(pbVar7 + 2);
        puVar4[*pbVar7] = (ushort)pbVar7[4];
        pbVar7 = pbVar7 + 8;
        bVar1 = *pbVar7;
      }
    }
    *(undefined2 *)(iVar5 + DAT_0801e47c) = 0;
    puVar4 = DAT_0801e468;
    puVar2 = DAT_0801e460;
    pbVar7 = *(byte **)(local_24 + DAT_0801e454);
    bVar1 = *pbVar7;
    while (bVar1 != 0xff) {
      if (((int)(uint)pbVar7[1] >> (local_28 & 0xff) & 1U) != 0) {
        puVar2[*pbVar7] = *(ushort *)(pbVar7 + 2);
        puVar4[*pbVar7] = (ushort)pbVar7[4];
        uVar6 = (uint)*pbVar7;
        iVar5 = uVar6 * 0x14 + DAT_0801e45c;
        FUN_08001d30(iVar5,((uint)puVar2[uVar6] - (uint)(*(ushort *)(iVar5 + 6) >> 6)) * 0x20 +
                           0x10000);
        iVar5 = uVar6 * 0x14 + DAT_0801e464;
        FUN_08002208(iVar5,((uint)puVar4[uVar6] - (uint)*(byte *)(iVar5 + 7)) * 0x20 + 0x200);
      }
      pbVar7 = pbVar7 + 8;
      bVar1 = *pbVar7;
    }
    *(undefined1 *)(DAT_0801e474 + DAT_0801e480) = (undefined1)local_28;
  }
  return in_lr;
}


