// undefined FUN_0804c128(void)
// entry 0x804c128


undefined4 FUN_0804c128(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804c200);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  FUN_0801cf00(param_1,1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  uVar1 = DAT_0804c204;
  FUN_08005760(param_1 + 0x74,DAT_0804c204,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar3 = -(uint)*(byte *)(param_1 + 0x12) + 0x10;
  if (iVar3 < 0) {
    iVar3 = -(uint)*(byte *)(param_1 + 0x12) + 0x13;
  }
  FUN_08005794(param_1 + 0x74,uVar1,0xffffffff,0xffffffff,0xffffffff,(iVar3 >> 2) + 1);
  iVar3 = DAT_0804c208;
  *(int *)(param_1 + 0x5c) =
       (int)*(short *)((*(byte *)(param_1 + 0x11) + 0x40 & 0xff) * 2 + DAT_0804c208) << 1;
  *(int *)(param_1 + 0x60) = (int)*(short *)((uint)*(byte *)(param_1 + 0x11) * 2 + iVar3) << 1;
  *(undefined1 *)(param_1 + 0x12) = 0x18;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  FUN_0804c03c(param_1);
  return in_lr;
}


