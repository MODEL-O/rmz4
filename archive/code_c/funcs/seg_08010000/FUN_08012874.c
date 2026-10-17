// undefined FUN_08012874(void)
// entry 0x8012874


undefined4 FUN_08012874(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x4c) = 0xa50;
    *(undefined4 *)(param_1 + 0x44) = 0x80;
    *(undefined4 *)(param_1 + 0x48) = 0x100;
    puVar1 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_080128ac);
    *puVar1 = (ushort)DAT_080128b0 & *puVar1 | 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


