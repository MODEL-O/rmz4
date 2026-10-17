// undefined FUN_08122e94(void)
// entry 0x8122e94


undefined4 FUN_08122e94(int param_1)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 in_lr;
  
  iVar4 = DAT_08123068 + param_1;
  *(undefined2 *)(param_1 + DAT_0812306c + 2) = 0;
  uVar1 = DAT_0812307c;
  puVar6 = (undefined4 *)(DAT_08123070 + DAT_08123074);
  *(undefined4 *)(DAT_08123070 + DAT_08123078) = DAT_0812307c;
  *puVar6 = uVar1;
  FUN_08038108(param_1 + DAT_08123080,*(undefined1 *)(param_1 + 1));
  puVar2 = DAT_08123084;
  puVar5 = (undefined1 *)(DAT_08123088 + (int)DAT_08123084);
  *puVar5 = 0x20;
  puVar8 = (undefined1 *)((int)puVar2 + DAT_0812308c);
  *puVar8 = 0x20;
  *(undefined1 *)(puVar2 + 0x200) = 0x20;
  *(undefined4 *)(puVar2 + 0x204) = 0;
  FUN_08002348();
  *DAT_08123090 = 0;
  puVar3 = DAT_08123094;
  *DAT_08123094 = 0;
  *(undefined1 *)(puVar3 + 7) = 0xff;
  *DAT_08123098 = 0;
  *puVar2 = 0;
  *puVar5 = 0;
  *puVar8 = 0;
  *(undefined1 *)(puVar2 + 0x200) = 0;
  *DAT_0812309c = (ushort)DAT_081230a0 & *DAT_0812309c & (ushort)DAT_081230a4 | 0x100;
  puVar6 = (undefined4 *)(DAT_081230a8 + param_1);
  *puVar6 = 0xffffffff;
  *(undefined2 *)(param_1 + DAT_081230ac) = 0;
  FUN_08002c0c(iVar4,param_1 + DAT_081230b0,0,0);
  FUN_08003384(param_1 + 0x9a0);
  FUN_080033bc(param_1 + 0x9a0,iVar4);
  FUN_080055f4();
  FUN_0801c734();
  *DAT_081230b4 = (uint)*(ushort *)(param_1 + DAT_081230b8);
  *DAT_081230bc = 0xffffffff;
  *DAT_081230c0 = puVar6;
  puVar7 = (undefined4 *)(param_1 + DAT_08123074);
  *DAT_081230c4 = *puVar7;
  FUN_0802b400(param_1 + 0x810,DAT_0812307c,1,puVar6,puVar7);
  FUN_0803a72c(param_1 + DAT_081230c8,DAT_081230cc,0x18);
  FUN_0807f87c(param_1 + DAT_081230d0,DAT_081230d4,0x12);
  FUN_080bd2fc(param_1 + 0x8b0,DAT_081230d8,0x18);
  FUN_080d0b78(param_1 + DAT_081230dc,DAT_081230e0,0x40);
  FUN_080e94dc(param_1 + 0x900,DAT_081230e4,0x16);
  FUN_08108324(param_1 + DAT_081230e8,DAT_081230ec,10);
  iVar4 = DAT_08123070 + 0x10;
  FUN_0810de70(iVar4);
  FUN_0810e480(iVar4);
  *(undefined4 *)(puVar2 + 0x1de) = 0xffffffff;
  *(undefined4 *)(puVar2 + 0x1dc) = 0xffffffff;
  *(undefined4 *)(puVar2 + 0x1da) = 0xffffffff;
  *(undefined4 *)(puVar2 + 0x1d8) = 0xffffffff;
  *DAT_081230f0 = 0xffffffff;
  *(undefined4 *)(puVar2 + 0x1d4) = 0xffffffff;
  *DAT_081230f4 = 0xffffffff;
  *(undefined4 *)(puVar2 + 0x1d0) = 0xffffffff;
  *(undefined1 *)(DAT_081230f8 + 0x38) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 1) * 4 + DAT_081230fc));
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 6) = 1;
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  return in_lr;
}


