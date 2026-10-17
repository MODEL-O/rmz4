// undefined FUN_0810bb00(void)
// entry 0x810bb00


undefined4 FUN_0810bb00(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x11) == '\0') {
    bVar1 = *(byte *)(iVar2 + DAT_0810bb4c);
  }
  else {
    if (*(char *)(iVar2 + 2) != '\x02') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    bVar1 = *(byte *)(iVar2 + DAT_0810bb2c + 3);
  }
  *(uint *)(param_1 + 0x58) = (uint)bVar1 * 0x2000 + 0x2000;
  FUN_0801cff0(param_1);
  return in_lr;
}


