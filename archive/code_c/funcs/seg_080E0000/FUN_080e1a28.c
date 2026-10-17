// undefined FUN_080e1a28(void)
// entry 0x80e1a28


void FUN_080e1a28(int param_1)

{
  byte bVar1;
  
  bVar1 = *(char *)(param_1 + 0x74) + 1;
  *(char *)(param_1 + 0x74) = bVar1 - (bVar1 & 0xfe);
  return;
}


