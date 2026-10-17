// undefined FUN_08114c8c(void)
// entry 0x8114c8c


undefined4 FUN_08114c8c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (((int)*(short *)(param_1 + 10) & 0x8000U) != 0) {
    iVar1 = 0;
    if ((*(char *)(DAT_08114ce0 + 6) != '\0') || (*(char *)(DAT_08114ce0 + 4) == '\x01')) {
      iVar1 = 1;
    }
    FUN_0810d85c((uint)*DAT_08114cd8 + DAT_08114cdc,iVar1 * -7 + 8,
                 (uint)*(byte *)(param_1 + 10) * 2 + 2 + (uint)*(byte *)(DAT_08114ce0 + 5));
  }
  return in_lr;
}


