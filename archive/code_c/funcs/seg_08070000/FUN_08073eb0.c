// undefined FUN_08073eb0(void)
// entry 0x8073eb0


undefined4 FUN_08073eb0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 in_lr;
  
  FUN_08001d30(DAT_08074018,
               ((uint)*(ushort *)(DAT_0807401c + 0x126) - (uint)(*(ushort *)(DAT_08074018 + 6) >> 6)
               ) * 0x20 + 0x10000);
  FUN_08002208(DAT_08074020,
               ((uint)*(ushort *)(DAT_08074024 + 0x126) - (uint)*(byte *)(DAT_08074020 + 7)) * 0x20
               + 0x200);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x9300);
  FUN_0801cff0(param_1);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  FUN_080503cc(param_1,DAT_08074028,0x60);
  *(undefined4 *)(param_1 + 0x98) = DAT_0807402c;
  iVar1 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar2 = FUN_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar3 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar1 = iVar1 + (iVar2 - iVar3 >> 1);
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = FUN_08008748(iVar1,*(undefined4 *)(param_1 + 0x58));
  iVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar3 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + (iVar2 - iVar3 >> 1);
  iVar1 = *(int *)(param_1 + 0x54) + 0x3000;
  *(int *)(param_1 + 0x54) = iVar1;
  *(int *)(param_1 + 0xb4) = iVar1;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined2 *)(param_1 + 0xc0) = 0x2000;
  *(undefined2 *)(param_1 + 0xc2) = 0x2000;
  *(undefined2 *)(param_1 + 0xc4) = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0;
  *(undefined2 *)(param_1 + 200) = 0;
  *(undefined2 *)(param_1 + 0xca) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  *(undefined1 *)(param_1 + 0xe2) = 0;
  uVar5 = 0;
  do {
    FUN_080a8f00(param_1,uVar5,0);
    *(undefined1 *)(param_1 + 0xcc + uVar5) = 0;
    *(undefined1 *)(param_1 + 0xd4 + uVar5) = 0;
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 8);
  *(undefined1 *)(param_1 + 0xe3) = 8;
  *(undefined1 *)(param_1 + 0xde) = 0;
  *(undefined1 *)(param_1 + 0xdf) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08074030);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  FUN_08074034(param_1);
  return in_lr;
}


