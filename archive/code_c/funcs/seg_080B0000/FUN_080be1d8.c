// undefined FUN_080be1d8(void)
// entry 0x80be1d8


undefined4 FUN_080be1d8(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(DAT_080be220 + 9) & 4) == 0) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080be23c);
    *(undefined4 *)(param_1 + 0xc) = 4;
    uVar2 = *(undefined4 *)(*piVar1 + 0x10);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080be224);
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar2 = *(undefined4 *)(*piVar1 + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return in_lr;
}


