// undefined FUN_0806d0d8(void)
// entry 0x806d0d8


undefined4 FUN_0806d0d8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 in_lr;
  
  FUN_08001d30(DAT_0806d218,
               ((uint)*(ushort *)(DAT_0806d21c + 0x10e) - (uint)(*(ushort *)(DAT_0806d218 + 6) >> 6)
               ) * 0x20 + 0x10000);
  FUN_08002208(DAT_0806d220,
               ((uint)*(ushort *)(DAT_0806d224 + 0x10e) - (uint)*(byte *)(DAT_0806d220 + 7)) * 0x20
               + 0x200);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x8700);
  FUN_0801cff0(param_1);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  FUN_080503cc(param_1,DAT_0806d228,8);
  *(undefined4 *)(param_1 + 0x98) = DAT_0806d22c;
  iVar1 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar2 = FUN_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar3 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar1 = iVar1 + (iVar2 - iVar3 >> 1);
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = FUN_08008748(iVar1,*(undefined4 *)(param_1 + 0x58));
  iVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar3 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + (iVar2 - iVar3 >> 1);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x58);
  uVar6 = 0;
  puVar7 = (undefined4 *)(param_1 + 0xb4);
  do {
    uVar4 = FUN_080a31f8(param_1,0,uVar6 & 0xff);
    *puVar7 = uVar4;
    puVar7 = puVar7 + 1;
    FUN_080a3260(param_1,uVar4,1,uVar6 & 0xff);
    *(undefined1 *)(param_1 + 0xd4 + uVar6) = 0;
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 4);
  *(undefined1 *)(param_1 + 0xda) = 0;
  *(undefined1 *)(param_1 + 0xdb) = 0;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0806d230);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  FUN_0806d234(param_1);
  return in_lr;
}


