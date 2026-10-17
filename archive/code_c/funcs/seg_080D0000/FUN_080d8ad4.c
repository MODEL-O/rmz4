// undefined FUN_080d8ad4(void)
// entry 0x80d8ad4


undefined4 FUN_080d8ad4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  if ((bVar1 & 0x10) == 0) {
    uVar2 = 0xffffff40;
  }
  else {
    uVar2 = 0xc0;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0xff;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d8b20);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  else {
    uVar4 = *DAT_080d8b64 * DAT_080d8b68 + DAT_080d8b6c;
    *DAT_080d8b64 = uVar4 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = ((byte)(uVar4 >> 0x10) & 7) + 0x7f;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d8b70);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_080d8b74(param_1);
  return in_lr;
}


