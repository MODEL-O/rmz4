// undefined FUN_080abb2c(void)
// entry 0x80abb2c


undefined4 FUN_080abb2c(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(char *)(param_1 + 0xbc) = *(char *)(param_1 + 0xbc) + '\x01';
    *(undefined1 *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  iVar2 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)iVar2;
  uVar1 = FUN_08128fb8((0x14U - iVar2 & 0xff) << 8,0x14);
  *(undefined2 *)(param_1 + 0xc2) = uVar1;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


