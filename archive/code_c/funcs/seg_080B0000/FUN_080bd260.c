// undefined FUN_080bd260(void)
// entry 0x80bd260


undefined4 FUN_080bd260(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    iVar2 = *(int *)(param_1 + 0x28) + DAT_080bd2c0;
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 10;
    FUN_08002b10(0x1a4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pcVar3 = (char *)(param_1 + 0xb8);
  if (*pcVar3 == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *pcVar3 = '\x01';
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    FUN_0801cff0(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *pcVar3 = '\0';
    FUN_0801d1f4(param_1);
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bd2f8);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  return in_lr;
}


