// undefined FUN_08125aac(void)
// entry 0x8125aac


undefined4 FUN_08125aac(int param_1)

{
  ushort *puVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  
  local_24 = (int *)(param_1 + DAT_08125dd0);
  *local_24 = 0x16800;
  local_24[1] = 0xf000;
  local_28 = param_1;
  FUN_08006a94(0x18,local_24);
  puVar1 = DAT_08125dd8;
  iVar5 = DAT_08125dd4;
  FUN_08001d30(DAT_08125dd4,
               ((uint)*DAT_08125dd8 - (uint)(*(ushort *)(DAT_08125dd4 + 6) >> 6)) * 0x20 + 0x10000);
  puVar3 = DAT_08125de0;
  iVar2 = DAT_08125ddc;
  FUN_08002208(DAT_08125ddc,((uint)*DAT_08125de0 - (uint)*(byte *)(DAT_08125ddc + 7)) * 0x20 + 0x200
              );
  FUN_08001d30(iVar5 + 0x14,
               ((uint)puVar1[1] - (uint)(*(ushort *)(iVar5 + 0x1a) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar2 + 0x14,((uint)puVar3[1] - (uint)*(byte *)(iVar2 + 0x1b)) * 0x20 + 0x200);
  FUN_08001d30(iVar5 + 0x28,
               ((uint)puVar1[2] - (uint)(*(ushort *)(iVar5 + 0x2e) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar2 + 0x28,((uint)puVar3[2] - (uint)*(byte *)(iVar2 + 0x2f)) * 0x20 + 0x200);
  FUN_08001d30(DAT_08125de4,
               ((uint)puVar1[4] - (uint)(*(ushort *)(DAT_08125de4 + 6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_08125de8,((uint)puVar3[4] - (uint)*(byte *)(DAT_08125de8 + 7)) * 0x20 + 0x200);
  FUN_08001d30(iVar5 + 100,
               ((uint)puVar1[5] - (uint)(*(ushort *)(iVar5 + 0x6a) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar2 + 100,((uint)puVar3[5] - (uint)*(byte *)(iVar2 + 0x6b)) * 0x20 + 0x200);
  puVar1[0xa9] = 0x200;
  puVar3[0xa9] = 4;
  FUN_08001d30(iVar5 + 0xd34,(0x200 - (uint)(*(ushort *)(iVar5 + 0xd3a) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar2 + 0xd34,((uint)puVar3[0xa9] - (uint)*(byte *)(iVar2 + 0xd3b)) * 0x20 + 0x200);
  puVar1[0xb9] = 0x270;
  puVar3[0xb9] = 5;
  FUN_08001d30(iVar5 + 0xe74,(0x270 - (uint)(*(ushort *)(iVar5 + 0xe7a) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar2 + 0xe74,((uint)puVar3[0xb9] - (uint)*(byte *)(iVar2 + 0xe7b)) * 0x20 + 0x200);
  puVar1[4] = 0x2ec;
  puVar3[4] = 6;
  FUN_08001d30(DAT_08125de4,(0x2ec - (uint)(*(ushort *)(DAT_08125de4 + 6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_08125de8,((uint)puVar3[4] - (uint)*(byte *)(DAT_08125de8 + 7)) * 0x20 + 0x200);
  iVar6 = DAT_08125dec;
  puVar1[0xf7] = (ushort)DAT_08125dec;
  puVar3[0xf7] = 10;
  iVar4 = iVar6 + 0xf77 + iVar5;
  FUN_08001d30(iVar4,((uint)puVar1[0xf7] - (uint)(*(ushort *)(iVar4 + 6) >> 6)) * 0x20 + 0x10000);
  iVar6 = iVar6 + 0xf77 + iVar2;
  FUN_08002208(iVar6,((uint)puVar3[0xf7] - (uint)*(byte *)(iVar6 + 7)) * 0x20 + 0x200);
  puVar1[0x67] = 0x3a8;
  puVar3[0x67] = 10;
  iVar6 = DAT_08125df0;
  FUN_08001d30(iVar5 + DAT_08125df0,
               (0x3a8 - (uint)(*(ushort *)(iVar5 + DAT_08125df0 + 6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar6 + iVar2,
               ((uint)puVar3[0x67] - (uint)*(byte *)(iVar6 + iVar2 + 7)) * 0x20 + 0x200);
  local_30 = 0x16800;
  local_2c = 0xdc00;
  iVar5 = FUN_0802f190(&local_30);
  piVar7 = (int *)(local_28 + DAT_08125df4);
  *piVar7 = iVar5;
  FUN_0802cbec(iVar5,0,0,0x1e000,DAT_08125df8);
  iVar5 = *piVar7;
  *DAT_08125dfc = iVar5;
  FUN_080382b0(iVar5,DAT_08125e00);
  *(undefined1 *)(*piVar7 + 0x4c) = 1;
  *(byte *)(*piVar7 + 0x4a) = *(byte *)(*piVar7 + 0x4a) | 0x10;
  *(byte *)(*piVar7 + 10) = *(byte *)(*piVar7 + 10) | 0x10;
  piVar7[2] = 0;
  piVar7[3] = 0;
  piVar7[4] = *(int *)(DAT_08125e04 + 0x30);
  piVar7[5] = 0xe10;
  *(undefined1 *)(piVar7 + 6) = 0;
  *(undefined1 *)((int)piVar7 + 0x19) = 0;
  *(undefined1 *)((int)piVar7 + 0x1a) = 0;
  *(undefined1 *)((int)piVar7 + 0x1b) = 0;
  *(undefined1 *)(piVar7 + 7) = 0;
  *(undefined1 *)((int)piVar7 + 0x1d) = 0;
  *(undefined1 *)((int)piVar7 + 0x1e) = 0;
  *(undefined1 *)((int)piVar7 + 0x1f) = 0;
  *(undefined1 *)(local_28 + DAT_08125e08) = 0;
  *(undefined1 *)(local_28 + DAT_08125e0c) = 0;
  *(undefined1 *)(local_28 + DAT_08125e10) = 0;
  *(undefined1 *)(local_28 + DAT_08125e14) = 0;
  piVar7[9] = 0;
  piVar7[10] = 0;
  piVar7[0xb] = 0;
  piVar7[0xc] = 0;
  local_30 = *local_24 + DAT_08125e18;
  local_2c = local_24[1];
  FUN_08105418(&local_30,0,local_28);
  FUN_08002a88(0x84);
  return in_lr;
}


