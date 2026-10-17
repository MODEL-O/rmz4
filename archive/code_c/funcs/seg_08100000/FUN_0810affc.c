// undefined FUN_0810affc(void)
// entry 0x810affc


undefined4 FUN_0810affc(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  FUN_0801cff0(param_1);
  if ((1 < *(byte *)(iVar2 + 1)) && (1 < *(byte *)(iVar2 + 3))) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      cVar1 = *(char *)(iVar2 + DAT_0810b02c + 0x17);
    }
    else {
      cVar1 = *(char *)(iVar2 + DAT_0810b048 + 0x18);
    }
    if (cVar1 != '\0') {
      return in_lr;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  return in_lr;
}


