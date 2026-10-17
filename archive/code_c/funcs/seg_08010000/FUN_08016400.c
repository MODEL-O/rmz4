// undefined FUN_08016400(void)
// entry 0x8016400


undefined4 FUN_08016400(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_0801643c);
    *puVar1 = (ushort)DAT_08016440 & *puVar1 | 2;
    *(undefined4 *)(param_1 + 0x4c) = 0x78;
    *(undefined4 *)(param_1 + 0x50) = 200;
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(undefined4 *)(param_1 + 0x48) = 0xc0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


