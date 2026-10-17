// undefined FUN_0807ebb8(void)
// entry 0x807ebb8


undefined4 FUN_0807ebb8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar3 = DAT_0807ed7c;
  iVar2 = DAT_0807ed78;
  FUN_08001d30(DAT_0807ed78 + 4000,
               ((uint)*(ushort *)(DAT_0807ed7c + 400) -
               (uint)(*(ushort *)(DAT_0807ed78 + 0xfa6) >> 6)) * 0x20 + 0x10000);
  iVar4 = DAT_0807ed84;
  FUN_08002208(DAT_0807ed80 + 4000,
               ((uint)*(ushort *)(DAT_0807ed84 + 400) - (uint)*(byte *)(DAT_0807ed80 + 0xfa7)) *
               0x20 + 0x200);
  iVar1 = DAT_0807ed88;
  FUN_08001d30(DAT_0807ed88 + iVar2,
               ((uint)*(ushort *)(iVar3 + 0x192) -
               (uint)(*(ushort *)(DAT_0807ed88 + iVar2 + 6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar1 + DAT_0807ed80,
               ((uint)*(ushort *)(iVar4 + 0x192) - (uint)*(byte *)(iVar1 + DAT_0807ed80 + 7)) * 0x20
               + 0x200);
  FUN_08001d30(iVar2 + 0xf00,
               ((uint)*(ushort *)(iVar3 + 0x180) - (uint)(*(ushort *)(iVar2 + 0xf06) >> 6)) * 0x20 +
               0x10000);
  FUN_08002208(DAT_0807ed80 + 0xf00,
               ((uint)*(ushort *)(iVar4 + 0x180) - (uint)*(byte *)(DAT_0807ed80 + 0xf07)) * 0x20 +
               0x200);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0xc800);
  FUN_0801cff0(param_1);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  FUN_080503cc(param_1,DAT_0807ed8c,0x60);
  *(undefined4 *)(param_1 + 0x98) = DAT_0807ed90;
  iVar2 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar3 = FUN_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar4 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar2 = iVar2 + (iVar3 - iVar4 >> 1);
  *(int *)(param_1 + 0x54) = iVar2;
  uVar5 = FUN_08008748(iVar2,*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0xd3) = 0xff;
  *(undefined1 *)(param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0xd5) = 0xff;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  *(undefined1 *)(param_1 + 0xd7) = 0;
  uVar7 = 0;
  do {
    *(undefined1 *)(param_1 + 0xd8 + uVar7) = 0;
    FUN_08101424(param_1,uVar7 & 0xff,0);
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 5);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0807ed94);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  FUN_0807ed98(param_1);
  return in_lr;
}


