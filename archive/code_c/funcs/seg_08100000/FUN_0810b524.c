// undefined FUN_0810b524(void)
// entry 0x810b524


undefined4 FUN_0810b524(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (((*(char *)(iVar2 + 2) != '\0') && (2 < *(byte *)(iVar2 + 3))) &&
     (*(char *)(iVar2 + DAT_0810b550) != '\0')) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      cVar1 = *(char *)(iVar2 + 0xddc);
    }
    else {
      cVar1 = *(char *)(iVar2 + 0xddd);
    }
    if (cVar1 != '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      FUN_0801cff0(param_1);
      return in_lr;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  return in_lr;
}


