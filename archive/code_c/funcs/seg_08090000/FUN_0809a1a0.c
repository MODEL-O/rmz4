// undefined FUN_0809a1a0(void)
// entry 0x809a1a0


undefined4 FUN_0809a1a0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar3 = FUN_08129198(*(undefined1 *)(param_1 + 0x11),3);
  FUN_0801cf00(param_1,(uVar3 & 0xff) * 0x10000 + DAT_0809a258 >> 0x10);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_0809a25c,param_1 + 0x54,4);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + (int)*(char *)((uint)*(byte *)(param_1 + 0x11) + DAT_0809a260);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + (int)*(char *)((uint)*(byte *)(param_1 + 0x11) + DAT_0809a264);
  iVar2 = DAT_0809a26c;
  iVar1 = DAT_0809a268;
  *(int *)(param_1 + 0x5c) =
       *(short *)((*(byte *)((uint)*(byte *)(param_1 + 0x11) + DAT_0809a26c) + 0x40 & 0xff) * 2 +
                 DAT_0809a268) * -0x380 >> 8;
  *(int *)(param_1 + 0x60) =
       *(short *)((uint)*(byte *)((uint)*(byte *)(param_1 + 0x11) + iVar2) * 2 + iVar1) * -0x380 >>
       8;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return in_lr;
}


