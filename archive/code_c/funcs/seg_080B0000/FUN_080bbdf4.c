// undefined FUN_080bbdf4(void)
// entry 0x80bbdf4


undefined4 FUN_080bbdf4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bbea8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_08001d30(DAT_080bbeac,
               ((uint)*(ushort *)(DAT_080bbeb0 + 0x16c) - (uint)(*(ushort *)(DAT_080bbeac + 6) >> 6)
               ) * 0x20 + 0x10000);
  FUN_08002208(DAT_080bbeb4,
               ((uint)*(ushort *)(DAT_080bbeb8 + 0x16c) - (uint)*(byte *)(DAT_080bbeb4 + 7)) * 0x20
               + 0x200);
  FUN_0801cc9c(param_1);
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(undefined1 *)(param_1 + 0x25) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080bbebc,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080bbec0(param_1);
  return in_lr;
}


