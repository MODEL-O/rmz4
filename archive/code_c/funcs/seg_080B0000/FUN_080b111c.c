// undefined FUN_080b111c(void)
// entry 0x80b111c


undefined4 FUN_080b111c(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 4) == 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    *(undefined1 *)(iVar2 + 0x12) = 0x3c;
    *(undefined1 *)(iVar2 + 0xc2) = 1;
    bVar1 = *(byte *)(param_1 + 0x23) & 0xf0;
    if (((bVar1 == 0x10) || (bVar1 == 0x20)) || (bVar1 == 0x30)) {
      *(undefined1 *)(iVar2 + 0xc2) = 0xf;
    }
    if (*(int *)(iVar2 + 0x2c) != 0) {
      *(undefined1 *)(*(int *)(iVar2 + 0x2c) + 0x12) = 0x3c;
      *(undefined1 *)(*(int *)(iVar2 + 0x2c) + 0xc2) = *(undefined1 *)(iVar2 + 0xc2);
    }
  }
  return in_lr;
}


