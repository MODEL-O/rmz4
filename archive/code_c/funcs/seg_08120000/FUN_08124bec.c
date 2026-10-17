// undefined FUN_08124bec(void)
// entry 0x8124bec


undefined4 FUN_08124bec(int param_1)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 in_lr;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  puVar7 = (undefined4 *)(param_1 + DAT_08124ea0);
  *puVar7 = 0x16800;
  puVar7[1] = 0xf000;
  local_24 = param_1;
  FUN_08006a94(0x16);
  puVar2 = DAT_08124ea8;
  iVar1 = DAT_08124ea4;
  FUN_08001d30(DAT_08124ea4,
               ((uint)*DAT_08124ea8 - (uint)(*(ushort *)(DAT_08124ea4 + 6) >> 6)) * 0x20 + 0x10000);
  puVar4 = DAT_08124eb0;
  iVar3 = DAT_08124eac;
  FUN_08002208(DAT_08124eac,((uint)*DAT_08124eb0 - (uint)*(byte *)(DAT_08124eac + 7)) * 0x20 + 0x200
              );
  FUN_08001d30(iVar1 + 0x14,
               ((uint)puVar2[1] - (uint)(*(ushort *)(iVar1 + 0x1a) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar3 + 0x14,((uint)puVar4[1] - (uint)*(byte *)(iVar3 + 0x1b)) * 0x20 + 0x200);
  FUN_08001d30(iVar1 + 0x28,
               ((uint)puVar2[2] - (uint)(*(ushort *)(iVar1 + 0x2e) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar3 + 0x28,((uint)puVar4[2] - (uint)*(byte *)(iVar3 + 0x2f)) * 0x20 + 0x200);
  FUN_08001d30(iVar1 + 0x50,
               ((uint)puVar2[4] - (uint)(*(ushort *)(iVar1 + 0x56) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar3 + 0x50,((uint)puVar4[4] - (uint)*(byte *)(iVar3 + 0x57)) * 0x20 + 0x200);
  FUN_08001d30(iVar1 + 100,
               ((uint)puVar2[5] - (uint)(*(ushort *)(iVar1 + 0x6a) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar3 + 100,((uint)puVar4[5] - (uint)*(byte *)(iVar3 + 0x6b)) * 0x20 + 0x200);
  puVar2[0xbd] = 0x200;
  puVar4[0xbd] = 4;
  FUN_08001d30(iVar1 + 0xec4,(0x200 - (uint)(*(ushort *)(iVar1 + 0xeca) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar3 + 0xec4,((uint)puVar4[0xbd] - (uint)*(byte *)(iVar3 + 0xecb)) * 0x20 + 0x200);
  puVar2[0x48] = 0x264;
  puVar4[0x48] = 5;
  FUN_08001d30(iVar1 + 0x5a0,(0x264 - (uint)(*(ushort *)(iVar1 + 0x5a6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar3 + 0x5a0,((uint)puVar4[0x48] - (uint)*(byte *)(iVar3 + 0x5a7)) * 0x20 + 0x200);
  iVar8 = DAT_08124eb4;
  puVar2[0xf7] = (ushort)DAT_08124eb4;
  puVar4[0xf7] = 10;
  iVar5 = iVar8 + 0xf77 + iVar1;
  FUN_08001d30(iVar5,((uint)puVar2[0xf7] - (uint)(*(ushort *)(iVar5 + 6) >> 6)) * 0x20 + 0x10000);
  iVar8 = iVar8 + 0xf77 + iVar3;
  FUN_08002208(iVar8,((uint)puVar4[0xf7] - (uint)*(byte *)(iVar8 + 7)) * 0x20 + 0x200);
  puVar2[0x67] = 0x3a8;
  puVar4[0x67] = 10;
  iVar8 = DAT_08124eb8;
  FUN_08001d30(DAT_08124eb8 + iVar1,
               (0x3a8 - (uint)(*(ushort *)(DAT_08124eb8 + iVar1 + 6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar8 + iVar3,
               ((uint)puVar4[0x67] - (uint)*(byte *)(iVar8 + iVar3 + 7)) * 0x20 + 0x200);
  local_2c = 0x16800;
  local_28 = 0xdc00;
  uVar6 = FUN_0802f190(&local_2c);
  puVar7 = (undefined4 *)(local_24 + DAT_08124ebc);
  *puVar7 = uVar6;
  FUN_0802cbec(uVar6,0,0,DAT_08124ec0,DAT_08124ec0);
  uVar6 = *puVar7;
  *DAT_08124ec4 = uVar6;
  FUN_080382b0(uVar6,DAT_08124ec8);
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = *(undefined4 *)(DAT_08124ecc + 0x28);
  puVar7[5] = 0xe10;
  *(undefined1 *)(puVar7 + 6) = 0;
  *(undefined1 *)((int)puVar7 + 0x19) = 0;
  *(undefined1 *)((int)puVar7 + 0x1a) = 0;
  *(undefined1 *)((int)puVar7 + 0x1b) = 0;
  *(undefined1 *)(puVar7 + 7) = 0;
  *(undefined1 *)((int)puVar7 + 0x1d) = 0;
  *(undefined1 *)((int)puVar7 + 0x1e) = 0;
  *(undefined1 *)((int)puVar7 + 0x1f) = 0;
  *(undefined1 *)(local_24 + DAT_08124ed0) = 0;
  *(undefined1 *)(local_24 + DAT_08124ed4) = 0;
  *(undefined1 *)(local_24 + DAT_08124ed8) = 0;
  *(undefined1 *)(local_24 + DAT_08124edc) = 0;
  puVar7[9] = 0;
  puVar7[10] = 1;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  FUN_08002a88(0x85);
  return in_lr;
}


