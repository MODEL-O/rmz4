// undefined FUN_080b9f24(void)
// entry 0x80b9f24


undefined4 FUN_080b9f24(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ba034);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar3 = DAT_080ba040;
  iVar2 = DAT_080ba03c;
  iVar1 = DAT_080ba038;
  FUN_08001d30(DAT_080ba038 + DAT_080ba03c,
               ((uint)*(ushort *)(DAT_080ba040 + 0x16c) -
               (uint)(*(ushort *)(DAT_080ba038 + DAT_080ba03c + 6) >> 6)) * 0x20 + 0x10000);
  iVar4 = DAT_080ba048;
  FUN_08002208(iVar1 + DAT_080ba044,
               ((uint)*(ushort *)(DAT_080ba048 + 0x16c) - (uint)*(byte *)(iVar1 + DAT_080ba044 + 7))
               * 0x20 + 0x200);
  FUN_08001d30(iVar2 + 0x1220,
               ((uint)*(ushort *)(iVar3 + 0x1d0) - (uint)(*(ushort *)(iVar2 + 0x1226) >> 6)) * 0x20
               + 0x10000);
  FUN_08002208(DAT_080ba044 + 0x1220,
               ((uint)*(ushort *)(iVar4 + 0x1d0) - (uint)*(byte *)(DAT_080ba044 + 0x1227)) * 0x20 +
               0x200);
  FUN_0801cc9c(param_1);
  *(undefined1 *)(param_1 + 0x25) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080ba04c,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080ba050(param_1);
  return in_lr;
}


