// undefined FUN_080a4938(void)
// entry 0x80a4938


undefined4 FUN_080a4938(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined1 auStack_20 [4];
  byte abStack_1c [4];
  
  FUN_08129258(auStack_20,DAT_080a4a04,4);
  FUN_08129258(abStack_1c,DAT_080a4a08,4);
  bVar1 = *(byte *)(param_1 + 0x11);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a4a0c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cdbc(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined1 *)(param_1 + 0x24) = auStack_20[bVar1];
  *(undefined2 *)(param_1 + 0x50) = 0x100;
  *(undefined2 *)(param_1 + 0x52) = 0x80;
  FUN_0801cf00(param_1,DAT_080a4a10);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,(uint)abStack_1c[bVar1] * 0x18 + DAT_080a4a14,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080a4a18(param_1);
  return in_lr;
}


