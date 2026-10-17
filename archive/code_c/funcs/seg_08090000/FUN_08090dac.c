// undefined FUN_08090dac(void)
// entry 0x8090dac


undefined4 FUN_08090dac(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_08090e04);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x18;
    iVar1 = DAT_08090e08;
    *(undefined1 *)(iVar2 + 9) = 0x16;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x58);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    *(int *)(iVar2 + 0x28) = param_1;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x11) = param_2;
    *(char *)(param_1 + 0xd5) = *(char *)(param_1 + 0xd5) + '\x01';
  }
  return in_lr;
}


