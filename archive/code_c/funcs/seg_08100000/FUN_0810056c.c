// undefined FUN_0810056c(void)
// entry 0x810056c


undefined4 FUN_0810056c(int param_1)

{
  char cVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_081005e8 + (uint)*(byte *)(param_1 + 0xb4) & 0xffff);
    *(undefined1 *)(param_1 + 0x12) = 0x34;
    FUN_08005784(param_1 + 0x74,(uint)*(byte *)(param_1 + 0xb4) * 0x108 + DAT_081005ec);
    FUN_08002b10(0x162);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0x73) != '\x03') && (cVar1 = FUN_08100510(param_1), cVar1 == '\0')) {
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    FUN_0801cf00(param_1,DAT_081005f0 + (uint)*(byte *)(param_1 + 0xb4) & 0xffff);
  }
  else {
    if (*(char *)(param_1 + 0xe) != '\x02') {
      cVar1 = '\0';
      *(undefined1 *)(param_1 + 0x13) = 0;
      *(undefined1 *)(param_1 + 0xd) = 0;
      goto LAB_08100644;
    }
    pbVar2 = (byte *)(param_1 + 0xb4);
    FUN_0801cf00(param_1,DAT_0810064c + (uint)*pbVar2 & 0xffff);
    *pbVar2 = *pbVar2 + 1 & 1;
    FUN_08005784(param_1 + 0x74,(uint)*pbVar2 * 0x108 + DAT_08100650);
    FUN_08002b10(0x15c);
  }
  *(undefined1 *)(param_1 + 0x12) = 0xff;
  cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08100644:
  *(char *)(param_1 + 0xe) = cVar1;
  return in_lr;
}


