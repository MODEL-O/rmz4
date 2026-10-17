// undefined FUN_08040adc(void)
// entry 0x8040adc


undefined4 FUN_08040adc(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  pcVar2 = (char *)(iVar1 + 0xbd);
  if ((*pcVar2 == '\0') && ((*(uint *)(param_1 + 0x14) & 4) != 0)) {
    FUN_080e88dc(iVar1 + 0x54,*(undefined1 *)(*(int *)(iVar1 + 0x28) + DAT_08040b30),
                 *(byte *)(iVar1 + 10) >> 4 & 1,*(undefined1 *)(iVar1 + 0xe));
    if (*(ushort *)(DAT_08040b34 + 0x20) <= DAT_08040b38) {
      *(ushort *)(DAT_08040b34 + 0x20) = *(ushort *)(DAT_08040b34 + 0x20) + 1;
    }
    *pcVar2 = *pcVar2 + '\x01';
  }
  return in_lr;
}


