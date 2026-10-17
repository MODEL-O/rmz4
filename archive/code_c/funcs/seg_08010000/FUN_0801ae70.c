// undefined FUN_0801ae70(void)
// entry 0x801ae70


undefined4 FUN_0801ae70(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0801aeac);
    *puVar1 = (ushort)DAT_0801aeb0 & *puVar1 | 3;
    *(undefined4 *)(param_1 + 0x4c) = 0x438;
    *(undefined4 *)(param_1 + 0x50) = 0x50;
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(undefined4 *)(param_1 + 0x48) = 0xc0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


