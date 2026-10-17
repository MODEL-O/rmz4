// undefined FUN_08123dc4(void)
// entry 0x8123dc4


undefined4 FUN_08123dc4(int param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  int *piVar6;
  undefined4 in_lr;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar4 = (undefined4 *)(DAT_081240a0 + param_1);
  *puVar4 = 0x16800;
  puVar4[1] = 0xf000;
  FUN_08006a94(0x14);
  iVar3 = DAT_081240a4;
  FUN_08001d30(DAT_081240a4,
               ((uint)*DAT_081240a8 - (uint)(*(ushort *)(DAT_081240a4 + 6) >> 6)) * 0x20 + 0x10000);
  puVar1 = DAT_081240ac;
  FUN_08002208(DAT_081240b0,((uint)*DAT_081240ac - (uint)*(byte *)(DAT_081240b0 + 7)) * 0x20 + 0x200
              );
  FUN_08001d30(iVar3 + 0x14,
               ((uint)DAT_081240a8[1] - (uint)(*(ushort *)(iVar3 + 0x1a) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_081240b0 + 0x14,
               ((uint)puVar1[1] - (uint)*(byte *)(DAT_081240b0 + 0x1b)) * 0x20 + 0x200);
  FUN_08001d30(iVar3 + 0x28,
               ((uint)DAT_081240a8[2] - (uint)(*(ushort *)(iVar3 + 0x2e) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_081240b0 + 0x28,
               ((uint)puVar1[2] - (uint)*(byte *)(DAT_081240b0 + 0x2f)) * 0x20 + 0x200);
  FUN_08001d30(iVar3 + 0x50,
               ((uint)DAT_081240a8[4] - (uint)(*(ushort *)(iVar3 + 0x56) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_081240b0 + 0x50,
               ((uint)puVar1[4] - (uint)*(byte *)(DAT_081240b0 + 0x57)) * 0x20 + 0x200);
  FUN_08001d30(iVar3 + 100,
               ((uint)DAT_081240a8[5] - (uint)(*(ushort *)(iVar3 + 0x6a) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_081240b0 + 100,
               ((uint)puVar1[5] - (uint)*(byte *)(DAT_081240b0 + 0x6b)) * 0x20 + 0x200);
  DAT_081240a8[0xee] = 0x200;
  puVar1[0xee] = 4;
  FUN_08001d30(iVar3 + 0x1298,(0x200 - (uint)(*(ushort *)(iVar3 + 0x129e) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_081240b0 + 0x1298,
               ((uint)puVar1[0xee] - (uint)*(byte *)(DAT_081240b0 + 0x129f)) * 0x20 + 0x200);
  puVar5 = DAT_081240a8 + 0xf7;
  *puVar5 = (ushort)DAT_081240b4;
  puVar1[0xf7] = 10;
  FUN_08001d30(iVar3 + 0x134c,
               ((uint)*puVar5 - (uint)(*(ushort *)(iVar3 + 0x1352) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_081240b0 + 0x134c,
               ((uint)puVar1[0xf7] - (uint)*(byte *)(DAT_081240b0 + 0x1353)) * 0x20 + 0x200);
  DAT_081240a8[0x67] = 0x3a8;
  puVar1[0x67] = 10;
  iVar2 = DAT_081240b8;
  FUN_08001d30(iVar3 + DAT_081240b8,
               (0x3a8 - (uint)(*(ushort *)(iVar3 + DAT_081240b8 + 6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar2 + DAT_081240b0,
               ((uint)puVar1[0x67] - (uint)*(byte *)(iVar2 + DAT_081240b0 + 7)) * 0x20 + 0x200);
  local_28 = 0x16800;
  local_24 = 0xdc00;
  iVar3 = FUN_0802f190(&local_28);
  piVar6 = (int *)(DAT_081240bc + param_1);
  *piVar6 = iVar3;
  FUN_0802cbec(iVar3,0,0,0x19000,DAT_081240c0);
  iVar3 = *piVar6;
  *DAT_081240c4 = iVar3;
  FUN_080382b0(iVar3,DAT_081240c8);
  *(undefined1 *)(*piVar6 + 0x4c) = 1;
  *(byte *)(*piVar6 + 0x4a) = *(byte *)(*piVar6 + 0x4a) | 0x10;
  *(byte *)(*piVar6 + 10) = *(byte *)(*piVar6 + 10) | 0x10;
  local_28 = 0x1c000;
  local_24 = 0xd000;
  FUN_08104a78(param_1,&local_28,0,0);
  FUN_08104a78(param_1,&local_28,1,0);
  piVar6[2] = 0;
  piVar6[3] = 0;
  piVar6[4] = *(int *)(DAT_081240cc + 0x20);
  piVar6[5] = 0xe10;
  *(undefined1 *)(piVar6 + 6) = 0;
  *(undefined1 *)((int)piVar6 + 0x19) = 0;
  *(undefined1 *)((int)piVar6 + 0x1a) = 0;
  *(undefined1 *)((int)piVar6 + 0x1b) = 0;
  *(undefined1 *)(piVar6 + 7) = 0;
  *(undefined1 *)((int)piVar6 + 0x1d) = 0;
  *(undefined1 *)((int)piVar6 + 0x1e) = 0;
  *(undefined1 *)((int)piVar6 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0xdec) = 0;
  *(undefined1 *)(DAT_081240d0 + param_1) = 0;
  *(undefined1 *)(DAT_081240d4 + param_1) = 0;
  *(undefined1 *)(DAT_081240d8 + param_1) = 0;
  piVar6[9] = 0;
  *(undefined1 *)(DAT_081240dc + param_1) = 0;
  *(undefined1 *)(DAT_081240e0 + param_1) = 0;
  *(undefined1 *)(DAT_081240e4 + param_1) = 0;
  *(undefined1 *)(DAT_081240e8 + param_1) = 0;
  *(undefined1 *)(DAT_081240ec + param_1) = 0;
  *(undefined1 *)(DAT_081240f0 + param_1) = 0;
  *(undefined1 *)(DAT_081240f4 + param_1) = 0;
  *(undefined1 *)(param_1 + DAT_081240f8) = 0;
  FUN_08002a88(0x8c);
  return in_lr;
}


