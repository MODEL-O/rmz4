// undefined FUN_08070fcc(void)
// entry 0x8070fcc


undefined4 FUN_08070fcc(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 in_lr;
  undefined1 auStack_14 [8];
  
  FUN_08129258(auStack_14,DAT_08071028,5);
  *(undefined1 *)(*(int *)(param_1 + 0xb4) + 0xb4) = 1;
  uVar1 = FUN_08073e00(param_1);
  *(undefined1 *)(param_1 + 0xc3) = uVar1;
  cVar2 = FUN_08073e30(auStack_14,5);
  *(char *)(param_1 + 0xc2) = cVar2 + '\x01';
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0807102c));
  return in_lr;
}


