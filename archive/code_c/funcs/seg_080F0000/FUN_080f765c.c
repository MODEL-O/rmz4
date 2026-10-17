// undefined FUN_080f765c(void)
// entry 0x80f765c


undefined4 FUN_080f765c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_080f7728;
  if (*DAT_080f7724 == 0x10) {
    *(short *)(DAT_080f7728 + 0xce) = (short)DAT_080f772c;
    *(undefined2 *)(DAT_080f7730 + 0xce) = 9;
  }
  FUN_08001d30(DAT_080f7734,
               ((uint)*(ushort *)(iVar1 + 0xce) - (uint)(*(ushort *)(DAT_080f7734 + 6) >> 6)) * 0x20
               + 0x10000);
  FUN_08002208(DAT_080f7738,
               ((uint)*(ushort *)(DAT_080f7730 + 0xce) - (uint)*(byte *)(DAT_080f7738 + 7)) * 0x20 +
               0x200);
  uVar2 = FUN_080f75bc(param_1,1,2);
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  uVar2 = FUN_080f75bc(param_1,1,0);
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
  uVar2 = FUN_080f75bc(param_1,1,1);
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  uVar2 = FUN_080f75bc(param_1,2,3);
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  uVar2 = FUN_080f75bc(param_1,1,4);
  *(undefined4 *)(param_1 + 100) = uVar2;
  uVar2 = FUN_080f75bc(param_1,2,5);
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f773c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 4;
  }
  FUN_080f762c(param_1);
  return in_lr;
}


