// undefined FUN_080e0c78(void)
// entry 0x80e0c78


undefined4 FUN_080e0c78(int param_1)

{
  byte bVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\x01') {
    FUN_080e0be4(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_080e0cbc(param_1);
  pcVar2 = (char *)(param_1 + 0x74);
  if (*pcVar2 == '\0') {
    *pcVar2 = '\x01';
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    *pcVar2 = '\0';
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  return in_lr;
}


