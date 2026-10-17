// undefined FUN_080d3230(void)
// entry 0x80d3230


undefined4 FUN_080d3230(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x74) == '\0') {
    if (*(short *)(param_1 + 0x78) == 0x100) {
      FUN_0801cc9c(param_1);
      goto LAB_080d3264;
    }
  }
  FUN_0801cdbc(param_1);
LAB_080d3264:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  FUN_0801cf00(param_1,0xb);
  if (*(byte *)(param_1 + 0x11) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar1 = *(byte *)(param_1 + 0x11) & 1;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_1 + 0x74);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x78);
  *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(param_1 + 0x78);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d32e4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080d32e8(param_1);
  return in_lr;
}


