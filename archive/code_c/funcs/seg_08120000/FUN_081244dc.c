// undefined FUN_081244dc(void)
// entry 0x81244dc


undefined4 FUN_081244dc(int param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  uint local_24;
  
  local_24 = 0;
  puVar5 = (undefined4 *)(param_1 + DAT_081247e4);
  *puVar5 = 0x16800;
  puVar5[1] = 0xf000;
  FUN_08006a94(0x15);
  puVar1 = DAT_081247ec;
  iVar6 = DAT_081247e8;
  FUN_08001d30(DAT_081247e8,
               ((uint)*DAT_081247ec - (uint)(*(ushort *)(DAT_081247e8 + 6) >> 6)) * 0x20 + 0x10000);
  puVar2 = DAT_081247f0;
  FUN_08002208(DAT_081247f4,((uint)*DAT_081247f0 - (uint)*(byte *)(DAT_081247f4 + 7)) * 0x20 + 0x200
              );
  FUN_08001d30(iVar6 + 0x14,
               ((uint)puVar1[1] - (uint)(*(ushort *)(iVar6 + 0x1a) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_081247f4 + 0x14,
               ((uint)puVar2[1] - (uint)*(byte *)(DAT_081247f4 + 0x1b)) * 0x20 + 0x200);
  FUN_08001d30(iVar6 + 0x28,
               ((uint)puVar1[2] - (uint)(*(ushort *)(iVar6 + 0x2e) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_081247f4 + 0x28,
               ((uint)puVar2[2] - (uint)*(byte *)(DAT_081247f4 + 0x2f)) * 0x20 + 0x200);
  FUN_08001d30(iVar6 + 0x50,
               ((uint)puVar1[4] - (uint)(*(ushort *)(iVar6 + 0x56) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_081247f4 + 0x50,
               ((uint)puVar2[4] - (uint)*(byte *)(DAT_081247f4 + 0x57)) * 0x20 + 0x200);
  FUN_08001d30(iVar6 + 100,
               ((uint)puVar1[5] - (uint)(*(ushort *)(iVar6 + 0x6a) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_081247f4 + 100,
               ((uint)puVar2[5] - (uint)*(byte *)(DAT_081247f4 + 0x6b)) * 0x20 + 0x200);
  puVar1[0xe9] = 0x200;
  puVar2[0xe9] = 4;
  FUN_08001d30(iVar6 + 0x1234,(0x200 - (uint)(*(ushort *)(iVar6 + 0x123a) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_081247f4 + 0x1234,
               ((uint)puVar2[0xe9] - (uint)*(byte *)(DAT_081247f4 + 0x123b)) * 0x20 + 0x200);
  puVar1[0xea] = 0x250;
  puVar2[0xea] = 5;
  FUN_08001d30(iVar6 + 0x1248,(0x250 - (uint)(*(ushort *)(iVar6 + 0x124e) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_081247f4 + 0x1248,
               ((uint)puVar2[0xea] - (uint)*(byte *)(DAT_081247f4 + 0x124f)) * 0x20 + 0x200);
  iVar7 = DAT_081247f8;
  puVar1[0xf7] = (ushort)DAT_081247f8;
  puVar2[0xf7] = 10;
  iVar3 = iVar7 + 0xf77 + iVar6;
  FUN_08001d30(iVar3,((uint)puVar1[0xf7] - (uint)(*(ushort *)(iVar3 + 6) >> 6)) * 0x20 + 0x10000);
  iVar7 = iVar7 + 0xf77 + DAT_081247f4;
  FUN_08002208(iVar7,((uint)puVar2[0xf7] - (uint)*(byte *)(iVar7 + 7)) * 0x20 + 0x200);
  puVar1[0x67] = 0x3a8;
  puVar2[0x67] = 10;
  iVar7 = DAT_081247fc;
  FUN_08001d30(iVar6 + DAT_081247fc,
               (0x3a8 - (uint)(*(ushort *)(iVar6 + DAT_081247fc + 6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar7 + DAT_081247f4,
               ((uint)puVar2[0x67] - (uint)*(byte *)(iVar7 + DAT_081247f4 + 7)) * 0x20 + 0x200);
  local_2c = 0x16800;
  local_28 = 0xdc00;
  uVar4 = FUN_0802f190(&local_2c);
  puVar5 = (undefined4 *)(param_1 + DAT_08124800);
  *puVar5 = uVar4;
  FUN_0802cbec(uVar4,0,0,DAT_08124804,DAT_08124804);
  uVar4 = *puVar5;
  *DAT_08124808 = uVar4;
  FUN_080382b0(uVar4,DAT_0812480c);
  puVar5[2] = local_24;
  puVar5[3] = local_24;
  puVar5[4] = *(undefined4 *)(DAT_08124810 + 0x24);
  puVar5[5] = 0xe10;
  *(undefined1 *)(puVar5 + 6) = 0;
  *(undefined1 *)((int)puVar5 + 0x19) = 0;
  *(undefined1 *)((int)puVar5 + 0x1a) = 0;
  *(undefined1 *)((int)puVar5 + 0x1b) = 0;
  *(undefined1 *)(puVar5 + 7) = 0;
  *(undefined1 *)((int)puVar5 + 0x1d) = 0;
  *(undefined1 *)((int)puVar5 + 0x1e) = 0;
  *(undefined1 *)((int)puVar5 + 0x1f) = 0;
  *(undefined1 *)(param_1 + DAT_08124814) = 0;
  iVar6 = DAT_08124818;
  *(undefined1 *)(param_1 + DAT_08124818) = 0;
  *(undefined1 *)(param_1 + iVar6 + 1) = 0;
  piVar8 = (int *)(param_1 + DAT_081247e4);
  piVar9 = DAT_0812481c;
  do {
    iVar6 = *piVar9;
    piVar9 = piVar9 + 1;
    local_2c = *piVar8 + iVar6 * 0x100;
    local_28 = piVar8[1];
    FUN_081047bc(&local_2c,local_24 & 0xff,param_1);
    local_24 = local_24 + 1;
  } while ((int)local_24 < 3);
  param_1 = param_1 + DAT_08124800;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_08002a88(0x8b);
  return in_lr;
}


