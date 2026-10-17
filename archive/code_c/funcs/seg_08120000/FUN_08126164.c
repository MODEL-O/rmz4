// undefined FUN_08126164(void)
// entry 0x8126164


undefined4 FUN_08126164(int param_1)

{
  ushort *puVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 in_lr;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int *local_24;
  
  local_24 = (int *)(param_1 + DAT_081264f4);
  *local_24 = 0x16800;
  local_24[1] = 0xf000;
  local_28 = param_1;
  FUN_08006a94(0x19,local_24);
  puVar1 = DAT_081264fc;
  iVar5 = DAT_081264f8;
  FUN_08001d30(DAT_081264f8,
               ((uint)*DAT_081264fc - (uint)(*(ushort *)(DAT_081264f8 + 6) >> 6)) * 0x20 + 0x10000);
  puVar3 = DAT_08126504;
  iVar2 = DAT_08126500;
  FUN_08002208(DAT_08126500,((uint)*DAT_08126504 - (uint)*(byte *)(DAT_08126500 + 7)) * 0x20 + 0x200
              );
  FUN_08001d30(iVar5 + 0x14,
               ((uint)puVar1[1] - (uint)(*(ushort *)(iVar5 + 0x1a) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar2 + 0x14,((uint)puVar3[1] - (uint)*(byte *)(iVar2 + 0x1b)) * 0x20 + 0x200);
  FUN_08001d30(iVar5 + 0x28,
               ((uint)puVar1[2] - (uint)(*(ushort *)(iVar5 + 0x2e) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar2 + 0x28,((uint)puVar3[2] - (uint)*(byte *)(iVar2 + 0x2f)) * 0x20 + 0x200);
  FUN_08001d30(iVar5 + 0x50,
               ((uint)puVar1[4] - (uint)(*(ushort *)(iVar5 + 0x56) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar2 + 0x50,((uint)puVar3[4] - (uint)*(byte *)(iVar2 + 0x57)) * 0x20 + 0x200);
  FUN_08001d30(iVar5 + 100,
               ((uint)puVar1[5] - (uint)(*(ushort *)(iVar5 + 0x6a) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar2 + 100,((uint)puVar3[5] - (uint)*(byte *)(iVar2 + 0x6b)) * 0x20 + 0x200);
  puVar1[0xf6] = 0x200;
  puVar3[0xf6] = 4;
  FUN_08001d30(iVar5 + 0x1338,(0x200 - (uint)(*(ushort *)(iVar5 + 0x133e) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar2 + 0x1338,((uint)puVar3[0xf6] - (uint)*(byte *)(iVar2 + 0x133f)) * 0x20 + 0x200)
  ;
  puVar1[0x43] = 600;
  puVar3[0x43] = 9;
  iVar4 = DAT_08126508;
  FUN_08001d30(DAT_08126508 + iVar5,
               (600 - (uint)(*(ushort *)(DAT_08126508 + iVar5 + 6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar4 + iVar2,
               ((uint)puVar3[0x43] - (uint)*(byte *)(iVar4 + iVar2 + 7)) * 0x20 + 0x200);
  puVar1[0xf7] = (ushort)DAT_0812650c;
  puVar3[0xf7] = 10;
  FUN_08001d30(iVar5 + 0x134c,
               ((uint)puVar1[0xf7] - (uint)(*(ushort *)(iVar5 + 0x1352) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar2 + 0x134c,((uint)puVar3[0xf7] - (uint)*(byte *)(iVar2 + 0x1353)) * 0x20 + 0x200)
  ;
  puVar1[0x67] = 0x3a8;
  puVar3[0x67] = 10;
  iVar4 = DAT_08126510;
  FUN_08001d30(DAT_08126510 + iVar5,
               (0x3a8 - (uint)(*(ushort *)(DAT_08126510 + iVar5 + 6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar4 + iVar2,
               ((uint)puVar3[0x67] - (uint)*(byte *)(iVar4 + iVar2 + 7)) * 0x20 + 0x200);
  local_30 = 0x16800;
  local_2c = 0xdc00;
  iVar5 = FUN_0802f190(&local_30);
  piVar6 = (int *)(local_28 + DAT_08126514);
  *piVar6 = iVar5;
  FUN_0802cbec(iVar5,*local_24 + DAT_08126518,0,*local_24 + 0x2000,DAT_0812651c);
  *DAT_08126520 = *piVar6;
  iVar5 = DAT_08126524;
  FUN_080382b0();
  *(undefined1 *)(*piVar6 + 0x4c) = 1;
  *(byte *)(*piVar6 + 0x4a) = *(byte *)(*piVar6 + 0x4a) | 0x10;
  *(byte *)(*piVar6 + 10) = *(byte *)(*piVar6 + 10) | 0x10;
  piVar6[2] = 0;
  piVar6[3] = 0;
  piVar6[4] = *(int *)(DAT_08126528 + 0x34);
  piVar6[5] = DAT_0812652c;
  *(undefined1 *)(piVar6 + 6) = 0;
  *(undefined1 *)((int)piVar6 + 0x19) = 0;
  *(undefined1 *)((int)piVar6 + 0x1a) = 0;
  *(undefined1 *)((int)piVar6 + 0x1b) = 0;
  *(undefined1 *)(piVar6 + 7) = 0;
  *(undefined1 *)((int)piVar6 + 0x1d) = 0;
  *(undefined1 *)((int)piVar6 + 0x1e) = 0;
  *(undefined1 *)((int)piVar6 + 0x1f) = 0;
  *(undefined1 *)(local_28 + DAT_08126530) = 0;
  *(undefined1 *)(local_28 + DAT_08126534) = 0;
  *(undefined1 *)(local_28 + DAT_08126538) = 0;
  *(undefined1 *)(local_28 + DAT_0812653c) = 0;
  piVar6[9] = 0;
  piVar6[10] = 0;
  piVar6[0xb] = 0;
  piVar6[0xc] = 0;
  iVar4 = DAT_08126544;
  iVar2 = DAT_08126540;
  puVar8 = (uint *)(iVar5 + -0xdc);
  uVar7 = *puVar8 * DAT_08126540 + DAT_08126544;
  *puVar8 = uVar7;
  iVar5 = FUN_08129198(uVar7 >> 0x10,5);
  piVar6[0xd] = iVar5 << 8;
  uVar7 = uVar7 * iVar2 + iVar4;
  *puVar8 = uVar7;
  iVar5 = FUN_08129198(uVar7 >> 0x10,5);
  piVar6[0xe] = iVar5 << 8;
  piVar6[0xf] = 0;
  piVar6[0x10] = 0;
  piVar6[0x11] = 0;
  piVar6[0x12] = 0;
  piVar6[0x13] = 0xff;
  piVar6[0x14] = 0xff;
  piVar6[0x15] = 0;
  piVar6[0x16] = 0;
  piVar6[0x17] = 0;
  piVar6[0x18] = 0;
  piVar6[0x19] = 0;
  piVar6[0x1a] = 0xff;
  piVar6[0x1b] = 0;
  piVar6[0x1c] = 0;
  FUN_081266fc(local_28);
  FUN_081078d0(local_24,0x200,local_28);
  FUN_080e8610(local_24,0x500,0);
  FUN_080e8610(local_24,0x600,0);
  FUN_080e8610(local_24,DAT_08126548,0);
  FUN_08002a88(0x91);
  return in_lr;
}


