// undefined FUN_08012594(void)
// entry 0x8012594


undefined4 FUN_08012594(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (DAT_080125ac < *(int *)(param_1 + 0x34)) {
      uVar1 = 0xf0;
    }
    else {
      uVar1 = 0x78;
    }
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    *(undefined4 *)(param_1 + 0x44) = 0x100;
    *(undefined4 *)(param_1 + 0x48) = 0xc0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


