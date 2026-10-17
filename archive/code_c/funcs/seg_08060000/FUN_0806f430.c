// undefined FUN_0806f430(void)
// entry 0x806f430


undefined4 FUN_0806f430(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar1 = DAT_0806f5cc;
  iVar7 = DAT_0806f5c8;
  iVar4 = DAT_0806f5c4;
  FUN_08001d30(DAT_0806f5c4 + DAT_0806f5c8,
               ((uint)*(ushort *)(DAT_0806f5cc + 0x11a) -
               (uint)(*(ushort *)(DAT_0806f5c4 + DAT_0806f5c8 + 6) >> 6)) * 0x20 + 0x10000);
  iVar2 = DAT_0806f5d4;
  FUN_08002208(iVar4 + DAT_0806f5d0,
               ((uint)*(ushort *)(DAT_0806f5d4 + 0x11a) - (uint)*(byte *)(iVar4 + DAT_0806f5d0 + 7))
               * 0x20 + 0x200);
  iVar4 = DAT_0806f5d8;
  iVar3 = DAT_0806f5d8 + iVar7;
  FUN_08001d30(iVar3,((uint)*(ushort *)(iVar1 + 0x11c) - (uint)(*(ushort *)(iVar3 + 6) >> 6)) * 0x20
                     + 0x10000);
  FUN_08002208(iVar4 + DAT_0806f5d0,
               ((uint)*(ushort *)(iVar2 + 0x11c) - (uint)*(byte *)(iVar4 + DAT_0806f5d0 + 7)) * 0x20
               + 0x200);
  iVar4 = DAT_0806f5dc;
  iVar7 = iVar7 + DAT_0806f5dc;
  FUN_08001d30(iVar7,((uint)*(ushort *)(iVar1 + 0x11e) - (uint)(*(ushort *)(iVar7 + 6) >> 6)) * 0x20
                     + 0x10000);
  FUN_08002208(iVar4 + DAT_0806f5d0,
               ((uint)*(ushort *)(iVar2 + 0x11e) - (uint)*(byte *)(iVar4 + DAT_0806f5d0 + 7)) * 0x20
               + 0x200);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x8d00);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  FUN_080503cc(param_1,DAT_0806f5e0,0x60);
  *(undefined4 *)(param_1 + 0x98) = DAT_0806f5e4;
  iVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xc4) = iVar4;
  *(int *)(param_1 + 0x58) = iVar4 + DAT_0806f5e8;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0xcd) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  *(undefined1 *)(param_1 + 0xca) = 0;
  *(undefined1 *)(param_1 + 0xcb) = 0;
  uVar5 = FUN_080a7b2c(param_1,0,0);
  *(undefined4 *)(param_1 + 0xbc) = uVar5;
  uVar5 = FUN_080a7b2c(param_1,0,1);
  *(undefined4 *)(param_1 + 0xc0) = uVar5;
  FUN_080a8824(param_1,*(undefined4 *)(param_1 + 0xbc),0);
  FUN_080a8824(param_1,*(undefined4 *)(param_1 + 0xc0),1);
  piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0806f5ec);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 4);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  FUN_0806f608(param_1);
  return in_lr;
}


