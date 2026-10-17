// undefined FUN_08123530(void)
// entry 0x8123530


undefined4 FUN_08123530(int param_1)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 in_lr;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  puVar7 = (undefined4 *)(param_1 + DAT_08123888);
  *puVar7 = 0x16800;
  puVar7[1] = 0xf000;
  local_24 = param_1;
  FUN_08006a94(0x13);
  puVar2 = DAT_08123890;
  iVar1 = DAT_0812388c;
  FUN_08001d30(DAT_0812388c,
               ((uint)*DAT_08123890 - (uint)(*(ushort *)(DAT_0812388c + 6) >> 6)) * 0x20 + 0x10000);
  puVar4 = DAT_08123898;
  iVar3 = DAT_08123894;
  FUN_08002208(DAT_08123894,((uint)*DAT_08123898 - (uint)*(byte *)(DAT_08123894 + 7)) * 0x20 + 0x200
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
  puVar2[0xec] = 0x200;
  puVar4[0xec] = 4;
  FUN_08001d30(iVar1 + 0x1270,(0x200 - (uint)(*(ushort *)(iVar1 + 0x1276) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar3 + 0x1270,((uint)puVar4[0xec] - (uint)*(byte *)(iVar3 + 0x1277)) * 0x20 + 0x200)
  ;
  puVar2[0xed] = 0x250;
  puVar4[0xed] = 5;
  FUN_08001d30(iVar1 + 0x1284,(0x250 - (uint)(*(ushort *)(iVar1 + 0x128a) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar3 + 0x1284,((uint)puVar4[0xed] - (uint)*(byte *)(iVar3 + 0x128b)) * 0x20 + 0x200)
  ;
  puVar2[0xb2] = 0x28c;
  puVar4[0xb2] = 6;
  FUN_08001d30(iVar1 + 0xde8,(0x28c - (uint)(*(ushort *)(iVar1 + 0xdee) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar3 + 0xde8,((uint)puVar4[0xb2] - (uint)*(byte *)(iVar3 + 0xdef)) * 0x20 + 0x200);
  puVar2[0xeb] = 0x32c;
  puVar4[0xeb] = 7;
  FUN_08001d30(iVar1 + 0x125c,(0x32c - (uint)(*(ushort *)(iVar1 + 0x1262) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar3 + 0x125c,((uint)puVar4[0xeb] - (uint)*(byte *)(iVar3 + 0x1263)) * 0x20 + 0x200)
  ;
  puVar2[0xf7] = (ushort)DAT_0812389c;
  puVar4[0xf7] = 10;
  FUN_08001d30(iVar1 + 0x134c,
               ((uint)puVar2[0xf7] - (uint)(*(ushort *)(iVar1 + 0x1352) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar3 + 0x134c,((uint)puVar4[0xf7] - (uint)*(byte *)(iVar3 + 0x1353)) * 0x20 + 0x200)
  ;
  puVar2[0x67] = 0x3a8;
  puVar4[0x67] = 10;
  iVar5 = DAT_081238a0;
  FUN_08001d30(DAT_081238a0 + iVar1,
               (0x3a8 - (uint)(*(ushort *)(DAT_081238a0 + iVar1 + 6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar5 + iVar3,
               ((uint)puVar4[0x67] - (uint)*(byte *)(iVar5 + iVar3 + 7)) * 0x20 + 0x200);
  FUN_0800249c(0xdd,0x2c0);
  FUN_080025d8(0xdd);
  FUN_08002624(0xdd);
  local_2c = 0x16800;
  local_28 = 0xdc00;
  uVar6 = FUN_0802f190(&local_2c);
  puVar7 = (undefined4 *)(local_24 + DAT_081238a4);
  *puVar7 = uVar6;
  FUN_0802cbec(uVar6,0,0,DAT_081238a8,DAT_081238a8);
  uVar6 = *puVar7;
  *DAT_081238ac = uVar6;
  FUN_080382b0(uVar6,DAT_081238b0);
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = *(undefined4 *)(DAT_081238b4 + 0x1c);
  puVar7[5] = 0xe10;
  *(undefined1 *)(puVar7 + 6) = 0;
  *(undefined1 *)((int)puVar7 + 0x19) = 0;
  *(undefined1 *)((int)puVar7 + 0x1a) = 0;
  *(undefined1 *)((int)puVar7 + 0x1b) = 0;
  *(undefined1 *)(puVar7 + 7) = 0;
  *(undefined1 *)((int)puVar7 + 0x1d) = 0;
  *(undefined1 *)((int)puVar7 + 0x1e) = 0;
  *(undefined1 *)((int)puVar7 + 0x1f) = 0;
  *(undefined1 *)(local_24 + DAT_081238b8) = 0;
  *(undefined1 *)(local_24 + DAT_081238bc) = 0;
  *(undefined1 *)(local_24 + DAT_081238c0) = 0;
  *(undefined1 *)(local_24 + DAT_081238c4) = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xd] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  FUN_08002a88(0x88);
  return in_lr;
}


