// undefined FUN_0806d978(void)
// entry 0x806d978


undefined4 FUN_0806d978(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0806dad8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  *(undefined1 *)(param_1 + 0xb4) = 0xff;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  iVar5 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xb8) = iVar5;
  iVar5 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xbc) = iVar5;
  *(int *)(param_1 + 0x54) = iVar5 + 0x6800;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + DAT_0806dadc;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  *(undefined1 *)(param_1 + 0xc3) = 1;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar1 = DAT_0806dae4;
  iVar5 = DAT_0806dae0;
  FUN_08001d30(DAT_0806dae0 + 0xaa0,
               ((uint)*(ushort *)(DAT_0806dae4 + 0x110) -
               (uint)(*(ushort *)(DAT_0806dae0 + 0xaa6) >> 6)) * 0x20 + 0x10000);
  iVar2 = DAT_0806daec;
  FUN_08002208(DAT_0806dae8 + 0xaa0,
               ((uint)*(ushort *)(DAT_0806daec + 0x110) - (uint)*(byte *)(DAT_0806dae8 + 0xaa7)) *
               0x20 + 0x200);
  iVar3 = DAT_0806daf0;
  FUN_08001d30(iVar5 + DAT_0806daf0,
               ((uint)*(ushort *)(iVar1 + 0x112) -
               (uint)(*(ushort *)(iVar5 + DAT_0806daf0 + 6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar3 + DAT_0806dae8,
               ((uint)*(ushort *)(iVar2 + 0x112) - (uint)*(byte *)(iVar3 + DAT_0806dae8 + 7)) * 0x20
               + 0x200);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  FUN_080503cc(param_1,DAT_0806daf4,0x60);
  *(undefined4 *)(param_1 + 0x98) = DAT_0806daf8;
  FUN_0806dafc(param_1);
  return in_lr;
}


