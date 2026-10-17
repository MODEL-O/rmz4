// undefined FUN_080bb77c(void)
// entry 0x80bb77c


undefined4 FUN_080bb77c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bb88c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar3 = DAT_080bb898;
  iVar2 = DAT_080bb894;
  iVar1 = DAT_080bb890;
  FUN_08001d30(DAT_080bb890 + DAT_080bb894,
               ((uint)*(ushort *)(DAT_080bb898 + 0x16c) -
               (uint)(*(ushort *)(DAT_080bb890 + DAT_080bb894 + 6) >> 6)) * 0x20 + 0x10000);
  iVar4 = DAT_080bb8a0;
  FUN_08002208(iVar1 + DAT_080bb89c,
               ((uint)*(ushort *)(DAT_080bb8a0 + 0x16c) - (uint)*(byte *)(iVar1 + DAT_080bb89c + 7))
               * 0x20 + 0x200);
  iVar1 = DAT_080bb8a4;
  FUN_08001d30(iVar2 + DAT_080bb8a4,
               ((uint)*(ushort *)(iVar3 + 0x1cc) -
               (uint)(*(ushort *)(iVar2 + DAT_080bb8a4 + 6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar1 + DAT_080bb89c,
               ((uint)*(ushort *)(iVar4 + 0x1cc) - (uint)*(byte *)(iVar1 + DAT_080bb89c + 7)) * 0x20
               + 0x200);
  FUN_0801cc9c(param_1);
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(undefined1 *)(param_1 + 0x25) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080bb8a8,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080bb8ac(param_1);
  return in_lr;
}


