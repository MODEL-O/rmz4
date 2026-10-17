// undefined FUN_0804f8f0(void)
// entry 0x804f8f0


undefined4 FUN_0804f8f0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_0801cf00(param_1,DAT_0804f954);
    FUN_0803aabc(uVar2);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804f958);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  }
  return in_lr;
}


