// undefined FUN_080b29b8(void)
// entry 0x80b29b8


undefined4 FUN_080b29b8(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  char local_18;
  char local_17;
  char local_16;
  undefined4 local_14;
  int local_10;
  
  FUN_08129258(&local_18,DAT_080b2a40,3);
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(int *)(param_1 + 0x58) + DAT_080b2a44;
  pcVar1 = (char *)(((uint)*(byte *)(param_1 + 0xb9) * 4 + (uint)*(byte *)(param_1 + 0xb8) & 0xff) +
                   DAT_080b2a48);
  local_18 = *pcVar1 + local_18;
  local_17 = local_17 + *pcVar1;
  local_16 = local_16 + *pcVar1;
  FUN_080bd4d4(&local_14,0x300,local_18);
  FUN_080bd4d4(&local_14,0x300,local_17);
  FUN_080bd4d4(&local_14,0x300,local_16);
  return in_lr;
}


