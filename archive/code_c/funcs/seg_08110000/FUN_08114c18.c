// undefined FUN_08114c18(void)
// entry 0x8114c18


undefined4 FUN_08114c18(void)

{
  bool bVar1;
  undefined4 in_lr;
  
  bVar1 = false;
  if (((((*(byte *)(DAT_08114c64 + 0x12) & 1) == 0) && (*(int *)(DAT_08114c64 + 0x164) == 0)) &&
      (*(char *)(DAT_08114c68 + 2) == '\0')) &&
     ((*(char *)(DAT_08114c6c + 0x14) != '\x01' && (*(int *)(DAT_08114c70 + 8) != 0)))) {
    FUN_0810de84();
    bVar1 = true;
  }
  if (!bVar1) {
    *(undefined2 *)(DAT_08114c70 + 4) = 0;
  }
  FUN_0810df70();
  return in_lr;
}


