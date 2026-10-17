// undefined FUN_081056c8(void)
// entry 0x81056c8


undefined4 FUN_081056c8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    if (*(char *)(iVar1 + 0xb4) == '\0') {
      *(char *)(iVar1 + 0xb4) = '\x01';
      *(undefined4 *)(iVar1 + 0x8c) = 0;
      *(undefined4 *)(iVar1 + 0x90) = 0;
      *(undefined1 *)(iVar1 + 0x94) = 0;
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
      FUN_0801cf00(iVar1,DAT_08105718);
      iVar1 = *(int *)(iVar1 + 0x28) + DAT_0810571c;
      *(undefined4 *)(iVar1 + 0x24) = 0;
      *(undefined4 *)(iVar1 + 0x28) = 0;
      FUN_08002b10(0x15c);
    }
  }
  return in_lr;
}


