// undefined FUN_08125314(void)
// entry 0x8125314


undefined4 FUN_08125314(int param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 in_lr;
  int local_28 [2];
  
  puVar5 = (undefined4 *)(param_1 + DAT_081255bc);
  *puVar5 = 0x16800;
  puVar5[1] = 0xf000;
  FUN_08006a94(0x17);
  puVar1 = DAT_081255c4;
  iVar4 = DAT_081255c0;
  FUN_08001d30(DAT_081255c0,
               ((uint)*DAT_081255c4 - (uint)(*(ushort *)(DAT_081255c0 + 6) >> 6)) * 0x20 + 0x10000);
  puVar2 = DAT_081255c8;
  FUN_08002208(DAT_081255cc,((uint)*DAT_081255c8 - (uint)*(byte *)(DAT_081255cc + 7)) * 0x20 + 0x200
              );
  FUN_08001d30(iVar4 + 0x14,
               ((uint)puVar1[1] - (uint)(*(ushort *)(iVar4 + 0x1a) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_081255cc + 0x14,
               ((uint)puVar2[1] - (uint)*(byte *)(DAT_081255cc + 0x1b)) * 0x20 + 0x200);
  FUN_08001d30(iVar4 + 0x28,
               ((uint)puVar1[2] - (uint)(*(ushort *)(iVar4 + 0x2e) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_081255cc + 0x28,
               ((uint)puVar2[2] - (uint)*(byte *)(DAT_081255cc + 0x2f)) * 0x20 + 0x200);
  FUN_08001d30(iVar4 + 0x50,
               ((uint)puVar1[4] - (uint)(*(ushort *)(iVar4 + 0x56) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_081255cc + 0x50,
               ((uint)puVar2[4] - (uint)*(byte *)(DAT_081255cc + 0x57)) * 0x20 + 0x200);
  FUN_08001d30(iVar4 + 100,
               ((uint)puVar1[5] - (uint)(*(ushort *)(iVar4 + 0x6a) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_081255cc + 100,
               ((uint)puVar2[5] - (uint)*(byte *)(DAT_081255cc + 0x6b)) * 0x20 + 0x200);
  puVar1[0xc6] = 0x200;
  puVar2[0xc6] = 4;
  FUN_08001d30(iVar4 + 0xf78,(0x200 - (uint)(*(ushort *)(iVar4 + 0xf7e) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_081255cc + 0xf78,
               ((uint)puVar2[0xc6] - (uint)*(byte *)(DAT_081255cc + 0xf7f)) * 0x20 + 0x200);
  puVar1[0xf7] = (ushort)DAT_081255d0;
  puVar2[0xf7] = 10;
  FUN_08001d30(iVar4 + 0x134c,
               ((uint)puVar1[0xf7] - (uint)(*(ushort *)(iVar4 + 0x1352) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_081255cc + 0x134c,
               ((uint)puVar2[0xf7] - (uint)*(byte *)(DAT_081255cc + 0x1353)) * 0x20 + 0x200);
  puVar1[0x67] = 0x3a8;
  puVar2[0x67] = 10;
  iVar3 = DAT_081255d4;
  FUN_08001d30(DAT_081255d4 + iVar4,
               (0x3a8 - (uint)(*(ushort *)(DAT_081255d4 + iVar4 + 6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar3 + DAT_081255cc,
               ((uint)puVar2[0x67] - (uint)*(byte *)(iVar3 + DAT_081255cc + 7)) * 0x20 + 0x200);
  local_28[0] = 0x16800;
  local_28[1] = 0xdc00;
  iVar4 = FUN_0802f190(local_28);
  piVar6 = (int *)(param_1 + DAT_081255d8);
  *piVar6 = iVar4;
  FUN_0802cbec(iVar4,0,0,DAT_081255dc,DAT_081255dc);
  iVar4 = *piVar6;
  *DAT_081255e0 = iVar4;
  FUN_080382b0(iVar4,DAT_081255e4);
  *(undefined1 *)(*piVar6 + 0x4c) = 1;
  *(byte *)(*piVar6 + 0x4a) = *(byte *)(*piVar6 + 0x4a) | 0x10;
  *(byte *)(*piVar6 + 10) = *(byte *)(*piVar6 + 10) | 0x10;
  piVar6[2] = 0;
  piVar6[3] = 0;
  piVar6[4] = *(int *)(DAT_081255e8 + 0x2c);
  piVar6[5] = 0xe10;
  *(undefined1 *)(piVar6 + 6) = 0;
  *(undefined1 *)((int)piVar6 + 0x19) = 0;
  *(undefined1 *)((int)piVar6 + 0x1a) = 0;
  *(undefined1 *)((int)piVar6 + 0x1b) = 0;
  *(undefined1 *)(piVar6 + 7) = 0;
  *(undefined1 *)((int)piVar6 + 0x1d) = 0;
  *(undefined1 *)((int)piVar6 + 0x1e) = 0;
  *(undefined1 *)((int)piVar6 + 0x1f) = 0;
  *(undefined1 *)(param_1 + DAT_081255ec) = 0;
  iVar4 = DAT_081255f0;
  *(undefined1 *)(param_1 + DAT_081255f0) = 0;
  *(undefined1 *)(param_1 + iVar4 + 1) = 0;
  *(undefined1 *)(param_1 + DAT_081255f4) = 0;
  local_28[0] = local_28[0] + 0x3200;
  FUN_080b97d0(local_28,param_1);
  piVar6[10] = local_28[0];
  piVar6[9] = piVar6[9] & 0xfffffff8;
  FUN_08002a88(0x8a);
  return in_lr;
}


