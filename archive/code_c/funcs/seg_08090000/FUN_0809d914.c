// undefined FUN_0809d914(void)
// entry 0x809d914


undefined4 FUN_0809d914(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar3 = DAT_0809d928;
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar3 = 0x180;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = DAT_0809d96c;
    *(undefined1 *)(param_1 + 0x12) = 0xff;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809d9a0);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0x10);
  }
  return in_lr;
}


