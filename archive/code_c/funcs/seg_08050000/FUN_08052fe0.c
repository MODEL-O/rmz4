// undefined FUN_08052fe0(void)
// entry 0x8052fe0


undefined4 FUN_08052fe0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0805321c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(undefined1 *)(param_1 + 0xd) = 4;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  iVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xb8) = iVar4;
  iVar4 = FUN_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xbc) = iVar4;
  *(int *)(param_1 + 0x54) = iVar4 + DAT_08053220;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + DAT_08053224;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar6 = DAT_0805322c;
  iVar4 = DAT_08053228;
  FUN_08001d30(DAT_08053228 + 0x35c,
               ((uint)*(ushort *)(DAT_0805322c + 0x56) -
               (uint)(*(ushort *)(DAT_08053228 + 0x362) >> 6)) * 0x20 + 0x10000);
  iVar2 = DAT_08053234;
  iVar1 = DAT_08053230;
  FUN_08002208(DAT_08053230 + 0x35c,
               ((uint)*(ushort *)(DAT_08053234 + 0x56) - (uint)*(byte *)(DAT_08053230 + 0x363)) *
               0x20 + 0x200);
  FUN_08001d30(iVar4 + 800,
               ((uint)*(ushort *)(iVar6 + 0x50) - (uint)(*(ushort *)(iVar4 + 0x326) >> 6)) * 0x20 +
               0x10000);
  FUN_08002208(iVar1 + 800,
               ((uint)*(ushort *)(iVar2 + 0x50) - (uint)*(byte *)(iVar1 + 0x327)) * 0x20 + 0x200);
  FUN_08001d30(iVar4 + 0x334,
               ((uint)*(ushort *)(iVar6 + 0x52) - (uint)(*(ushort *)(iVar4 + 0x33a) >> 6)) * 0x20 +
               0x10000);
  FUN_08002208(iVar1 + 0x334,
               ((uint)*(ushort *)(iVar2 + 0x52) - (uint)*(byte *)(iVar1 + 0x33b)) * 0x20 + 0x200);
  FUN_08001d30(iVar4 + 0x30c,
               ((uint)*(ushort *)(iVar6 + 0x4e) - (uint)(*(ushort *)(iVar4 + 0x312) >> 6)) * 0x20 +
               0x10000);
  FUN_08002208(iVar1 + 0x30c,
               ((uint)*(ushort *)(iVar2 + 0x4e) - (uint)*(byte *)(iVar1 + 0x313)) * 0x20 + 0x200);
  FUN_08001d30(iVar4 + 0x280,
               ((uint)*(ushort *)(iVar6 + 0x40) - (uint)(*(ushort *)(iVar4 + 0x286) >> 6)) * 0x20 +
               0x10000);
  FUN_08002208(iVar1 + 0x280,
               ((uint)*(ushort *)(iVar2 + 0x40) - (uint)*(byte *)(iVar1 + 0x287)) * 0x20 + 0x200);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(undefined1 *)(param_1 + 0x25) = 0x1a;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  FUN_080503cc(param_1,DAT_08053238,0x40);
  iVar6 = param_1 + 0x54;
  iVar4 = FUN_080ec9e4(param_1,iVar6,0,0);
  *(int *)(param_1 + 0xc0) = iVar4;
  iVar4 = FUN_080ec440(param_1,iVar6,0,0);
  *(int *)(param_1 + 0xc4) = iVar4;
  uVar5 = FUN_080ec440(param_1,iVar6,1,0);
  *(undefined4 *)(param_1 + 200) = uVar5;
  if ((*(int *)(param_1 + 0xc0) == 0) || (*(int *)(param_1 + 0xc4) == 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0805321c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  else {
    FUN_08053250(param_1);
  }
  return in_lr;
}


