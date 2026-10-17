// undefined FUN_080f7da8(void)
// entry 0x80f7da8


undefined4 FUN_080f7da8(int param_1)

{
  ushort uVar1;
  int *piVar2;
  ushort uVar3;
  undefined4 in_lr;
  char acStack_1c [4];
  char acStack_18 [4];
  
  FUN_08129258(acStack_1c,DAT_080f7e68,4);
  FUN_08129258(acStack_18,DAT_080f7e6c,4);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x7000);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined4 *)(param_1 + 0x30) = DAT_080f7e70;
  *(undefined2 *)(param_1 + 0x26) = 1;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 0x58) + acStack_1c[*(byte *)(param_1 + 0x10)] * 0x100
  ;
  *(int *)(param_1 + 0x68) =
       *(int *)(param_1 + 0x58) + acStack_18[*(byte *)(param_1 + 0x10)] * 0x100;
  uVar1 = FUN_08129198(*(undefined4 *)(DAT_080f7e74 + DAT_080f7e78),0x8e);
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0x10) >> 1 ^ 1;
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      FUN_080f7e80(param_1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_1 + 0xd);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f7e7c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + 0xd);
  FUN_080f7e80(param_1);
  return in_lr;
}


