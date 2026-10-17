// undefined FUN_080add6c(void)
// entry 0x80add6c


undefined4 FUN_080add6c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801ce54();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080ade04);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0x98) = DAT_080ade08;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffe0;
  *(undefined4 *)(param_1 + 100) = 0xfffffff0;
  *(undefined4 *)(param_1 + 0x60) = 0x280;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffc0;
  *(undefined2 *)(param_1 + 0x50) = 0x80;
  *(undefined2 *)(param_1 + 0x52) = 0x80;
  *(undefined1 *)(param_1 + 0x12) = 0x80;
  *(undefined2 *)(param_1 + 0xbc) = 600;
  *(undefined2 *)(param_1 + 0xbe) = 0x80;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ade0c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080ade10(param_1);
  return in_lr;
}


