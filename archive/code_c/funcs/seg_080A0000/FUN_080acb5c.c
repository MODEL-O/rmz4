// undefined FUN_080acb5c(void)
// entry 0x80acb5c


undefined4 FUN_080acb5c(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb8) != '\0') {
    bVar1 = *(byte *)(param_1 + 0xb7) + 1;
    *(byte *)(param_1 + 0xb7) = bVar1;
    if ((bVar1 & 3) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  return in_lr;
}


