// undefined FUN_080cde50(void)
// entry 0x80cde50


undefined4 FUN_080cde50(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0xd300);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080cdef0,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x25) = 7;
  *(undefined4 *)(param_1 + 0x5c) = DAT_080cdef4;
  *(undefined4 *)(param_1 + 100) = 0x20;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cdef8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080cde10(param_1);
  return in_lr;
}


