// undefined FUN_08071474(void)
// entry 0x8071474


undefined4 FUN_08071474(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x54) < *(int *)(*DAT_0807149c + 0x54) ==
      (bool)(*(byte *)(param_1 + 10) >> 4 & 1)) {
    cVar1 = '\b';
  }
  else {
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(char *)(param_1 + 0xe) = cVar1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080714c0));
  return in_lr;
}


