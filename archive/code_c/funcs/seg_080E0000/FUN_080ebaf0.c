// undefined FUN_080ebaf0(void)
// entry 0x80ebaf0


undefined4 FUN_080ebaf0(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080ebb28);
  FUN_0801cff0(param_1);
  if (*(byte *)(param_1 + 0xbe) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar1 = *(byte *)(param_1 + 0xbe) & 1;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0x100;
  *(undefined1 *)(param_1 + 0xbf) = 0;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ebb88);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080ebb8c(param_1);
  return in_lr;
}


