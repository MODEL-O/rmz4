// undefined FUN_08110f8c(void)
// entry 0x8110f8c


undefined4 FUN_08110f8c(int param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 *local_28;
  undefined2 local_24;
  
  uVar2 = DAT_08111188;
  local_30 = param_1 + 0x14;
  local_2c = param_1 + 0x220;
  local_28 = (undefined4 *)(param_1 + 0x22c);
  iVar6 = FUN_08002bb4(DAT_08111188);
  if (iVar6 != 0) {
    FUN_08002b5c(uVar2);
  }
  iVar6 = FUN_08002bb4(0x82);
  if (iVar6 != 0) {
    FUN_08002b5c(0x82);
  }
  uVar2 = DAT_0811118c;
  iVar6 = FUN_08002bb4(DAT_0811118c);
  if (iVar6 != 0) {
    FUN_08002b5c(uVar2);
  }
  iVar6 = FUN_08002bb4(0xb3);
  if (iVar6 != 0) {
    FUN_08002b5c(0xb3);
  }
  iVar6 = FUN_08002bb4(0x1a6);
  if (iVar6 != 0) {
    FUN_08002b5c(0x1a6);
  }
  uVar2 = DAT_08111190;
  iVar6 = FUN_08002bb4(DAT_08111190);
  if (iVar6 != 0) {
    FUN_08002b5c(uVar2);
  }
  puVar1 = DAT_08111198;
  FUN_08001fd4(DAT_08111194,(*DAT_08111198 & 0x1f00) << 3,0x580,0x3c0);
  puVar3 = DAT_0811119c;
  *DAT_0811119c = 0;
  *(undefined1 *)(puVar3 + 7) = 0xff;
  *DAT_081111a0 = 0;
  local_24 = 0;
  puVar1[-2] = (ushort)DAT_081111a4 & puVar1[-2] & (ushort)DAT_081111a8 | 0x4f00;
  *puVar1 = 6;
  puVar1[1] = (ushort)DAT_081111ac;
  FUN_08001d30(DAT_081111b0,0x4000);
  FUN_08002208(DAT_081111b4,0);
  uVar2 = DAT_081111b8;
  local_38 = 0;
  FUN_08128be0(&local_38,(puVar1[1] & 0x1f00) * 8 + 0x6000000,DAT_081111b8);
  uVar4 = DAT_081111bc;
  FUN_08002734(0x12,DAT_081111bc,3,0,0xe);
  puVar1[6] = 8;
  puVar1[7] = 0;
  puVar1[2] = (ushort)DAT_081111c0;
  FUN_08001d30(DAT_081111c4,0x4000);
  FUN_08002208(DAT_081111c8,0);
  local_34 = 0;
  FUN_08128be0(&local_34,(puVar1[2] & 0x1f00) * 8 + 0x6000000,uVar2);
  FUN_08002734(0x24,uVar4,2,0,0);
  puVar1[8] = 0;
  uVar5 = DAT_081111cc;
  puVar1[9] = 0;
  puVar1[3] = (ushort)DAT_081111cc;
  local_34 = 0;
  FUN_08128be0(&local_34,(uVar5 & 0x1f00) * 8 + 0x6000000,uVar2);
  FUN_08002734(0x38,uVar4,4,0,0);
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  FUN_08003384(local_30);
  FUN_08002c0c(local_2c,local_28,0,0);
  FUN_080033bc(local_30,local_2c);
  *local_28 = 0x7800;
  local_28[1] = 0x5000;
  FUN_0801c734();
  *DAT_081111d0 = 0;
  FUN_0800249c(0x89,0x1a0);
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 7) = (undefined1)local_24;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 5) * 4 + DAT_081111d4));
  return in_lr;
}


