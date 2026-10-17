// undefined FUN_08103b74(void)
// entry 0x8103b74


undefined4 FUN_08103b74(int param_1)

{
  int *piVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && ((*(byte *)(param_1 + 0x97) & 0xf) == 8)) {
    *(undefined2 *)(DAT_08103bfc + 0x1c4) = 0x1e0;
    puVar2 = (ushort *)(DAT_08103c00 + 0x1c4);
    *puVar2 = 10;
    FUN_08001d30(DAT_08103c04 + 0x11a8,
                 (0x1e0 - (uint)(*(ushort *)(DAT_08103c04 + 0x11ae) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_08103c08 + 0x11a8,
                 ((uint)*puVar2 - (uint)*(byte *)(DAT_08103c08 + 0x11af)) * 0x20 + 0x200);
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08103c0c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_08103c10(param_1);
  }
  return in_lr;
}


