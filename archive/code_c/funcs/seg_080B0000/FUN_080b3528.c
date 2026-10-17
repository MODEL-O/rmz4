// undefined FUN_080b3528(void)
// entry 0x80b3528


undefined4 FUN_080b3528(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (1 < *(byte *)(iVar1 + 0xc)) {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x58) + DAT_080b35a4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
    FUN_08005760(param_1 + 0x74,DAT_080b35a8,param_1 + 0x54,(int)*(short *)(param_1 + 0xa4));
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_080b35ac;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


