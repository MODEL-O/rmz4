// undefined FUN_08070cac(void)
// entry 0x8070cac


undefined4 FUN_08070cac(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x54) < *(int *)(*DAT_08070cd4 + 0x54) ==
      (bool)(*(byte *)(param_1 + 10) >> 4 & 1)) {
    cVar1 = *(char *)(param_1 + 0xe) + '\x03';
  }
  else {
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(char *)(param_1 + 0xe) = cVar1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08070cf8));
  return in_lr;
}


