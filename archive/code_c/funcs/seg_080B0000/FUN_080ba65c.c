// undefined FUN_080ba65c(void)
// entry 0x80ba65c


undefined4 FUN_080ba65c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ba70c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_08001d30(DAT_080ba710,
               ((uint)*(ushort *)(DAT_080ba714 + 0x16c) - (uint)(*(ushort *)(DAT_080ba710 + 6) >> 6)
               ) * 0x20 + 0x10000);
  FUN_08002208(DAT_080ba718,
               ((uint)*(ushort *)(DAT_080ba71c + 0x16c) - (uint)*(byte *)(DAT_080ba718 + 7)) * 0x20
               + 0x200);
  FUN_0801cc9c(param_1);
  *(undefined1 *)(param_1 + 0x25) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080ba720,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080ba724(param_1);
  return in_lr;
}


