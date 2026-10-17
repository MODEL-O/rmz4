// undefined FUN_0810c9b4(void)
// entry 0x810c9b4


undefined4 FUN_0810c9b4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  FUN_0801cff0(param_1);
  if ((1 < *(byte *)(iVar2 + 1)) && (1 < *(byte *)(iVar2 + 3))) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      cVar1 = *(char *)(iVar2 + DAT_0810c9e4 + 0xe);
    }
    else {
      cVar1 = *(char *)(iVar2 + DAT_0810ca00 + 0xf);
    }
    if (cVar1 != '\0') {
      return in_lr;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  return in_lr;
}


