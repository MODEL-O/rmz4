// undefined FUN_0808e95c(void)
// entry 0x808e95c


undefined4 FUN_0808e95c(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0x11);
  FUN_0801ce54();
  if (bVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar2 = bVar2 & 1;
  *(byte *)(param_1 + 0x4c) = bVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar2 << 4;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  *(undefined1 *)(param_1 + 0x25) = 0x18;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0x100;
  *(undefined2 *)(param_1 + 0x52) = 0x100;
  return in_lr;
}


