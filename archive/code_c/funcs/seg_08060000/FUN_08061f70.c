// undefined FUN_08061f70(void)
// entry 0x8061f70


undefined4 FUN_08061f70(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int *piVar7;
  undefined4 in_lr;
  
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(*DAT_08062030 + 0x54);
  piVar7 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08062034);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar7 + 4);
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0xb4) = 0xff;
  *(undefined1 *)(param_1 + 0xcc) = 0xff;
  *(undefined1 *)(param_1 + 0xcd) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xce) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0xcf) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(undefined1 *)(param_1 + 0x25) = 0x19;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar6 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar6 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar6;
  FUN_080503cc(param_1,*(undefined4 *)*DAT_080620e4,0x40);
  *(undefined4 *)(param_1 + 0x98) = DAT_080620e8;
  iVar3 = DAT_080620f0;
  iVar2 = DAT_080620ec;
  FUN_08001d30(DAT_080620ec + 2000,
               ((uint)*(ushort *)(DAT_080620f0 + 200) -
               (uint)(*(ushort *)(DAT_080620ec + 0x7d6) >> 6)) * 0x20 + 0x10000);
  iVar5 = DAT_080620f8;
  iVar4 = DAT_080620f4;
  FUN_08002208(DAT_080620f4 + 2000,
               ((uint)*(ushort *)(DAT_080620f8 + 200) - (uint)*(byte *)(DAT_080620f4 + 0x7d7)) *
               0x20 + 0x200);
  FUN_08001d30(iVar2 + 0x6b8,
               ((uint)*(ushort *)(iVar3 + 0xac) - (uint)(*(ushort *)(iVar2 + 0x6be) >> 6)) * 0x20 +
               0x10000);
  FUN_08002208(iVar4 + 0x6b8,
               ((uint)*(ushort *)(iVar5 + 0xac) - (uint)*(byte *)(iVar4 + 0x6bf)) * 0x20 + 0x200);
  FUN_080620fc(param_1);
  return in_lr;
}


