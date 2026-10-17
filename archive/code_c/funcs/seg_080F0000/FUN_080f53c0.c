// undefined FUN_080f53c0(void)
// entry 0x80f53c0


undefined4 FUN_080f53c0(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(short *)(param_1 + 0xc2) == 0x77) {
    FUN_08002b5c(0x77);
    *(short *)(param_1 + 0xc2) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f5418);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


