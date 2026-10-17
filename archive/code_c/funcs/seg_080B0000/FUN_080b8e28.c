// undefined FUN_080b8e28(void)
// entry 0x80b8e28


undefined4 FUN_080b8e28(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b8f34);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar3 = DAT_080b8f40;
  iVar2 = DAT_080b8f3c;
  iVar1 = DAT_080b8f38;
  FUN_08001d30(DAT_080b8f38 + DAT_080b8f3c,
               ((uint)*(ushort *)(DAT_080b8f40 + 0x16c) -
               (uint)(*(ushort *)(DAT_080b8f38 + DAT_080b8f3c + 6) >> 6)) * 0x20 + 0x10000);
  iVar4 = DAT_080b8f48;
  FUN_08002208(iVar1 + DAT_080b8f44,
               ((uint)*(ushort *)(DAT_080b8f48 + 0x16c) - (uint)*(byte *)(iVar1 + DAT_080b8f44 + 7))
               * 0x20 + 0x200);
  iVar1 = DAT_080b8f4c;
  FUN_08001d30(iVar2 + DAT_080b8f4c,
               ((uint)*(ushort *)(iVar3 + 0x1ce) -
               (uint)(*(ushort *)(iVar2 + DAT_080b8f4c + 6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar1 + DAT_080b8f44,
               ((uint)*(ushort *)(iVar4 + 0x1ce) - (uint)*(byte *)(iVar1 + DAT_080b8f44 + 7)) * 0x20
               + 0x200);
  FUN_0801cc9c(param_1);
  *(undefined1 *)(param_1 + 0x25) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080b8f50,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080b8f54(param_1);
  return in_lr;
}


